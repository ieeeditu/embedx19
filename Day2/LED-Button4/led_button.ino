/*
 * here led will be connected to pin 2
 * button will be connected on pin 8
 * 
 * here we will glow led by sending signal through a button
*/
#define LED 2
#define pinButton 8
void setup() {
  pinMode(pinButton, INPUT); //set the button pin as INPUT
  pinMode(LED, OUTPUT); //set the LED pin as OUTPUT
  Serial.begin(9600);
}

void loop() {
     int stateButton = digitalRead(pinButton); 
     //read the state of the button
  if(stateButton == 1) { //if is pressed
     digitalWrite(LED, HIGH); //write 1 or HIGH to led pin
     Serial.println(stateButton);
  } else { //if not pressed
     digitalWrite(LED, LOW);  //write 0 or low to led pin
     Serial.println(stateButton);
  }
}
