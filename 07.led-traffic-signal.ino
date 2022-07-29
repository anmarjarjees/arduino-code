// C++ code
/*
    Declare and initialize the varaibles that we will use in our program:
*/
int greenLed = 10;  // Refer to the Green LED that is connected to Pin 10
int yellowLed = 11; // Refer to the Yellow LED that is connected to Pin 11
int redLed = 12;    // Refer to the Red LED that is connected to Pin 10

void setup()
{
    /*
    Setting each LED to be an "OUTPUT":
    */
    pinMode(greenLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(redLed, OUTPUT);

    /*
        Make sure that each LED to be "OFF" to start with
        Reset all the initial value to be "LOW" which means "OFF"
        By using digitalWrite() method
    */
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);

    /*
    Initialize the serial communication at 9,600 rate
    */
    Serial.begin(9600);
}

void loop()
{
    // Mode#1: We can start with any LED, so let make only the Green LED "ON":
    // GO MODE:
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
    /*
    Printing a message using the serial monitor:
    */
    Serial.println("Traffic Light MODE: GO");
    // Adding a short delay for the Green Signal (How long to keep it on):
    delay(8000); // On for 8000MS which is 8 seconds

    // Mode#2: We can put the Yellow LED "ON" by repeating the same steps/code:
    // YIELD MODE:
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, LOW);
    Serial.println("Traffic Light MODE: YIELD");
    delay(4000); // On for 4000MS which is 4 seconds

    // Mode#3: We can put the Red LED "ON" by repeating the same steps/code:
    // STOP MODE:
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
    Serial.println("Traffic Light MODE: STOP");
    delay(10000); // On for 10000MS which is 10 seconds
}

/*
NOTE:
To run this program:
- You can verify the code first by clicking on the verify icon on the top left corner.
- Then upload it to Arduino board by clicking on the upload arrow icon on the top left corner
- Open the Serial Monitor Window using any way as explained in the README file
*/