int e = A5;
int f = A4;
int g = A0;
int r = 7;
int a;
int b;
int c;

void setup() {
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(c, INPUT);
  pinMode(r, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  a = analogRead(e);
  b = analogRead(f);
  c = analogRead(g);
  Serial.println("hiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii"); 
  Serial.println(a, DEC);
  Serial.println(b, DEC);
  Serial.println(c, DEC);
  delay(1000);  
  if (a >= 5 && b >= 5 && c >=5  ){
    digitalWrite(r,HIGH);
    Serial.println("im in loop 1"); 
  }
  else if (a >=5 && b <= 5 && c <= 5){
    digitalWrite(r,LOW); 
    Serial.println("im in loop 2"); 
  }    
}
