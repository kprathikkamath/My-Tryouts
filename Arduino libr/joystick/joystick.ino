
int xValue = 0 ; // read value of the X axis  
int yValue = 0 ; // read value of the Y axis  
int bValue = 0 ; // value of the button reading 

void setup()  
{ 
  Serial.begin(9600) ; 
  pinMode(0,INPUT) ;
  digitalWrite(0,LOW); 
} 

void loop() 
{ 
  xValue = analogRead(A4);  
  yValue = analogRead(A5);   
  bValue = digitalRead(0);  
  Serial.print(xValue);
  Serial.print(",");
  Serial.print(yValue);
  Serial.print(",");
  Serial.print(!bValue);
  Serial.print("\n");
  delay(10);  
}
