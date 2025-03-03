int LED = 13; // Variable named "LED" with the value of "13" (Digital Pin#13), and the data type is integer

// Step#2: Adding an integer variable named "counter" to track the number of blinks
int counter = 0; // Initializing the counter variable to start from 0

void setup()
{
    // Put your setup code here, to run once:
    pinMode(LED, OUTPUT); // Setting LED pin as an OUTPUT
    
    /*
    Step#1: Initializing the Serial Monitor port rate to 9600 using Serial.begin() function:
    
    The Serial.begin() function is used to establish serial communication between the Arduino and the computer.
    It allows sending and receiving messages through the Serial Monitor.
    
    Syntax:
    Serial.begin(speed)  => Initializes serial communication at the specified baud rate (speed)
    Serial.begin(speed, config) => Optional configuration for advanced settings
    
    The common baud rate for communication is 9600 bits per second (bps), which is sufficient for most projects.
    
    Link: https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/
    */
    Serial.begin(9600); // Opens serial port and sets data rate to 9600 bps
}

void loop()
{
    // Put your main code here, to run repeatedly:
    
    // Step#3: Increment the loop counter by 1 in every iteration
    counter = counter + 1;
    
    /*
    Step#4: Print a message with the current value of "counter" to track the blink count.
    
    Serial.print()   => Prints text without moving to a new line.
    Serial.println() => Prints text and moves to a new line after printing.
    */
    Serial.print("Blink Number # "); // Printing text value only (String)
    Serial.println(counter);         // Printing the counter value on a new line

    // Turning the LED on
    digitalWrite(LED, HIGH);
    delay(1000); // Waiting for 1000ms (1 second) with LED ON

    // Turning the LED off
    digitalWrite(LED, LOW);
    delay(500); // Waiting for 500ms (0.5 seconds) with LED OFF
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