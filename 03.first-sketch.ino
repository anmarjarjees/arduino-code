/*
Task: Creating our first Sketch
Using the built-in onboard LED that is connected to Digital Pin#13
And program it to make it blinking
NOTE: This LED has the letter "L" beside it
and it's placed besides the pin label "13" on the board

We need to keep the LED/Light on for certain period of time,
so we will use Arduino built-in function named "delay()"
The syntax:
delay(ms) => ms is the number/value of Milliseconds to Pause

Examples:
1000 MS = 1 Second of delay
5000 MS = 5 Seconds of delay
500 MS = .5 Second of delay
*/

/*
Coding recommendation to create a variable to hold the pin number:
*/

int LED = 13; // variable named "LED" with the value of "13", and the data type is integer

/*
NOTE:
Remember that the value of the variable "LED" will be the value of the pin that we need to target in the board
as we will use/place it in the pinMode() function as the first parameter to represent the pin
*/
void setup()
{
    // Put your setup code here, to run once:
    // Step#1: Initialize the specific pin which pin#13 as an output:
    // But instead of hard coding the actual number of the pin
    // we can create a variable to hold its value
    // pinMode(13, OUTPUT);
    pinMode(LED, OUTPUT);
}

void loop()
{
    // Put your main code here, to run repeatedly:

    // Step#2: Turning the LED on the board to be on:
    // NOTE: LED is always OFF by default
    digitalWrite(LED, HIGH);

    /*
    Since we need this Light to blink, we need to turn it off now:
    Step#3: Turn the LED off using the same function:

    But notice that we need enough time (pause)
    to see the light on before going off
    so we need to add another function "delay()" in between
    Step#4: Adding just a delay/pause
    */
    delay(1000); // Waiting for 1000 MS which is 1 Second with light is on
    digitalWrite(LED, LOW);
    delay(500); // Waiting for 500 MS which is .5 Second with light is off
}