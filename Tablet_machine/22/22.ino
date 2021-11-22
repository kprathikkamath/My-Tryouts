#include <Servo.h>
Servo servo1;
Servo servo2;
const int proxsensor = 2;
int button = 3;
int button1;
const int relay = 6;

void setup() {
    servo1.attach(4);
    servo2.attach(7);
    pinMode(proxsensor,INPUT);
    pinMode(button, INPUT);
    pinMode(relay, OUTPUT);
    Serial.begin(9600);
}
void loop() {
  loop1();
  loop2();
  button1=digitalRead(button); 
  Serial.println(button1);
}
void loop1(){
  digitalWrite(relay, HIGH);    
  long state1 = digitalRead(proxsensor);
  if(state1 == LOW){
    servo2.write (0);
    delay(300);
    servo2.write (180); 
    delay(300);
    delay(700);
    servo1.write(0);
    delay(2000);
    servo1.write(40);
    digitalWrite(relay, LOW);
    delay(5000);
  }
}
void loop2(){
  button1=digitalRead(button);    
  if (button1 == 0){    
    servo2.write (0);
    delay(300);
    servo2.write (180); 
    delay(300);     
    }  
}
