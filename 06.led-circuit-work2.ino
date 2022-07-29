int LED = 8;
/*
The same code as the previous example/code file but with simple
change to make the LED blinks faster
*/

int counter = 0;
void setup()
{
    pinMode(LED, OUTPUT);
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop()
{
    // Put your main code here, to run repeatedly:

    counter = counter + 100; // Change1: Incrementing the loop value by 100

    Serial.print("Blink Number # ");
    Serial.println(counter);

    digitalWrite(LED, HIGH);

    /*
    Change2: Reduce the value of delay from 1000 MS which is 1 Second
    with light is on to be 1000-counter
    */
    delay(1000 - counter);
    digitalWrite(LED, LOW);

    /*
    Change3: Repeat the same code: 1000 - counter
    */
    delay(1000 - counter);
}

/*
NOTE:
To run this program:
- You can verify the code first by clicking on the verify icon on the top left corner.
- Then upload it to Arduino board by clicking on the upload arrow icon on the top left corner
- Open the Serial Monitor Window using any way as explained in the README file
*/