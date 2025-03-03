/*
Task: Creating our first Sketch
Using the built-in onboard LED that is connected to Digital Pin#13
And program it to make it blink.

NOTE: This LED has the letter "L" beside it
and it's placed beside the pin label "13" on the board.

We need to keep the LED/Light on for a certain period of time,
so we will use Arduino's built-in function named "delay()".

The syntax:
delay(ms) => ms is the number/value of milliseconds to pause.

Examples:
1000 MS = 1 Second of delay
5000 MS = 5 Seconds of delay
500 MS = 0.5 Second of delay
*/

// Declaring a variable to store the LED pin number
int LED = 13; // "LED" variable holds the value "13", which is the pin number.

/*
NOTE:
Using a variable instead of directly writing "13" in functions like pinMode()
and digitalWrite() makes the code more readable and easier to modify.
*/

void setup()
{
    // Step#1: Set pin#13 as an output to control the LED
    // Instead of hard coding "13", we use the "LED" variable.
    pinMode(LED, OUTPUT);
}

void loop()
{
    // Step#2: Turn the LED on
    // NOTE: The LED is OFF by default
    digitalWrite(LED, HIGH);
    
    // Step#3: Wait for 1 second (1000 milliseconds) before turning it off
    delay(1000);
    
    // Step#4: Turn the LED off
    digitalWrite(LED, LOW);
    
    // Step#5: Wait for 0.5 seconds (500 milliseconds) before turning it on again
    delay(500);
}
