int LED = 8; // Variable named "LED" with the value of "8" (Digital Pin#8), and the data type is integer

/*
This code is similar to the previous example but with modifications to make the LED blink faster.
*/

int counter = 0; // Initializing the counter variable to start from 0

void setup()
{
    pinMode(LED, OUTPUT); // Setting LED pin as an OUTPUT
    Serial.begin(9600); // Opens serial port and sets data rate to 9600 bps
}

void loop()
{
    // Incrementing the loop counter by 100 in each iteration
    counter = counter + 100; // Change#1: Incrementing the loop value by 100

    // Printing the current blink number to the Serial Monitor
    Serial.print("Blink Number # ");
    Serial.println(counter);

    // Turning the LED on
    digitalWrite(LED, HIGH);
    
    /*
    Change#2: Reduce the delay time from 1000ms (1 second) to (1000 - counter)ms
    This will make the LED blink faster as the counter increases.
    */
    delay(1000 - counter);
    
    // Turning the LED off
    digitalWrite(LED, LOW);
    
    /*
    Change#3: Apply the same reduced delay value for the LED OFF state.
    */
    delay(1000 - counter);
}

/*
NOTE:
To run this program:
- Verify the code first by clicking on the verify icon (✓) in the Arduino IDE.
- Upload the code to the Arduino board by clicking on the upload arrow icon (→).
- Open the Serial Monitor Window to view the output:
  - Click on "Tools" > "Serial Monitor"
  - OR use the shortcut (Ctrl + Shift + M)
  - Ensure the baud rate in the Serial Monitor is set to 9600.
*/