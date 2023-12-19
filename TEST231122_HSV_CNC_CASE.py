import cv2
import numpy as np
from scipy.spatial import distance as dist

from imutils import perspective

from imutils import contours

import imutils

import traceback

def nothing(x):
    pass

def midpoint(ptA, ptB):
    return ((ptA[0] + ptB[0]) * 0.5, (ptA[1] + ptB[1]) * 0.5)


cv2.namedWindow("Trackbars")
cv2.namedWindow("Image",0)
cv2.namedWindow("ddd",0)
cv2.namedWindow("Result",0)
cv2.namedWindow("mask",0)

cv2.createTrackbar("H - H", "Trackbars", 179, 179, nothing)
cv2.createTrackbar("H - S", "Trackbars", 255, 255, nothing)
cv2.createTrackbar("H - V", "Trackbars", 255, 255, nothing)

cv2.createTrackbar("L - H", "Trackbars", 0, 179, nothing)
cv2.createTrackbar("L - S", "Trackbars", 49, 255, nothing)
cv2.createTrackbar("L - V", "Trackbars", 0, 255, nothing)

def creatMask(image):

    h_h = cv2.getTrackbarPos("H - H", "Trackbars")
    h_s = cv2.getTrackbarPos("H - S", "Trackbars")
    h_v = cv2.getTrackbarPos("H - V", "Trackbars")

    l_h = cv2.getTrackbarPos("L - H", "Trackbars")
    l_s = cv2.getTrackbarPos("L - S", "Trackbars")
    l_v = cv2.getTrackbarPos("L - V", "Trackbars")

    upper_blue = h_h
    upper_green = h_s
    upper_red = h_v

    lower_blue = l_h
    lower_green = l_s
    lower_red = l_v

    # 转换成hsv空间
    hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
    # cv2.imshow("hsv", hsv)
    # 提取图片的蓝色
    upper_hsv = np.array([upper_blue, upper_green, upper_red])
    lower_hsv = np.array([lower_blue, lower_green, lower_red])
    print("upper_green : ",upper_hsv)
    print("lower_green : ",lower_hsv)

    upper_green = np.array([77, 255, 255])
    lower_green = np.array([35, 43, 46])

    mask = cv2.inRange(hsv, lowerb=lower_hsv, upperb=upper_hsv)
    # mask2 = cv2.inRange(hsv, lowerb=lower_green, upperb=upper_green)
    res = cv2.bitwise_and(image, image, mask=mask)
    # res2 = cv2.bitwise_and(image, image, mask=mask2)

    #Canny邊緣檢測
    # if mask != []:
    try:
        # gray = cv2.cvtColor(mask, cv2.COLOR_BGR2GRAY)
        edged = cv2.Canny(mask, 50, 100)
        edged = cv2.dilate(edged, None, iterations=1)
        edged = cv2.erode(edged, None, iterations=1)
        
       
        
        cnts = cv2.findContours(edged.copy(), cv2.RETR_EXTERNAL,
                                cv2.CHAIN_APPROX_SIMPLE)
        cnts = imutils.grab_contours(cnts)
        (cnts, _) = contours.sort_contours(cnts)
        pixelsPerMetric = None

        # loop over the contours individually
        for c in cnts:
            # if the contour is not sufficiently large, ignore it
            if cv2.contourArea(c) < 100:
                continue
            # compute the rotated bounding box of the contour
            orig = image.copy()
            box = cv2.minAreaRect(c)
            box = cv2.cv.BoxPoints(box) if imutils.is_cv2() else cv2.boxPoints(box)
            box = np.array(box, dtype="int")
            # order the points in the contour such that they appear
            # in top-left, top-right, bottom-right, and bottom-left
            # order, then draw the outline of the rotated bounding
            # box
            box = perspective.order_points(box)
            cv2.drawContours(orig, [box.astype("int")], -1, (0, 255, 0), 2)
            # loop over the original points and draw them
            for (x, y) in box:
                cv2.circle(orig, (int(x), int(y)), 5, (0, 0, 255), -1)
            # unpack the ordered bounding box, then compute the midpoint
            # between the top-left and top-right coordinates, followed by
            # the midpoint between bottom-left and bottom-right coordinates
            (tl, tr, br, bl) = box
            (tltrX, tltrY) = midpoint(tl, tr)
            (blbrX, blbrY) = midpoint(bl, br)
            # compute the midpoint between the top-left and top-right points,
            # followed by the midpoint between the top-righ and bottom-right
            (tlblX, tlblY) = midpoint(tl, bl)
            (trbrX, trbrY) = midpoint(tr, br)
            # draw the midpoints on the image
            cv2.circle(orig, (int(tltrX), int(tltrY)), 5, (255, 0, 0), -1)
            cv2.circle(orig, (int(blbrX), int(blbrY)), 5, (255, 0, 0), -1)
            cv2.circle(orig, (int(tlblX), int(tlblY)), 5, (255, 0, 0), -1)
            cv2.circle(orig, (int(trbrX), int(trbrY)), 5, (255, 0, 0), -1)
            # draw lines between the midpoints
            cv2.line(orig, (int(tltrX), int(tltrY)), (int(blbrX), int(blbrY)),
                     (255, 0, 255), 2)
            cv2.line(orig, (int(tlblX), int(tlblY)), (int(trbrX), int(trbrY)),
                     (255, 0, 255), 2)
            dA = dist.euclidean((tltrX, tltrY), (blbrX, blbrY))
            dB = dist.euclidean((tlblX, tlblY), (trbrX, trbrY))
            # if the pixels per metric has not been initialized, then
            # compute it as the ratio of pixels to supplied metric
            # (in this case, inches)
            # if pixelsPerMetric is None:
            #     pixelsPerMetric = dB / 100
            # compute the size of the object
            print("DA = ",dA)
            # dimA = 159.2*(dA*0.00155) / (677*0.00155)#OAK-D
            # dimB = 159.2*(dB*0.00155) / (677*0.00155)
            dimA = 63.18 * (dA * 0.0022) / 6 # XW500
            dimB = 63.18 * (dB * 0.0022) / 6
            # draw the object sizes on the image
            cv2.putText(orig, "{:.3f}mm".format(dimA),
                        (int(tltrX - 15), int(tltrY - 10)), cv2.FONT_HERSHEY_SIMPLEX,
                        0.65, (255, 255, 255), 2)
            cv2.putText(orig, "{:.3f}mm".format(dimB),
                        (int(trbrX + 10), int(trbrY)), cv2.FONT_HERSHEY_SIMPLEX,
                        0.65, (255, 255, 255), 2)
            # show the output image
            cv2.imshow("Image", orig)
        # print(cnts)
        cv2.imshow('ddd', edged)
    except:
        print("=="*40)
        print(traceback.print_exc())



    cv2.imshow('Result', res)
    # cv2.imshow('Result2', res2)
    # cv2.imshow('Result2', res2)
    # [125 255 255]
    # [38 35 20]
    cv2.imshow("mask", mask)
    # cv2.imshow("ori", image)
    # cv2.imshow("mask2", mask2)

# cap = cv2.VideoCapture("obj_detect.mp4")
# cap = cv2.VideoCapture(0)
frame = cv2.imread("XW500-2.jpg")
while True:


    # success, frame = cap.read()

    # frame = cv2.resize(frame, (1280,960), interpolation=cv2.INTER_AREA)
    # frame = cv2.resize(frame, (1920,1080), interpolation=cv2.INTER_AREA)

    creatMask(frame)
    
    # cv2.waitKey(0)

    if cv2.waitKey(1) & 0xFF == 27:
        break
cap.release()
cv.destroyAllWindows()