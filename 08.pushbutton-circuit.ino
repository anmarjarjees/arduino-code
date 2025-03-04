/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  Link: https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// Part 1: Basic Pushbutton Code

// In our hardware (wiring connection), we used pin 10 (not pin 2 as in the Arduino example).
// We need to change the value of the following variable "pushButton" based on our connection.
// Digital pin 10 has a pushbutton attached to it. Assign it a name:
// int pushButton = 2; // Original example uses pin 2
int pushButton = 10; // Updated to use pin 10 based on our setup

// The setup routine runs once when you press reset:
void setup()
{
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // Set the pushbutton's pin as an input:
  pinMode(pushButton, INPUT);
}

// The loop routine runs repeatedly:
void loop()
{
  // Read the input pin:
  /*
  digitalRead() function: Reads the value from a specified digital pin from Arduino, either HIGH or LOW.
  This function is used only when we have a digital input.

  This function returns a value: HIGH or LOW, which is 1 (for HIGH) or 0 (for LOW) in our code.
  We store this value into the variable "buttonState", which is of type integer since its value will be either 1 or 0.

  Link: https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/
  */
  int buttonState = digitalRead(pushButton); // Read state from pin 10
  // Print out the value of "buttonState" which represents the state of the button (On/Off):
  Serial.println(buttonState);
  delay(1); // Short delay between reads for stability
}

/*
NOTE:
To run this program:
- Verify the code first by clicking on the verify icon (check) in the Arduino IDE.
- Upload the code to the Arduino board by clicking on the upload arrow icon (left-arrow).
- Open the Serial Monitor Window to view the output:
  - Click on "Tools" > "Serial Monitor"
  - OR use the shortcut (Ctrl + Shift + M)
  - Ensure the baud rate in the Serial Monitor is set to 9600.
*/
