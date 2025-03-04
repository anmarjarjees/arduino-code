// C++ code

/*
    This program simulates a simple traffic light system using three LEDs: 
    - Green LED (GO mode)
    - Yellow LED (YIELD mode)
    - Red LED (STOP mode)
*/

// Declare and initialize the variables for the LED pins:
int greenLed = 10;  // Green LED connected to Pin 10
int yellowLed = 11; // Yellow LED connected to Pin 11
int redLed = 12;    // Red LED connected to Pin 12

void setup()
{
    /*
    Set each LED pin as an "OUTPUT":
    */
    pinMode(greenLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(redLed, OUTPUT);

    /*
    Ensure all LEDs are "OFF" at the start:
    Reset each LED to "LOW" (OFF) using digitalWrite()
    */
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);

    /*
    Initialize serial communication at a baud rate of 9600
    */
    Serial.begin(9600);
}

void loop()
{
    // Mode#1: We can start with any LED, so let's make only the Green LED "ON":
    // Green LED ON (GO MODE)
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
    /*
    Printing a message using the serial monitor:
    */
    Serial.println("Traffic Light MODE: GO");
    // Adding a short delay for the Green Signal (How long to keep it on):
    delay(8000); // Keep Green LED ON for 8 seconds

    // Mode#2: We can put the Yellow LED "ON" by repeating the same steps/code:
    // Yellow LED ON (YIELD MODE)
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, LOW);
    Serial.println("Traffic Light MODE: YIELD");
    delay(4000); // Keep Yellow LED ON for 4 seconds

    // Mode#3: We can put the Red LED "ON" by repeating the same steps/code:
    // Red LED ON (STOP MODE)
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
    Serial.println("Traffic Light MODE: STOP");
    delay(10000); // Keep Red LED ON for 10 seconds
}

/*
NOTE:
To run this program:
- Verify the code by clicking on the verify icon (check) in the Arduino IDE.
- Upload the code to the Arduino board by clicking on the upload arrow icon (left-arrow).
- Open the Serial Monitor Window (using any way as explained in the README file) to view the output:
  - Click on "Tools" > "Serial Monitor"
  - OR use the shortcut (Ctrl + Shift + M)
  - Ensure the baud rate in the Serial Monitor is set to 9600.
*/