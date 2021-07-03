const int inputPin1  = 10;    // Pin 15 of L293D IC
const int inputPin2  = 11;    // Pin 10 of L293D IC
void setup() 
{
    Serial.begin(9600);
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(9,INPUT);
    pinMode(8,INPUT);
}

void loop() {
  directionControl();
  Serial.println(digitalRead(9));
  Serial.println(digitalRead(8));  
}

void directionControl() {
  if(digitalRead(9)==HIGH )
  { 
     digitalWrite(inputPin1, LOW);
     digitalWrite(inputPin2, HIGH);
     delay(15000);
     digitalWrite(inputPin1, LOW);
     digitalWrite(inputPin2, LOW);
  }
  if(digitalRead(8)==HIGH  )
  {
    digitalWrite(inputPin1, HIGH);
    digitalWrite(inputPin2, LOW); 
    delay(15000);
    digitalWrite(inputPin1, LOW);
    digitalWrite(inputPin2, LOW);
    
  }  
}
