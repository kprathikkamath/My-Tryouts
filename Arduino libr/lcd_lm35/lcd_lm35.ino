#include <LiquidCrystal.h>                                    
const int lm35_pin = A5;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;    
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 

void setup() {                                                

  lcd.begin(16, 2);
  
}

void loop() {
  Serial.println(digitalRead(9));
  int temp_adc_val;
  float temp_val;
  temp_adc_val = analogRead(lm35_pin);  
  temp_val = (temp_adc_val * 4.88); 
  temp_val = (temp_val/10);
   lcd.print(temp_val);
   delay(1000); 
   lcd.setCursor(0,0);

}
