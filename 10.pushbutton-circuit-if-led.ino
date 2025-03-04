/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  Link: https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// Part 3: Adding LED Code: Yes, all the new code changes have comments that start with "Adding" :-)
// NOTE: I removed my comments from this file as it's just the third part:

// Declaring an integer variable for the pushbutton pin number:
int pushButton = 10;

// Adding an integer variable to store the LED pin number:
int LED = 12; // We are using pin 12 for the LED in our circuit

// The setup routine runs once when you press reset:
void setup()
{
  // Initialize serial communication at 9600 bits per second to allow data output to the Serial Monitor:
  Serial.begin(9600);
  
  // Set the pushbutton's pin as an input so we can read its state:
  pinMode(pushButton, INPUT);

  // Adding another pinMode() function to configure the LED pin as an output:
  // This allows us to control the LED (turn it ON and OFF)
  pinMode(LED, OUTPUT);
}

// The loop routine runs continuously, allowing real-time input reading:
void loop()
{
  // Read the state of the pushbutton (HIGH when pressed, LOW when not pressed):
  int buttonState = digitalRead(pushButton);
  
  if (buttonState == HIGH) // If the pushbutton is pressed
  {
    Serial.print("Pushbutton is pressed, its value is: ");
    Serial.println(buttonState);

    // Adding digitalWrite():
    // Since we want the LED to turn on only when the pushbutton is pressed,
    // we add digitalWrite() inside this if condition:
    digitalWrite(LED, HIGH); // Turns the LED ON
  }
  /*
  Adding else statement:
  NOTE:
  Once the LED turns ON in our circuit, it will stay "ON" unless we explicitly turn it OFF.
  We need to turn it OFF when the pushbutton is released (i.e., when buttonState becomes LOW).
  Instead of adding another if statement, we use an else statement, which automatically runs
  when the if condition is NOT met.

  IMPORTANT:
  We are using a "Momentary Pushbutton/Switch" in this circuit.
  - This type of switch only stays "ON" (HIGH) as long as it is pressed.
  - When released, it automatically returns to the "OFF" (LOW) state.
  - If you want the LED to remain ON even after releasing the button, additional logic would be needed.
  */
  else
  {
    digitalWrite(LED, LOW); // Turns the LED OFF when the pushbutton is released
  }

  delay(1); // Very short delay in between reads for stability
}

/*
NOTE:
To run this program:
- Verify the code first by clicking on the verify icon (check) in the Arduino IDE.
- Upload the code to the Arduino board by clicking on the upload arrow icon (left-arrow).
- Open the Serial Monitor Window to view the output:
  - Click on "Tools" > "Serial Monitor"
  - OR use the shortcut (Ctrl + Shift + M)
  - Ensure the baud rate in the Serial Monitor is set to 9600.
*/
