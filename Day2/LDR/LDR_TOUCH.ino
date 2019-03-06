/*
 * In this you will use LDR as a Switch to light LED
 * Connect LDR to A5
 * Connect LED to Pin 13 (you can use any but you have to connect LED on that pin

 * Here we have made an trigger as long as LDR is touched it keeps LED on 
*/
#define LDRpin A5 // pin where we connected the LDR and the resistor
int LDRValue = 0;     // result of reading the analog pin

void setup() 
{
  Serial.begin(9600); // sets serial port for communication
  pinMode(13,OUTPUT);
}
void loop()
 {
  LDRValue = analogRead(LDRpin); // read the value from the LDR
Serial.println(LDRValue);      // print the value to the serial port
  if(LDRValue<=100 && LDRValue>=20) //FOR CALIBRATION
  {
 digitalWrite(13,HIGH);
 delay(100);
  }
  else
  {
 digitalWrite(13,LOW);
 delay(100);
  }
  delay(100);                    // wait a little
}
