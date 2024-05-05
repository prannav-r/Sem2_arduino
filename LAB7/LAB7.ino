//Interfacing RGB LED with Arduino 
//Defining  variable and the GPIO pin on Arduino
int redPin= 5;
int greenPin = 6;
int  bluePin = 7;

void setup() {
  //Defining the pins as OUTPUT
  pinMode(redPin,  OUTPUT);              
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void  loop() {
  setColor(255, 0, 0); // Red Color
  delay(400);
  setColor(0,  255, 0); // Green Color
  delay(400);
  setColor(0, 0, 255); // Blue Color
  delay(400);
}
void setColor(int redValue, int greenValue,  int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin,  greenValue);
  analogWrite(bluePin, blueValue);
}