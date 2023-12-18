# -*- coding: utf-8 -*-
import time

import cv2
from cvzone.HandTrackingModule import HandDetector

cap = cv2.VideoCapture(0)
detector = HandDetector(detectionCon=0.8)

# 初始方框顏色和透明度
box_color = (255, 0, 0)  # 藍色
box_alpha = 0.5
check_box = [0,0,0,0,0,0]
while True:
    ret, frame = cap.read()
    frame = cv2.flip(frame, 1)
    orig = frame.copy()
    # 偵測手部
    hands, frame = detector.findHands(frame)
    box_coords = [
        [150, 250, 200, 300],
        [220, 250, 270, 300],
        [290, 250, 340, 300],
        [360, 250, 410, 300],
        [430, 250, 480, 300],
        [500, 250, 550, 300],
                  ]
    print(check_box)
    for i in range(len(box_coords)):
        if check_box[i] == 0:
            cv2.rectangle(orig, (box_coords[i][0], box_coords[i][1]), (box_coords[i][2], box_coords[i][3]), (0, 255, 0), 2)
        else:
            overlay = orig.copy()
            cv2.rectangle(overlay, (box_coords[i][0], box_coords[i][1]),
                          (box_coords[i][2], box_coords[i][3]), box_color, -1)
            orig = cv2.addWeighted(overlay, box_alpha, orig, 1 - box_alpha, 0)

    if hands:
        # 取得食指的位置
        hand = hands[0]
        finger = hand['lmList'][8]  # 8 是食指指尖的 index

        # 定義方框的座標

        for boxlen in range(len(box_coords)):
            # 檢查食指是否在方框內
            if box_coords[boxlen][0] < finger[0] < box_coords[boxlen][2] and box_coords[boxlen][1] < finger[1] < box_coords[boxlen][3]:
                # 如果在方框內，使用 addWeighted 函數疊加方框
                overlay = orig.copy()
                cv2.rectangle(overlay, (box_coords[boxlen][0], box_coords[boxlen][1]), (box_coords[boxlen][2], box_coords[boxlen][3]), box_color, -1)
                orig = cv2.addWeighted(overlay, box_alpha, orig, 1 - box_alpha, 0)
                check_box[boxlen] = 1
        result = all(element == 1 for element in check_box)  # 判斷陣列是否都等於1
        if result:
            check_box = [0 for _ in check_box]  # 歸零
            time.sleep(3)
        # else:
        #     cv2.rectangle(frame, (box_coords[0], box_coords[1]), (box_coords[2], box_coords[3]), (0, 255, 0), 2)

    cv2.imshow('Hand Tracking', orig)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
