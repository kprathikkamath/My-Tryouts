# -*- coding: utf-8 -*-
"""
Created on Fri Jun 25 16:58:31 2021

@author: USER
"""
import numpy as np
import cv2
from matplotlib import pyplot as plt


face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
video=cv2.VideoCapture(0)


while True:
    
    check,frame=video.read()
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    faces = face_cascade.detectMultiScale(gray, 1.3, 1)


    for (x,y,w,h) in faces:
        cv2.rectangle(frame,(x,y),(x+w,y+h),(255,0,0),2)
        roi_gray = gray[y:y+h, x:x+w]
        roi_color = frame[y:y+h, x:x+w]
        img=cv2.rectangle(frame,(x,y),(x+w,y+h),(0,0,255),1)
        img[y:y+h,x:x+w]=cv2.medianBlur(img[y:y+h,x:x+w],35)
        
    plt.imshow('frame',frame)
    key=cv2.waitKey(1)

    if key==ord('q'):
        break
    
video.release()
cv2.destroyAllWindows 
