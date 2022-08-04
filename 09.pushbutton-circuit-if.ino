/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// Part2: Adding if condition code
// NOTE: I removed my comments from this file as it's just the second part:
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
  int buttonState = digitalRead(pushButton);
  /*
  Adding if statement:

  If (the pushbutton is pressed) Then: Output the value
  Which means we will not see 0's anymore :-)

  NOTE:
  In our case we are using "Momentary Pushbutton/Switch" which only remain in their "ON" (active) state
  or HIGH in our code below  as long as they're being actuated (pressed, held, pushed).
  Other type is "Maintained Pushbutton/Switch" which has On/Off function

  we need else statement:
  */
  if (buttonState == HIGH)
  {
    Serial.print("Pushbutton is pressed, its value is: ");
    Serial.println(buttonState);
  }

  delay(1); // delay in between reads for stability
}
