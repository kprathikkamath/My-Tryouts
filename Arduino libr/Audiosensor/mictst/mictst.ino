int soundPin = A0;
int a = 4;
int b = 3;
int aState;
void setup()
{
  Serial.begin(9600);
  pinMode(soundPin, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
}
void loop()
{
  aState = analogRead(soundPin);
  Serial.println(aState);
  if(aState>600){
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    delay(10);
  }
  else{
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
  }
}
