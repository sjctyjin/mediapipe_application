import cv2
import cvzone
import mediapipe
print(cv2.__file__)
print(cvzone.__file__)
print(mediapipe.__file__)

pyinstaller -F --hidden-import=queue --paths="C:\Users\User\AppData\Roaming\Python\Python37\site-packages\cvzone" --paths="C:\Users\User\AppData\Roaming\Python\Python37\site-packages\mediapipe" passzone.py