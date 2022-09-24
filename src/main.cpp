#include <Arduino.h>

//I Noris Singa, 000812720 certify that this material is my original work. No other person's work has been 
//used without due acknowledgement. I have not made my work available to anyone else.



void setup() {
   // configure the USB serial monitor 
  Serial.begin(115200); 
} 
 
void loop() { 
   
 
 
  // read digitized value from the D1 Mini's A/D convertor 
  int iVal = analogRead(A0); 


  // iVal = map(iVal, 0, 1023 , 0, 3.3 );
  float voltage = iVal * (3.3/1023.0);
  // print value to the USB port 
  Serial.println("the Digitized Value of " + String(iVal) + " to an Analog voltage = " + String(voltage)+"V"); 
  
  
 
  // wait 0.5 seconds (500 ms) 
  delay(500); 
}