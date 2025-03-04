/*
Digital I/O Pins on an Arduino board can be used for input or output but not at the same time.
These pins range from Pin 0 to Pin 13.

Analog Pins:
In addition to digital pins, Arduino has analog pins (A0 - A5 on most boards).
Analog pins are typically used for reading sensor values but can also be configured as digital I/O.

=============================================================

Arduino Built-in Functions for Digital I/O:

1. pinMode() Function  
   Configures a specific pin as either an INPUT or OUTPUT to define its behavior.

   Syntax:  
   pinMode(pin, mode);

   - pin: The pin number to be configured.  
   - mode: The mode to set the pin:
     - "INPUT" => Normal input mode to receive voltage.
     - "INPUT_PULLUP" => Activates Arduino's internal pull-up resistor (useful for buttons/switches).
     - "OUTPUT" => Normal output mode to send voltage.

   Best Practice:  
   Since we only need to set pinMode(pin, mode); once, it should be placed inside the setup() function.

=============================================================

2. digitalWrite() Function  
   Used in combination with pinMode() to control output pins (e.g., turning an LED ON/OFF).

   Syntax:  
   digitalWrite(pin, value);

   - pin: The pin number to control.  
   - value: The signal level to set:
     - "HIGH" => Sends 5V (ON) to the pin (turns LED ON).
     - "LOW" => Sends 0V (OFF) to the pin (turns LED OFF).
*/

void setup()
{
    // Configure Pin 2 as an input (can also be set to OUTPUT depending on usage)
    pinMode(2, INPUT);

    /*
    Hint:
    By default, all Arduino (ATmega)* pins are set as INPUTS.
    This means calling pinMode() is not necessary when using pins as inputs.
    However, it is good practice to explicitly define their mode for clarity.

    * ATmega":
    > (with a capital "AT"), as used in ATmega328P, ATmega2560,
    > This is the official naming convention from Microchip (formerly Atmel), 
    > "Atmel" the manufacturer of ATmega microcontrollers used in Arduino boards.
    */
}

void loop()
{
    // Example: Controlling an LED connected to Pin 2

    digitalWrite(2, HIGH); // Turns the LED ON (sends 5V to pin 2)
    
    // Or:

    digitalWrite(2, LOW);  // Turns the LED OFF (sends 0V to pin 2)
}
