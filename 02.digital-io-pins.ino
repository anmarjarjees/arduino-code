/*
Digital I/O Pins on Arduino board can be used for input or output (not at the same time)
Running from Pin 0 to Pin 13

Don't forget about the Analog pins also

Arduino Built-in functions:
pinMode() Function: tells arduino which mode the sketch uses for the specific digital or analog interface

The syntax:
pinMode(pin, mode)
Two parameters:
pin: which pin number to use/configure
mode: either input or output (How to configure it)
- "INPUT" => Normal input mode to receive voltage
- "INPUT_PULLuP" => Utilizes the Arduino's internal pullup resister
- "OUTPUT" => Normal output mode to send a voltage

Sine we need to use/run "pinMode(pin, mode)" function in our program for one time,
so it needs to be set/initialized inside the setup() function
=============================================================

digitalWrite() Function: Used in combination with pinMode() function to output the value to a pin
that has been configured as an output. This will turn an "LED" (light) on or off

The syntax:
pinMode(pin, value)
Two parameters:
pin: which pin number to use/configure
value: either hight or low (How to configure it)
- "HIGH" => To turn an LED on
- "LOW" => To turn an LED off
*/
void setup()
{
    // Put your setup code here, to run once:
    pinMode(2, INPUT); // Using pin#2 as an input voltage or using "OUTPUT"

    /*
    HINT:
    Arduino (Atmega) pins default to inputs,
    so they don't need to be explicitly declared as inputs with pinMode()
    when you're using them as inputs
    */
}

void loop()
{
    // Put your main code here, to run repeatedly:
    digitalWrite(2, HIGH); // Sending "High" value to pin#2 to turn the LED on
    // Or:
    digitalWrite(2, LOW); // Sending "LOW" value to pin#2 to turn the LED off
}