from machine import Pin
from machine import ADC
import machine
import utime

b = Pin(2,Pin.OUT)
c = Pin(3,Pin.OUT)
adc1 = ADC(Pin(26))
adc2 = ADC(Pin(27))
adc3 = ADC(Pin(28))

while True :
    b.on()
    a1 = adc1.read_u16()
    b1 = adc2.read_u16()
    c1 = adc3.read_u16()
    if a1 >= 4000 and b1 >= 4000 and c1 >= 4000  :
        c.on()
    elif a1 >=4000 and b1 <= 4000 and c1 <= 4000 :
        c.off()
