const int interruptPin = 3; 
const int relay = 8;
int prox = 9;  
long unsigned int a;
long unsigned int count;
int b;
int c;

void setup() { 
  Serial.begin(115200); 
  pinMode(relay,OUTPUT); 
  pinMode(prox,INPUT);
  pinMode(interruptPin, INPUT_PULLUP); 
  attachInterrupt(digitalPinToInterrupt(interruptPin), handleInterrupt, CHANGE); 
} 

void loop() 
{
  b = digitalRead(prox);
  c = a;
  Serial.println(b);
  Serial.println(a);
  if(b == 0 ){
    digitalWrite(relay,LOW);
      if (a >= 50){        
        digitalWrite(relay,HIGH);
        delay(2000);
        a = 0;
        count = 0;
    }
  }
}

void handleInterrupt() { 
    a = count++;
}
