/*
    The default starting template for an Arduino sketch.
    Every Arduino program requires **two essential functions**:

    1. void setup()
       - Runs **only once** when the board is powered on or reset.
       - Used to initialize:
         - Variables
         - Pin modes (INPUT/OUTPUT)
         - Communication protocols (Serial, I2C, SPI, etc.)
       - Executes **before** the loop() function.

    2. void loop()
       - Runs **continuously in a loop** after setup().
       - Used for:
         - Reading sensor data
         - Controlling outputs (LEDs, motors, etc.)
         - Processing logic
       - The program remains in this loop as long as the Arduino is powered.

    NOTE:
    - Even if the sketch does not require setup or loop functionality, 
      both functions **must be present** in every Arduino program.
*/

// This function executes only once at the beginning of the program.
// Used for initializing input and output pins, setting up libraries, etc.
void setup()
{
    // Put your setup code here, to run once:
}

// This function runs repeatedly after setup() is executed.
// It contains the main logic of the program.
void loop()
{
    // Put your main code here, to run repeatedly:
}