# Arduino-code
## Brief and Simple Demonstration About How to Start with Arduino Programming
##### Anmar Jarjees

# About Arduino?
![Arduino UNO R3](https://github.com/anmarjarjees/arduino-code/blob/master/images/Arduino_Uno_R3.jpg)

Arduino is an open-source electronics platform designed for beginners and professionals alike. It consists of two main components:
1. Hardware – The Arduino board (like the Arduino Uno R3) with a small processor that runs code.
2. Software – The Arduino IDE, a program where you write and upload code to the board. The coding language is based on C++.

## Why Use Arduino?
Arduino is easy to use and great for learning how to code and build electronic projects. It features easy-to-use hardware and software, making it perfect for anyone interested in creating interactive objects or environments.

- [More About Arduino Uno R3](https://docs.arduino.cc/hardware/uno-rev3/)

- [Buy Arduino Uno R3](https://store-usa.arduino.cc/products/arduino-uno-rev3)

## How to Connect It?
The Arduino Uno R3 connects to your computer with a USB cable, allowing you to upload code and power the board.

[Arduino Board - UNO R3](https://docs.arduino.cc/hardware/uno-rev3)

[Arduino Uno Rev3](https://store-usa.arduino.cc/collections/boards/products/arduino-uno-rev3)

# MCU (Microcontroller Unit)
A microcontroller is a small computer built into a single VLSI (Very Large Scale Integration) integrated circuit (IC) chip. It contains:
- One or more CPUs (processor cores)
- Memory (to store and run programs)
- Programmable input/output peripherals (to connect with sensors, motors, and other components)

Learn more about [Microcontroller](https://en.wikipedia.org/wiki/Microcontroller)

# Breadboards:
A breadboard is anything you use to prototype electronics. When working on electronic circuits, the breadboard is a white, plastic, and solderless panel (also known as a protoboard). It helps run and test circuits without the need for soldering.

## How Does a Breadboard Work?
![Breadboard](https://github.com/anmarjarjees/arduino-code/blob/master/images/breadboard.jpg)
- Every breadboard has rows labeled 1-N and two sets of columns labeled a-e and f-j.
- Connected parts:
    - Columns a-e are internally connected.
    - Columns f-j are also connected.
    - The two sets are separated by a middle groove.
- All terminals in the same row are connected, but columns are not connected. The image below shows:
    - Green lines for row connections.
    - Orange lines for column connections.
    - Example: a1, b1, c1, d1, and e1 are the same connection..

![Breadboard Rows/Columns Connections](https://github.com/anmarjarjees/arduino-code/blob/master/images/breadboard-r-c-connections.jpg)

- The red (+) and blue/black (-) rails on both sides are used for power and ground connections.
- You can use any terminal along the rails for power and ground.

Learn more: [How to use a breadboard](https://www.losant.com/blog/how-to-use-a-breadboard)

Watch: [How to Use a Breadboard (Video)](https://www.instructables.com/How-to-use-a-Breadboard-with-example/)

# NOTE: Using VS Code for Arduino Sketches
You can use VS Code to write Arduino programs (called sketches).

- Step 1: Install the Arduino IDE
    - Download the official Arduino IDE from www.arduino.cc. [Download Arduino](https://www.arduino.cc/en/software)
    - NOTE: You must install the Arduino IDE even if you don't plan to use it, as it includes important tools and libraries.

- Step 2: Install the "Arduino" Extension in VS Code
    - Open VS Code
    - Go to Extensions (Ctrl+Shift+X)
    - Search for "Arduino" (by Microsoft) and install it


1. Arduino IDE – The Graphical Text Editor
    - The Arduino IDE provides a simple text editor to write and upload your code.
    - It comes with a default starting code:

```cpp
void setup() {
  // This runs once when the board starts
}

void loop() {
  // This runs repeatedly in a loop
}
```

2. Basic Arduino Terminologies
- Sketches => Programs written in Arduino IDE that run on the board
- Pin => A physical input or output on the board (e.g., output to an LED, input from a button)
Learn more about  ["Digital Pins"](https://docs.arduino.cc/learn/microcontrollers/digital-pins) from Arduino docs.
- Digital => A signal that is either ON (HIGH = 1) or OFF (LOW = 0)
- Analog Signal => A voltage value that ranges from 0 to 255 PWM.
    - PWM (Pulse Width Modulation) is a technique for getting analog results using digital signals.
    - Example uses:
        - Controlling LED brightness
        - Adjusting DC motor speed
        - Simulating analog voltage levels using a digital signal
    - 0 represents 0V, and 255 represents 5V.
 
3. Using the Arduino Uno Board
    - When connected to a computer, it appears as COMX (where X is the port number).
    - Select the correct port in Arduino IDE or VS Code before uploading code.

4. More Examples in the Arduino IDE
    - File Menu => Examples => 01. Basics
    - Try "Blink" => A simple program that makes an LED turn on and off

# IMPORTANT NOTE:
You can learn Arduino without buying the actual board! Yes, you can practice and experiment virtually:

## How? By using Tinkercad:
1. Go to the Tinkercad website: www.tinkercad.com
2. Create an account (for free) if you don't have one yet, then sign in.
3. You will land on your personal Dashboard, similar to "WordPress."
4. On the left-side panel of the Dashboard, you have these four categories:
    - 3D Designs
    - Circuits
    - Codeblocks
    - Lessons
    - Select "Circuits" => Then click the button "Create new Circuit." You can now start building your circuit.

![Tinkercad Dashboard Left Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/dashboard-options.jpg)

5. Since we need to work on an **Arduino Circuit**, search for "Arduino" in the search box above the Circuit area and select **"Arduino Uno R3."** You will now have the Arduino Circuit available on the sketch board.

![Board Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/board-options.jpg)

You can search for any other component that you need in your Arduino project. For example, if you need a breadboard, simply search for it and drag it into the workspace.

![Breadboard with Arduino](https://github.com/anmarjarjees/arduino-code/blob/master/images/breadboard-arduino.jpg)

6. To start coding the Arduino Circuit, click the "Code" button at the top:
- Blocks: Use built-in templates and samples.
- Text: Write code traditionally using a text editor.
- Blocks + Text: Mix both options.

7. Select "Text", and you will get a text editor with the two basic required functions, just like in the Arduino IDE:
```cpp
void setup() {

}

void loop() {

}
```

8. After writing your code, click "Start Simulation." No need to upload the code to a real physical Arduino board!

#### Code Files:
- **01.intro.ino** => Basic introduction to Arduino programming
- **02.digital-io-pins.ino** => Working with digital input and output pins
- **03.first-sketch.ino** => Your first Arduino sketch with simple functionality

# Serial Monitor:
The Serial Monitor is a built-in feature in the Arduino IDE. It is useful for troubleshooting code and enables communication between the Arduino board and other devices, such as a computer.

To open the Serial Monitor, you can use any of these three methods:
1. Menu Option: Go to the "Tools" menu and click "Serial Monitor".
2. Keyboard Shortcut:
    - Windows/Linux: Press CTRL + SHIFT + M
    - Mac: Press COMMAND + OPTION + M
3. Icon Shortcut: Click the magnifying glass icon in the top-right corner of the Arduino IDE.

## Serial Communication in Arduino UNO:
All Arduino boards have at least one serial port. On the Arduino UNO, the serial communication uses:

- Digital Pin 0 (RX) – Receive data
- Digital Pin 1 (TX) – Transmit data

&#9888; Important: These pins cannot be used for regular digital input/output while serial communication is active.

You can lear more about [Serial Communication Functions](https://www.arduino.cc/reference/en/language/functions/communication/serial/).

## Common Serial Communication Functions:
The two functions of Serial Communication that are demonstrated in this repo are:
- Serial.begin(baudRate): Sets the communication speed (baud rate) in bits per second.
    -- [Serial.begin() Link](https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/)
- Serial.print(data): Prints data to the Serial Monitor as human-readable ASCII text.
    -- [Serial.print() Link](https://www.arduino.cc/reference/en/language/functions/communication/serial/print/)

#### Code Files:
- **04.led-serial-monitor.ino**

## Light Emitting Diode (LED):
A **Light Emitting Diode (LED)** is a small semiconductor light source that emits light when an electric current flows through it. LEDs are widely used in Arduino projects due to their low power consumption and ease of use.

### How LEDs Work
LEDs function like **one-way switches for current**, allowing electricity to flow in only one direction. This behavior is due to their semiconductor nature, making them similar to diodes.

### LED Polarity
Unlike standard resistors, LEDs have polarity, meaning they must be connected in the correct orientation:
    - Anode (+, longer leg) => Connected to the positive voltage
    - Cathode (-, shorter leg) => Connected to ground
If connected incorrectly, the LED won't light up.

![LED/DIODE Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/diode_symbol.jpg).

### LED Circuit Symbol
Below is the circuit symbol for a diode (LEDs are a type of diode):

![LED Diagram](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-light-emitting-diode.jpg).

In any board/circuit, LED requires a resistor to work.

### Additional Resources
You can check this [Light-Emitting Diodes (LEDs) article](https://learn.sparkfun.com/tutorials/light-emitting-diodes-leds/all)

You can check this [article about diode](https://www.fluke.com/en-ca/learn/blog/electrical/what-is-a-diode#:~:text=A%20diode%20is%20a%20semiconductor,flowing%20in%20the%20opposite%20direction.)

# Resistor:
A resistor is a passive two-terminal electrical component that provides electrical resistance in a circuit. It is used in electronic circuits to:
 - Reduce current flow (resists the flow of current)
 - Adjust signal levels
 - Divide voltages
 - Bias active components
 - Terminate transmission lines

## Resistor in LED Circuits
In a circuit, an LED requires a resistor to prevent excessive current that could damage it. The resistor limits the current flowing through the LED to ensure safe operation.

![Electronic-Lead-Resistors-Array](https://github.com/anmarjarjees/arduino-code/blob/master/images/Electronic-Lead-Resistors-Array.png)

![LED Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED_circuit.jpg)

## Resistor Value and LED Brightness
- Higher resistor values decrease current flow, making the LED dimmer.
- Lower resistor values increase current flow, making the LED brighter but risking damage if the current is too high.

## Getting Resistor Value (Ohm's Law) in General:
To determine the appropriate resistor value for certain types of LEDs, we use Ohm's Law. By combining the elements of **voltage (V)**, **current (I)**, and **resistance (R)**, Georg Ohm developed the following formula:
> V = I × R (Ohm's Law - used to calculate Voltage)
Where:
- V = Voltage (in volts)
- I = Current (in amps)
- R = Resistance (in ohms)

By rearranging the formula, we can also calculate:
> I = V / R (To calculate Current)
> R = V / I (To calculate Resistance - which is what we need)

### Determining the Minimum Resistor Value
To find the minimum acceptable resistor value for an LED circuit, we use:
 > R = V / I

We need the values of V (voltage) and I (current) to determine R (resistance). These values will be explained in the next sections.

### Additional Resources:
You can check this video [Ohm's Law](https://www.youtube.com/watch?v=8jB6hDUqN0Y).<br>
Or read the full article about ["Voltage, Current, Resistance, and Ohm's Law"](https://learn.sparkfun.com/tutorials/voltage-current-resistance-and-ohms-law/all#:~:text=Ohm%20defines%20the%20unit%20of,%2C%20and%20pronounced%20%22ohm%22.)

#### IMPORTANT NOTE:
LEDs are non-ohmic devices, meaning their resistance does not remain constant. Instead, they introduce a voltage drop in a circuit, which affects the current flowing through them.

Knowing the voltage drop value of an LED is important because it determines how much voltage your circuit needs to supply. This directly impacts the voltage (V) value used in Ohm’s Law calculations when selecting the appropriate resistor.

## LED Specifications:
### Voltage Drop (Forward Voltage):
When purchasing an LED, it comes with a Datasheet, a document that lists all its specifications. You can check this example for a [Basic Red LED](https://www.sparkfun.com/products/9590?_ga=2.185358185.1176383297.1658699422-984879093.1658436149). Click the "Documents" tab, then open the "Datasheet".

In the Datasheet PDF, you will find tables listing various specifications. The value we need is called Forward Voltage, which represents the Voltage Drop of that specific LED. This value is usually given as a minimum (Min) and maximum (Max) range.

- To calculate the resistor value using Ohm’s Law, we use the minimum Forward Voltage.
- If the datasheet provides different values for Red, Green, and Blue LEDs, use the Red LED value for our example.

![LED Forward Voltage](https://github.com/anmarjarjees/arduino-code/blob/master/images/forward-voltage.jpg)

> ** For our calculations, we will use the minimum Forward Voltage of 1.8V, as specified in the LED datasheet.**

# The Current:
In the first table of the datasheet, the key parameter we need is the Forward Current. For a Red LED, the datasheet specifies a Forward Current of 20mA (milliampere), which is 1/1000th of an ampere (A). 

![LED Forward Current](https://github.com/anmarjarjees/arduino-code/blob/master/images/forward-current.jpg)
### Important Note:
Although the datasheet states 20mA, this represents the maximum current the LED can handle.
For safer and longer-lasting operation, we typically use a lower current—around 10mA—for our calculations.

# Getting Resistor Value (Ohm's Law) in Arduino Project:
Since we are using an Arduino Uno Board as the voltage source (instead of a 9V battery, for example), we need to determine the correct voltage value for Ohm's Law calculations.

### Key Concept:
The LED has a specific voltage drop (Forward Voltage). To find the correct voltage to use in the formula, we subtract the LED's Forward Voltage from the Arduino pin voltage:

**Formula for Voltage Used in Ohm’s Law:**

    > Voltage = Arduino Pin Voltage - LED Forward Voltage

**Final Formula for Resistance (Ohm's Law):**

    > R = (Arduino Pin Voltage - LED Forward Voltage) / I

## Finding the Arduino Pin Voltage:
We need to refer to the Arduino Uno documentation to find out the pin voltage.

**Source:**
- Check the official [Arduino Uno Rev3 documentation](https://store-usa.arduino.cc/collections/boards/products/arduino-uno-rev3):
    - Scroll down to the "Documentation" tab
    - Under "Input and Output", you’ll find this text:
        > *"Each of the 14 digital pins on the Uno can be used as an input or output using pinMode(), digitalWrite(), and digitalRead() functions. They operate at 5 volts. Each pin can provide or receive 20 mA as recommended operating conditions and has an internal pull-up resistor (disconnected by default) of 20-50kohm."*

### Conclusion:
- Arduino Pin Voltage = 5V
- This is the value we will use in our Ohm’s Law calculations.

#### Our Formula with the values:
Based on the values (what we have searched above) we found:
- LED Current: 10mA
- LED Forward Voltage (Voltage Drop): 1.8V
- Arduino Pin 2 Output Voltage: 5V (Max)

Using Ohm's Law:

R = (Arduino Pin Voltage - LED Forward Voltage) / I
R = (5V - 1.8V) / 10mA
R = 3.2V / 0.01A
R = 320 ohm

### Choosing the Standard Resistor Value
**Note:** The closest standard resistor value is 330ohm, which is commonly used in breadboards and prototyping applications.

Why 330ohm?
- It is very close to our calculated 320ohm.
- It provides safe current limiting for the LED.
- It is a widely available value for general use.
**Conclusion:**
The same calculation method can be used for any LED by substituting the values from its datasheet.

# Refined LED Circuit and Wiring Instructions
## Building the LED Circuit
Before coding, we need to build the hardware setup.
## LED Wiring: Connecting an LED to the Arduino Board
1. Connect Pin 8 (on the Arduino board) to one side of a resistor.
    - Pin 8 will serve as the voltage source.
    - Use a 330ohm resistor to limit the current and protect the LED.
2. Place the resistor on the breadboard.
    - One end of the resistor should be on the same line as the wire from Pin 8 (Line 2 on the breadboard).

**Tip:** In Tinkercad, you can check and adjust the resistor value and unit using the inspector popup window when selecting the resistor in the workspace.

![Resistor Inspector Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/resistor-inspector-options.jpg)

3. Connect the LED
    - The other side of the resistor connects to the LED anode (+), which is the longer side of the LED.
    - Both the resistor and LED anode must be placed on the same line (Line 2).
    - The LED cathode (-) connects to the Arduino ground pin (GND).

**Helpful Tinkercad Tip:** Hover your mouse over the LED in Tinkercad, and it will show hints like Anode and Cathode.

![LED Cathode](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-Cathode.jpg)
![LED Anode](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-Anode.jpg)

4. Final Wiring Setup:
Here is a visual reference of the complete LED circuit wiring:
(Please look at the image below for more clarifications)

![LED Wiring](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-wiring.jpg)

### Summary:
Pin 8 => Resistor (330Ω) => LED Anode (+) => LED Cathode (-) => GND
This ensures safe current flow and proper LED operation.

#### Code Files:
Now, let's start coding to light up the LED circuit.
Open the same code file "04.led-serial-monitor.ino" and modify it based on the pin we used in the hardware connection. Save it as:
- **05.led-circuit-work1.ino**

**Writing the Code:**
As it was explained above,
1. Click the "Code" button in Tinkercad.
2. Select "Text" from the dropdown menu.
3. Start writing your code.

![Coding Sample](https://github.com/anmarjarjees/arduino-code/blob/master/images/coding-sample.jpg)

**Running the Code:**
- Click "Start Simulation" to run the code.
- The LED will turn on for one second, then off for half a second, repeating continuously.

**NOTES:**
- The "Simulation" button toggles between Start and Stop actions.
- You cannot edit your code while the simulation is running. Click "Stop Simulation" first.
- To view output from Arduino built-in functions, use the Serial Monitor, similar to the VS Code terminal:

![Serial Monitor](https://github.com/anmarjarjees/arduino-code/blob/master/images/serial-monitor.jpg)

#### Code Files:
Now, we will make a few changes to our code. Please refer to the file:
- **06.led-circuit-work2.ino**

## LED Traffic Signal Circuit:
Let's apply what we've learned to create an LED Traffic Signal Circuit.
### Hardware Connection:
For this project, we need to control three separate digital interfaces:
- Red LED => using pin 12
- Yellow LED => using pin 11
- Green LED => using pin 10

**Required Components:**
- Breadboard
- 3 Resistors to be plugged into the breadboard:
![Three Resistor on Breadboard](https://github.com/anmarjarjees/arduino-code/blob/master/images/three-Resistor-board.jpg)

#### Connecting the LEDs:
- Connect 3 LEDs as we did with one LED. If you have all the physical components, follow the same steps. When using Autodesk Tinkercad, you can select an LED and change its color from the Inspector popup window:

![Three Color LEDs](https://github.com/anmarjarjees/arduino-code/blob/master/images/three-color-led.jpg)

- Connect one end of each resistor to its corresponding LED, and the other end to the Arduino pins specified above. Notice in the image below, I used different colors for the wires for more clarity:

![Three Led Wire Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/three-led-wire-connection.jpg)

#### Connecting the LEDs to Ground:
- Connecting the other leg of each LED to the ground as we did in the first simple circuit for one LED. Since we have three LED, we can use the breadboard common ground (Usually the the strips marked"-"). Connect the cathode leg for each LED to the negative line of the breadboard  as shown below:

![LED Cathode Negative Line Connections](https://github.com/anmarjarjees/arduino-code/blob/master/images/led-cathode-negative-line.jpg)

- Finally, connect the negative line on the breadboard (where all three LEDs are connected) to the GND pin on the Arduino board.

![LED Traffic Signal Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/led-traffic-signal-connection.jpg)

#### Code Files:
You can use the code editor with the "Text" option to write your code. In the code editor window, click the "Serial Monitor" to see the printed text output as well.

- **07.led-traffic-signal.ino**

![Led traffic code - Serial Monitor](https://github.com/anmarjarjees/arduino-code/blob/master/images/led-traffic-code-serial-output.jpg)

# Working with Push Buttons:
Push buttons have different shapes to provide Arduino with an input signal. Push buttons can be explained as simple power-controlling switches of a machine or appliance. A switch is a component that controls the open-ness or closed-ness of an electric circuit. It connects two points in a circuit when you press it:

![Pushbutton](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-symbol.jpg)
The **current** can only flow through a circuit when the button is pressed, completing the circuit connection.

![Simple Pushbutton Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/simple-pushbutton-circuit.jpg)

## Types of Pushbutton:
Pushbutton can be either one of these two distinct types or categories:
- **Momentary Pushbutton/Switch:** These switches only remain in their "ON" (active) state as long as they are being actuated (pressed, held, pushed, magnetized, etc.). When released, they return to their "OFF" state. Think of this type of switch like the keys on your keyboard—when you press and hold the letter "A," it keeps typing "A" until you release the button.

![Momentary Pushbutton Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/momentary-pushbutton-symbol.jpg)

- **Maintained Pushbutton/Switch:** These switches stay in one state until actuated into a new one and then remain in that state until acted upon again. They work like light switches on a wall. Maintained switches are great for set-it-and-leave-it applications like turning power on and off.

![Maintained Switch Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/maintained-switch-symbol.jpg)

**Push buttons can be also arranged into two different types:**
- Normally Open (NO) => The switch is normally open, so we have an open circuit. Has to be pressed/activated/actuated to make the connection between the terminals. If you push/press it, there will be a close circuit so the current will run through it.

![Normally Open Switch](https://github.com/anmarjarjees/arduino-code/blob/master/images/normally-open-switch.jpg)

- Normally Closed (NC) => The switch is normally closed, so we have a closed circuit. Has to be pressed/activated/actuated to break the connection between the terminals. If you push/press it, there will be an open circuit so the current will NOT run through it.

![Normally Closed Switch](https://github.com/anmarjarjees/arduino-code/blob/master/images/normally-closed-switch.jpg)

This NC type is often used in Emergency Stop buttons or safety stop buttons found on treadmills. 

You can [read more about push buttons](https://learn.sparkfun.com/tutorials/button-and-switch-basics/all)

Look at the image below as an example of one type of using pushbutton:
When the pushbutton is pressed:
- A connection is created between Terminal 1 (T1) and Terminal 2 (T2)
OR:
- A connection is created between Terminal 3 (T3) and Terminal 4 (T4)
![Pushbutton Terminal Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-terminal-connection.jpg)

### VCC and GND
- **VCC (short for Voltage Common Collector)** is an electronics designation that refers to the power supply voltage (input) of a device, typically used to power an integrated circuit (IC).
- **GND (short for Ground)** is the reference point against which VCC is measured. It serves as the common return path for electric current and can be either positive or negative compared to VCC. When VCC is at zero volts, it is considered to be at ground potential.
Here are other common voltage designations in electronics:
- Vcc => Power Supply" voltage 
- Vee => "Emitter" voltage 
- Vss => Source" voltage 
- Vdd => Drain" voltage 

### Implementing/Adding a switch/pushbutton on Arduino
To connect a switch or pushbutton in an Arduino circuit, we can use two methods:
- Pullup Resistor Circuit [used with Active Low] => Used with Active Low switches
- Pulldown Resistor Circuit [used with Active High] => Used with Active High switches

**Understanding Active High & Active Low Pushbuttons:**
- Active High => The circuit is off when the button is not pressed and on when pressed.
- Active Low => The circuit is on when the button is not pressed and off when pressed.

#### Pullup Circuit OR Active Low Circuit
The arrangement for an active low pushbutton: 
- Voltage Source: VCC (Voltage Common Collector) => 5V to resistor
- Pullup Resistor to pushbutton
- Pushbutton/Switch connected to ground
- Pin 10 mode is INPUT => This controller (Arduino Pin) will be connected between the Pullup Resistor and the Push button to read the value of the Active Low pushbutton
>> VCC (5V) = Connected to => Pullup Resistor then Pushbutton = Connected to => Ground
>> Pullup Resistor <=> Pin 10 <=> Pushbutton

![Pullup Resistor Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/pullup_resistor_circuit.jpg)

#### Pulldown Circuit OR Active High Circuit
The arrangement for an active hight pushbutton: 
- Voltage Source: VCC (Voltage Common Collector) => 5V to resistor
- Pushbutton to Pulldown Resistor 
- Pulldown Resistor to ground
- Pin 10 mode is INPUT => This controller (Arduino Pin) will be connected between the Pulldown Resistor and the Push button to read the value of the Active High pushbutton
>> VCC (5V) = Connected to => Pushbutton then Pulldown Resistor = Connected to => Ground
>> Pulldown Resistor <=> Pin 10 <=> Pushbutton

![Pulldown Resistor Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/pulldown_resistor_circuit.jpg)

#### Active High vs Active Low Resistor
- With Active Hight => uses Pulldown Resistor
    - When the switch/pushbutton is activated (closed/pressed), it sends a high signal (value) to the microcontroller.  
        -- *When it's active, it sends a high signal*
        -- *Active Button/Switch (Active State) = High Signal*
        -- *Deactivated Button/Switch = Low Signal*
    - When the switch/pushbutton is not pressed (open), it sends a low signal (value) to the microcontroller
      --*PullDown resistor is used to pull down the value of the microcontroller pin to low when the switch is not pressed*

 ![Pulldown Resistor Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/pulldown_resistor_circuit.jpg)
      
- With Active Low => uses Pullup Resistor: 
    - When the switch/pushbutton is activated, it sends a low signal (value) to the microcontroller
        -- *When it's active, it sends a low signal*
        -- *Active Button/Switch (Active State) = Low Signal*
        -- *Deactivated Button/Switch = High Signal*
    - When the switch/pushbutton is not pressed, it sends a high signal (value) to the microcontroller
      --*Pullup resistor is used pull up the value of the microcontroller pin to high when the switch is not pressed*

 ![Pulldown/Pullup Resistor Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/pulldown_pullup_resistor.jpg)

### Pushbutton Circuit:
Practising what we have learned to create a Pushbutton Circuit:

#### Hardware Connection:
- Connecting the first side (terminal) of the pushbutton to the VCC (5V) on Arduino, we can do it through the common power (positive) rail on the breadboard

![Pushbutton to Vcc connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-to-vcc-connection.jpg)

- Connecting the other side (terminal) of the pushbutton to 10K resistor. Notice in the image below we left one terminal to be used later

![Pushbutton to Resistor connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-to-resistor-connection.jpg)

- Connecting the other end of the resistor to Ground

![Resistor to breadboard gnd connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/resistor-to-gnd-connection.jpg)

- Connection the ground (Negative rail on breadboard) to Arduino board

![Breadboard Ground to Arduino GND](https://github.com/anmarjarjees/arduino-code/blob/master/images/breadboard-ground-to-gnd.jpg)

- Connecting the terminal point between the pushbutton and the resistor to Pin 10 (You can use any other available digital pin like pin 12)

![Breadboard to Pin 10 Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/breadboard-pin10-connection.jpg)

Now the full/completed circuit should look like this:

![Pushbutton Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-full-circuit.jpg)

Notice I used the above building just to show you that no need to align the component in order to have them to work. But you can change your design or layout your items it to look more organized as shown below:

![Pushbutton Full Circuit (Well Layout)](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-full-circuit-alligned.jpg)

After building the Hardware components of the Pushbutton circuit, we wil program it. 

#### Code Files:
In this section, we will use one of the code examples (code snippets) that are provided by Arduino library. 
To use Arduino library (With Arduino IDE): File Menu => Examples => 01.Basics => DigitalReadSerial

You can also go to arduino.cc website => Tutorials => then:
    - In the main search box, type "digital read serial"
    - In the products search box, select "Uno R3"
    - Click the box in the result "Digital Serial Read"

![Arduino Tutorial Search Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/Arduino-tutorial-search.jpg)

- **08.pushbutton-circuit.ino**
you can open the "Serial Monitor" window to see the output just 0's as the pushbutton is Off (not pressed):

![Pushbutton Code serial Monitor Output](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-code-serial-output.jpg)

Now to change the value to 1, you have press and hold down the pushbutton, or with Tinkercad simulation, click and hold down the pushbutton to see the series of 1's. Notice if you press and reveal or just click (without holding) is will print only 1. 

Here is the link for ["Digital Read Serial"](https://docs.arduino.cc/tutorials/uno-rev3/DigitalReadSerial)

Change the code so it will output the value when it's being pressed (refer to my comments in the code file):
- **09.pushbutton-circuit-if.ino**

NOTE: To see the changes clearly, don't forget to clear the "Serial Monitor" by simply click the "Clear" button:

![Serial Monitor Clear Btn](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-code-serial-output.jpg)


### Pushbutton Circuit with LED:
Adding one extra component "LED" to our current Pushbutton Circuit. The LED turns "On" when we press the pushbutton and we can achieve this function by modifying our code after finishing the hardware connection.

#### Hardware Connection:
Adding an LED by following the same steps as we did before:
- Plug an LED to your breadboard:
    - The Cathode (-) end of the LED will be connected to the Ground rail of the breadboard
    - The Anode (+) end of the LED will be connected to a resistor
- Plug a resistor to your breadboard:
    - One end will be connected to the Anode leg of the LED as mentioned above
    - The other end will be connected to Pin 12 (You can use another available digital pin)
    
![Pushbutton LED Full Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-led-full-circuit.jpg)

#### Code Files:
Modifying the same code file but adding the required variable and function to run the LED (refer to my comments in the code file):
- **10.pushbutton-circuit-if-led.ino**

NOTE: Remember to see the light "On", press and hold

### Digital Pins:
The pins on the Arduino can be configured as either inputs or outputs. 
We have learnt and practiced the two states of a digital pin on Arduino board:
- INPUT (By Default) => Normal input mode to receive a voltage when the pin is setup as an "INPUT"
    - pinMode(pin, INPUT);  // set pin to input
- OUTPUT => Normal output mode to send a voltage when the pin is setup as an "OUTPUT"
    - pinMode(pin, OUTPUT);  // set pin to output

You can read and learn more [Digital Pins](https://www.arduino.cc/en/Tutorial/Foundations/DigitalPins)

#### Pullup Resistors with pins configured as INPUT
Often it is useful to steer an input pin to a known state if no input is present. This can be done by adding a pullup resistor (to +5V), or a pulldown resistor (resistor to ground) on the input. A 10K resistor is a good value for a pullup or pulldown resistor.

So beside the "INPUT and "OUPUT", we have the third state "INPUT_PULLUP:
- INPUT_PULLUP => Input mode that utilizes the Arduino internal "pullup resister"

### LED with INPUT_PULLUP
As we learnt, Digital pins 0-13 of the Arduino Uno serve as digital input/output pins. Pin 13 of the Arduino Uno is a special pin as it is always connected to:
- a built-in LED
- a resister

NOTE: 
Digital pin 13 is harder to use as a digital input than the other digital pins because it has an LED and resistor attached to it that's soldered to the board on most boards.
![Arduino Pin13](https://github.com/anmarjarjees/arduino-code/blob/master/images/pin13.jpg)

#### Properties of Pins Configured as INPUT_PULLUP with Pullup Resistor
There are 20K pullup resistors built into the Atmega chip that can be accessed from software. These built-in pullup resistors are accessed by setting the pinMode() as INPUT_PULLUP. 
 - Each Arduino model provides an option active this internal pullup resistor on each individual digital pin
 - The input pullup mode value determines whether the internal pullup resistor is activated or not 
 - When having a pullup resister means the arrangement is active low:
    - Pulls the value up to "HIGH" when the pushbutton is not pressed
    - Pulls the value down to "LOW" (value falls to LOW) when the pushbutton is pressed
![Pushbutton Input Pullup](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-input-pullup.jpg)

The pullup resistors provide enough current to dimly light an LED connected to a pin that has been configured as an input. If LEDs in a project seem to be working, but very dimly, this is likely what is going on.

As a conclusion, we can use any one of these three values for the interface mode settings:
- INPUT (By Default) => Normal input mode to receive a voltage
- INPUT_PULLUP => Input mode that utilizes the Arduino internal "pullup resister"
- OUTPUT => Normal output mode to send a voltage

Check these two links from Arduino:
- [InputPullupSerial Full Details](https://www.arduino.cc/en/Tutorial/BuiltInExamples/InputPullupSerial) from Arduino Tutorials
- [InputPullupSerial INPUT_PULLUP Demo](https://docs.arduino.cc/built-in-examples/digital/InputPullupSerial) from Arduino built-in examples

#### Hardware Connection:
- Pushbutton is an active low:
  - connect the pushbutton one side to pin 2 
  - connect the pushbutton one side to the ground (GND) on Arduino
- For the LED to be connected to pin 13 => no wiring as we will use the built-in LED that is already connected to Pin 13

![Pushbutton Input Pullup Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-input-pullup-circuit.jpg)

#### Code Files:
When using Arduino IDE:
 - Go to "file" => "Examples" => "02.Digital" => "DigitalInputPullup"
 - OR check the two links above to get the code
- **11.pushbutton-input-pullup.ino**

If you run your code or start the simulation you will see two different results:
- When you push the pushbutton:
    - The Built-in LED is "On"
    - The output on the Serial Monitor is 0's 
![Pushbutton Input Pullup Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/active-push-zero-values.jpg)

- When you release the pushbutton:
    - The Built-in LED is "Off"
    - The output on the Serial Monitor is 1's 
![Pushbutton Input Pullup Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/inactive-push-one-values.jpg)


## NOTES to Recap:
### GitHub Repo and Your Local Folder
- To connect your local folder with your remote repo, my example:
> git remote add origin https://github.com/anmarjarjees/arduino-code.git
- To download all the files that only exist in the remote repo:
> git pull origin master
OR: <br>
> git pull origin main
NOTE: We need to pull the changes/differences in the main repo before pushing the local ones to avoid the conflict
- Add all your new/updated files to staging:
> git add .

- Commit your changes with the required text
> git commit -m "updating with initial code"

- Push/Upload your code to GitHub
> git push origin master
OR:
> git push origin main

- You can always check your repo status:
> git status

- You can also check your repo branch name:
> git branch

### NOTES: 
- Make sure to upload the public code that you want to share into your default branch whether it's "main" or "master" for immediate and easy access
- You can select/set your default branch:
-- Go to "Settings"
-- Under the "Code and automation" section on the left sidebar, select/click "Branches"
-- Click the two opposite arrows icon to see the switching branch menu
-- Select the branch that you want to set as a default then click "Update"
-- Accept the warning of doing these changes "I understand, update the default branch"

### MARKDOWN Language:
For more refreshing about using Markdown language,
you can check the official documents of GitHub:
[Basic writing and formatting syntax](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)

### Arduino Learning Resources and References:
- [Arduino Tutorial by Paul McWhorter](https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP)

### Images References:
- My Circuit Designs using Tinkercad
- My Designs and drawing using Images and MS PowerPoint drawing tools
- [Free SVG](https://freesvg.org/)
- [Wikipedia](https://en.wikipedia.org/)
- [Wikimedia Commons](https://commons.wikimedia.org/wiki/Main_Page)