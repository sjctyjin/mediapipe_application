from playsound import playsound
import cv2
img = cv2.imread('loss.jpg')
while True:
    cv2.imshow('asd',img)
    playsound('what.mp3')
cv2.waitKey(20)