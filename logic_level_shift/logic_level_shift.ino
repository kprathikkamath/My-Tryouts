int c = D1;
int d = D2;
int e = D5;
int f = D3;
int g = D6;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(c, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(c, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(d, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(d, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  digitalWrite(e, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(e, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  digitalWrite(f, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(f, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  
  digitalWrite(g, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(g, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);    
}
