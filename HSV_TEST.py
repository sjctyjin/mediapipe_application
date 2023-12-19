import pylab as plt
import cv2
import numpy as np
from cvzone.HandTrackingModule import HandDetector

def nothing(x):
    pass


cap = cv2.VideoCapture(0)
cv2.namedWindow("Trackbars")
cv2.namedWindow("img",0)
cv2.createTrackbar("(Blue) L - H", "Trackbars", 0, 179, nothing)
cv2.createTrackbar("(Green) L - S", "Trackbars", 0, 255, nothing)
cv2.createTrackbar("(Red) L - V", "Trackbars", 0, 255, nothing)
# cv2.createTrackbar("U - H", "Trackbars", 179, 179, nothing)
# cv2.createTrackbar("U - S", "Trackbars", 255, 255, nothing)
# cv2.createTrackbar("U - V", "Trackbars", 255, 255, nothing)

# 初始化手部檢測器
detector = HandDetector(detectionCon=0.2, maxHands=2)
# img = cv2.imread('hand2.jpg')

# 檢測手部
while True:
    img = cv2.imdecode(np.fromfile('hand2.jpg', dtype=np.uint8), cv2.IMREAD_UNCHANGED)

    l_h = cv2.getTrackbarPos("(Blue) L - H", "Trackbars")
    l_s = cv2.getTrackbarPos("(Green) L - S", "Trackbars")
    l_v = cv2.getTrackbarPos("(Red) L - V", "Trackbars")

    upper_blue = l_h
    upper_green = l_s
    upper_red = l_v


    b, g, r = cv2.split(img)

    # d = np.ones([len(b)]) * 10
    """
        R   G   B
       255 255  0   : 黃
       255  0  255  : 粉紅
        0  255 255  : 淺青

    """

    d = np.ones([b.shape[0], b.shape[1]], dtype=np.uint8) * upper_blue
    gd = np.ones([g.shape[0], g.shape[1]], dtype=np.uint8) * upper_green
    rd = np.ones([r.shape[0], r.shape[1]], dtype=np.uint8) * upper_red
    # print(len(d))
    # print(len(b))
    # b1 = b-10
    b1 = cv2.add(b, d)
    g1 = cv2.add(g, gd)
    r1 = cv2.add(r, rd)
    img = cv2.merge((b1, g1, r1))
    hands, imgs = detector.findHands(img)
    print(hands)
    if hands:
        for hand in hands:
            # 取得手部姿態
            lmList = hand["lmList"]

            # 顯示每個手部姿態的 pixel 座標
            if len(lmList) != 0:
                print(lmList[0])
                for x, y, id in lmList:
                    # print("ID = ",id)
                    # if id == 8:
                    cv2.putText(img, f"{id}", (x, y), cv2.FONT_HERSHEY_PLAIN, 1, (255, 0, 0), 2)
    cv2.imshow('img', img)
    cv2.waitKey(100)
    # cv2.destroyAllWindows()
    # plt.imshow(img[:,:,::-1])
    # plt.show()