import numpy as np
import cv2

img = cv2.imread("./assets/chess.png")
img = cv2.resize(img, (0, 0), fx=0.5, fy=0.5)
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
cors = cv2.goodFeaturesToTrack(gray, 100, 0.5, 10)
cors= np.int_(cors)
for cor in cors:
    x,y=cor.ravel()
    cv2.circle(img,(x,y),2,(255,0,0),-1)

# res = cv2.bitwise_and(img, img, cors)
cv2.imshow("iM", img)
cv2.waitKey()
cv2.destroyAllWindows()
