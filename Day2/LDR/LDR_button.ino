/*
 * In this you will use LDR as a Switch to light LED
 * Connect LDR to A5
 * Connect LED to Pin 13 (you can use any but you have to connect LED on that pin

 * Here we have made an trigger whenever the LDR is touched it changes the state of LED 
*/
#define LDRpin A5 // pin where we connected the LDR and the resistor
int LDRValue = 0;     // result of reading the analog pin
int a=0;
void setup() 
{
  Serial.begin(9600); // sets serial port for communication
  pinMode(13,OUTPUT);
}
void loop()
 {
  LDRValue = analogRead(LDRpin); // read the value from the LDR

Serial.println(LDRValue);      // print the value to the serial port
  if(LDRValue<=100 && LDRValue>=20) //For Calibration
  {
 digitalWrite(13,a=!a);
 delay(1000);
  }
    delay(100);
}
