/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// In our hardware (wiring connection) we used pin 10 (not pin 2 as the Arduino Example)
// We need to change the value of the following varaible "pushButton" based on our connection
// digital pin 10 has a pushbutton attached to it. Give it a name:
// int pushButton = 2;
int pushButton = 10;

// the setup routine runs once when you press reset:
void setup()
{
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop()
{
  // read the input pin:
  /*
  digitalRead() function: Reads the value from a specified digital pin from Arduino, either HIGH or LOW.
  This function is used only when we have a digital input.

  This function returns a value: HIGH or LOW which is 1 (for High) or 0 (for Low) in our code,
  So we can save it into a variable "buttonState" of type integer since its value will be either 1 or 0

  Link: https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/
  */
  int buttonState = digitalRead(pushButton); // Passing the variable "pushButton" that has the value of 10 (for pin 10)
  // print out the value of "buttonState" which represents the state of the button (On/Off):
  Serial.println(buttonState);
  delay(1); // delay in between reads for stability
}
