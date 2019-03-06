/*
 * In this you will see the application of PWM pin
 * Connect LED to Pin 6 (you can use any but you have to connect LED on that pin)

 * Here we are increasing PWM value and hence LED will gradually glow in and gradually fade out
*/
int led_pin = 6;
void setup() {
pinMode(led_pin, OUTPUT); //Declaring LED pin as output
}
void loop() {
for(int i=0; i<255; i++) //Fading the LED
{
analogWrite(led_pin, i);
delay(5);
}
for(int i=255; i>0; i--){
analogWrite(led_pin, i);
delay(5);
}
}
