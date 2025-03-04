/*
  Input Pull-up Serial

  This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a digital
  input on pin 2 and prints the results to the Serial Monitor.

  The circuit:
  - Momentary switch attached from pin 2 to ground
  - Built-in LED on pin 13

  Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
  20K-ohm resistor is pulled to 5V. This configuration causes the input to read
  HIGH when the switch is open, and LOW when it is closed.

  Created 14 Mar 2012
  by Scott Fitzgerald

  This example code is in the public domain.

  Link: https://www.arduino.cc/en/Tutorial/BuiltInExamples/InputPullupSerial
*/

void setup()
{
    // Start serial communication at 9600 bits per second
    Serial.begin(9600);

    // Configure pin 2 as an input and enable the internal pull-up resistor
    // Since we use "INPUT_PULLUP", the internal resistor is activated,
    // meaning the default state of the pin is HIGH when the button is NOT pressed.
    pinMode(2, INPUT_PULLUP);

    // Configure pin 13 as an output for the built-in LED
    pinMode(13, OUTPUT);
}

void loop()
{
    // Read the pushbutton state and store it in an integer variable
    int sensorVal = digitalRead(2);

    // Print the pushbutton state to the Serial Monitor
    Serial.println(sensorVal);

    /*
    IMPORTANT:
    - Since we are using an INPUT_PULLUP configuration, the logic is inverted.
    - The button will read HIGH when it is NOT pressed (open circuit).
    - The button will read LOW when it is pressed (closed circuit to ground).
    */

    if (sensorVal == HIGH)
    {
        // When the button is NOT pressed, turn the LED OFF
        digitalWrite(13, LOW);
    }
    else
    {
        // When the button is PRESSED, turn the LED ON
        digitalWrite(13, HIGH);
    }
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
