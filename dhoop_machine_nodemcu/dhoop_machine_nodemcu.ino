#include <Servo.h>
Servo servo;
const int proxSensor = D6;
int button = D5;
int button1 = 0;
void setup() 
{                
  pinMode(button, INPUT);   
  pinMode(proxSensor,INPUT); 
  servo.attach(D7);
  Serial.begin(9600);
}

void loop() 
{
  long state = digitalRead(proxSensor);
  button1=digitalRead(button);
  if(state == LOW ) 
  {
    servo.write (0);
    delay(300);
    servo.write (180); 
    delay(300);     
  }
  else if (button1 == 1)
  {   
    servo.write (0);
    delay(300);
    servo.write (180); 
    delay(300);
  }
}
