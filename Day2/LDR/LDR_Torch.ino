/*
 * here connect led to pin 13 
 * connect 1 terminal of LDR to A5
 
 * here whenever you will flash on LDR , LED will glow
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
  if(LDRValue>=1000)
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
