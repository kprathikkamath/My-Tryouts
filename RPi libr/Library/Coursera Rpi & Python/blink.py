import time
import RPi.GPIO as GPIO       ## Import GPIO library
GPIO.setmode(GPIO.BOARD)      ## Use board pin numbering
GPIO.setup(8, GPIO.OUT)
GPIO.setup(12, GPIO.IN, pull_up_down=GPIO.PUD_UP)## Setup GPIO Pin 11 to OUT
while True:
    input_state = GPIO.input(12)
    if input_state == True:        
	    GPIO.output(8,True)  ## Turn on Led
	    time.sleep(1)         ## Wait for one second
	    GPIO.output(8,False) ## Turn off Led
	    time.sleep(1)
    else:
        GPIO.output(8,True)