 #define outputA 3     //DT pin 
 #define outputB 2     //CLK pin

 int counter = 0; 
 int aState;
 int aLastState; 
 boolean bcw; 

 void setup() 
 { 
   pinMode (outputA,INPUT);
   pinMode (outputB,INPUT);
   
   Serial.begin (9600);
   aLastState = digitalRead(outputA);    // Reads the initial state of the outputA
 } 

 void loop() 
 { 
   aState = digitalRead(outputA);       // Reads the "current" state of the outputA
                                        // If the previous and the current state of the outputA are different, means knob is rotating
   if (aState != aLastState)
      {                                // If the outputB state is different to the outputA state, that means the encoder is rotating clockwise
        if (digitalRead(outputB) != aState) 
          { 
             counter ++;
             bcw = true;
          } 
        else 
          {
            bcw = false;
            counter --;
          }
      Serial.print("Position: ");
      Serial.println(counter);
      if (bcw)
        {
          Serial.println ("clockwise");
        }
      else 
        {
          Serial.println("counterclockwise");
         }
    } 
aLastState = aState;              // Updates the previous state of the outputA with the current state
 }
