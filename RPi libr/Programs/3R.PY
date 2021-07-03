import RPi.GPIO as IO
import numpy as np
import time

IO.setmode(IO.BOARD)
IO.setup(11,IO.OUT)
IO.setup(13,IO.OUT)
IO.setup(15,IO.OUT)
x= IO.PWM(11,50)
y= IO.PWM(13,50)
z= IO.PWM(15,50)
x.start(0)
y.start(0)
z.start(0)
while (True):
    
    print ("Restting joints to home position...")
    x.ChangeDutyCycle(2)
    y.ChangeDutyCycle(2.2)
    z.ChangeDutyCycle(2.3)
    
    print ("Enter the DH Parameter Values:")
    
    T1 = input("Enter angle THETA 1:")
    T1=float(T1)
    T2= input("Enter angle THETA 2:")
    T2=float(T2)
    T3= input("Enter angle THETA 3:")
    T3=float(T3)

    A1 = input("Enter angle ALPHA 1:")
    A1=float(A1)
    A2= input("Enter angle ALPHA 2:")
    A2=float(A2)
    A3= input("Enter angle ALPHA 3:")
    A3=float(A3)

    r1 = input("Enter angle r 1:")
    r1=float(r1)
    r2= input("Enter angle r 2:")
    r2=float(r2)
    r3= input("Enter angle r 3:")
    r3=float(r3)

    d1 = input("Enter angle d1:")
    d1=float(d1)
    d2= input("Enter angle d2:")
    d2=float(d2)
    d3= input("Enter angle d3:")
    d3=float(d3)

    #Parameter Table
    DH=[[T1,A1,r1,d1],
        [T2,A2,r2,d2],
        [T3,A3,r3,d3]]
    
    PT=[[(T1/180.0)*np.pi,(A1/180.0)*np.pi,r1,d1],
        [(T2/180.0)*np.pi,(A2/180.0)*np.pi,r2,d2],
        [(T3/180.0)*np.pi,(A3/180.0)*np.pi,r3,d3]]
    clear
    print("DH Parameter Table is:= ")
    print(np.matrix(DH))
    
    i=0
    H0_1=[[np.cos(PT[i][0]),-np.sin(PT[i][0])*np.cos(PT[i][1]),np.sin(PT[i][0])*np.sin(PT[i][1]),PT[i][2]*np.cos(PT[i][0])],
           [np.sin(PT[i][0]),np.cos(PT[i][0])*np.cos(PT[i][1]),-np.cos(PT[i][0])*np.sin(PT[i][1]),PT[i][2]*np.sin(PT[i][0])],
           [0,np.sin(PT[i][1]),np.cos(PT[i][1]),PT[i][3]],
           [0,0,0,1]]
    i=1
    H1_2=[[np.cos(PT[i][0]),-np.sin(PT[i][0])*np.cos(PT[i][1]),np.sin(PT[i][0])*np.sin(PT[i][1]),PT[i][2]*np.cos(PT[i][0])],
           [np.sin(PT[i][0]),np.cos(PT[i][0])*np.cos(PT[i][1]),-np.cos(PT[i][0])*np.sin(PT[i][1]),PT[i][2]*np.sin(PT[i][0])],
           [0,np.sin(PT[i][1]),np.cos(PT[i][1]),PT[i][3]],
           [0,0,0,1]]
    i=2
    H2_3=[[np.cos(PT[i][0]),-np.sin(PT[i][0])*np.cos(PT[i][1]),np.sin(PT[i][0])*np.sin(PT[i][1]),PT[i][2]*np.cos(PT[i][0])],
           [np.sin(PT[i][0]),np.cos(PT[i][0])*np.cos(PT[i][1]),-np.cos(PT[i][0])*np.sin(PT[i][1]),PT[i][2]*np.sin(PT[i][0])],
           [0,np.sin(PT[i][1]),np.cos(PT[i][1]),PT[i][3]],
           [0,0,0,1]]
    print("H0_1= ")
    print (np.matrix(H0_1))
    print("H1_2= ")
    print (np.matrix(H1_2))
    print("H2_3= ")
    print (np.matrix(H2_3))

    H0_2=np.dot(H0_1,H1_2)
    print("H0_2= ")
    print (np.matrix(H0_2))
    H0_3=np.dot(H0_2,H2_3)
    print("H0_3= ")
    print (np.matrix(H0_3))



    x.ChangeDutyCycle(T1*(7.5/180) + 2)
    y.ChangeDutyCycle(T2*(7.8/180) + 2.2)
    z.ChangeDutyCycle(T3*(7.7/180) + 2.3)
    
    time.sleep(10)
    exit()


