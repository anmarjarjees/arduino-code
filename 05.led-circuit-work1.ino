int LED = 8; // an integer data type variable named "LED" with the value of "8" as we used Pin8 on Arduino

// Step#2: Adding an integer variable named "counter"
int counter = 0; // initialled the counter variable to start from 0
void setup()
{
    // Put your setup code here, to run once:
    pinMode(LED, OUTPUT);
    /*
    Step#1: Initializing the serial monitor port rate to 9600 using Serial.begin() monitor function:
    Syntax:
    Serial.begin(speed)
    Serial.begin(speed, config)

    Link: https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/
    */
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop()
{
    // Put your main code here, to run repeatedly:

    // Step#3: increment the loop counter by 1 in every loop step
    counter = counter + 1;

    // Step#4: Print at text with the current value of "counter" loop:
    Serial.print("Blink Number # "); // Printing text value only (String)
    Serial.println(counter);         // println => to print in a new line

    digitalWrite(LED, HIGH);
    delay(1000); // Waiting for 1000 MS which is 1 Second with light is on
    digitalWrite(LED, LOW);
    delay(500); // Waiting for 500 MS which is .5 Second with light is off
}

/*
NOTE:
To run this program:
- You can verify the code first by clicking on the verify icon on the top left corner.
- Then upload it to Arduino board by clicking on the upload arrow icon on the top left corner
- Open the Serial Monitor Window using any way as explained in the README file
*/