/*
  Input Pull-up Serial

  This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a digital
  input on pin 2 and prints the results to the Serial Monitor.

  The circuit:
  - momentary switch attached from pin 2 to ground
  - built-in LED on pin 13

  Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
  20K-ohm resistor is pulled to 5V. This configuration causes the input to read
  HIGH when the switch is open, and LOW when it is closed.

  created 14 Mar 2012
  by Scott Fitzgerald

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/InputPullupSerial
*/

void setup()
{
    // Put your setup code here, to run once:
    // start serial connection
    Serial.begin(9600);

    // configure pin 2 as an input and enable the internal pull-up resistor
    // Pin 2 is where we connected the pushbutton is activated as "INPUT_PULLUP"
    // this will activate the pullup resistor
    pinMode(2, INPUT_PULLUP);

    // Pin 13 is set to "OUTPUT"
    pinMode(13, OUTPUT);
}

void loop()
{
    // Put your main code here, to run repeatedly:

    // read the pushbutton value into an integer variable as the value either on (1) or off (0)
    int sensorVal = digitalRead(2);

    // print out the value of the pushbutton to the "Serial Monitor"
    Serial.println(sensorVal);

    // Keep in mind the pull-up (it's a pull-up resistor) means the pushbutton's logic is inverted.
    // It goes HIGH when it's open (inactive-not pressed), and LOW when it's pressed (active).
    // Turn on pin 13 when the button's pressed, and off when it's not:
    if (sensorVal == HIGH)
    {
        // when the value is "HIGH", the light should be off
        digitalWrite(13, LOW);
    }
    else
    {
        // otherwise the lights should be turn on
        digitalWrite(13, HIGH);
    }
}