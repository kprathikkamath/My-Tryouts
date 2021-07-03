from machine import Pin
import utime

a = Pin(2,Pin.OUT)
b = Pin(3,Pin.OUT)
c = Pin(4,Pin.OUT)

while True:
    
    #First cycle :
    a.off()
    b.on()
    c.on()
    utime.sleep(4)
    
    #Second cycle :
    a.off()
    b.on()
    c.off()
    utime.sleep(0.45)
    
    #Third cycle :
    a.off() 
    b.off()
    c.off()
    utime.sleep(0.7)
    
    #Fourth cycle : 
    a.on()
    b.off()
    c.on()
    utime.sleep(4)
    
    #Fifth cycle :
    a.on()
    b.off()
    c.off()
    utime.sleep(0.45)
    
    #Sixth cycle :
    a.off()
    b.off()
    c.off()
    utime.sleep(0.7)
