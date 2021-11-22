#include <Servo.h>
Servo servo1;
Servo servo2;
const int proxsensor = D2;
int button = D1;
int button1 = 0;
const int relay = D6;

void setup() {
    servo1.attach(D4);
    servo2.attach(D3);
    pinMode(proxsensor,INPUT);
    pinMode(button, INPUT);
    pinMode(relay, OUTPUT);
    Serial.begin(9600);
}
void loop() {
  loop1();
  loop2();
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
    servo1.write(90);
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
