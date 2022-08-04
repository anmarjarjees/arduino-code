/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// Part3: Adding LED Code
// NOTE: I removed my comments from this file as it's just the third part:

int pushButton = 10;

// Adding the LED pin number integer variable:
int LED = 12; // As we used pin 12 in our circuit

// the setup routine runs once when you press reset:
void setup()
{
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);

  // Setting the LED pin as an output:
  pinMode(LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()
{
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  if (buttonState == HIGH)
  {
    Serial.print("Pushbutton is pressed, its value is: ");
    Serial.println(buttonState);

    // We need the LED to turn on only when Pushbutton is pressed
    // So we can add the digitalWrite() below inside this if condition:
    digitalWrite(LED, HIGH);
  }
  /*
  NOTE:
  Once the LED turns on in our circuit, it will stay "ON",
  so we need to make it "OFF" again, but we only want to make "OFF" when we release the push button.
  which means buttonState will be "LOW" in our code below

  No need to add another if statement:   if (buttonState == HIGH)!, else statement will do the job

  Don't forget that we are using "Momentary Pushbutton/Switch",
  so to keep the LED always "On" you have to press and hold the button
  */
  else
  {
    digitalWrite(LED, LOW);
  }

  delay(1); // delay in between reads for stability
}
