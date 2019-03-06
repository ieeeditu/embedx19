/*
 * Middle pin of Potentiometer will be connected on any Analog pin (here we are using A0)
 * connect led to pin 9
 
 *  here we will change intensity of led by sending signal through potentiometer
*/
int potPin= A0;  //Declare potPin to be analog pin A0
int LEDPin= 9;  // Declare LEDPin to be arduino pin 9
int readValue;  // Use this variable to read Potentiometer
int writeValue; // Use this variable for writing to LED

void setup() {
  pinMode(potPin, INPUT);  //set potPin to be an input
  pinMode(LEDPin, OUTPUT); //set LEDPin to be an OUTPUT
  Serial.begin(9600);      // turn on Serial Port
}

void loop() {
  
 readValue = analogRead(potPin);  //Read the voltage on the Potentiometer
 writeValue = (255./1023.) * readValue; //Calculate Write Value for LED
 analogWrite(LEDPin, writeValue);      //Write to the LED
 Serial.print("You are writing a value of ");  //for debugging print your values
 Serial.println(writeValue);
 
}
