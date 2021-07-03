void setup() {
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  const int s=digitalRead(7);
  if (s==1){
     Serial.println("Sensor is touched");
  }
}
