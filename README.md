# Arduino-code
## Brief and Simple Demonstration About How to Start with Arduino Programming
##### Anmar Jarjees

![Arduino UNO R3](https://github.com/anmarjarjees/arduino-code/blob/master/images/Arduino_Uno_R3.jpg)

Arduino is an open-source electronic computing platform. It has two components:
- Hardware: Arduino Circuit Board => Arduino Uno R3 (It has a computing system/processor)
- Software: Arduino IDE to write our code for controlling the Arduino board. Using Arduino language which is based on C/C++ language

It's Easy-to-use hardware and software and it's intended for anyone who is interested in creating interactive objects or environments. 

[Arduino Board - UNO R3](https://docs.arduino.cc/hardware/uno-rev3)

[Arduino Uno Rev3](https://store-usa.arduino.cc/collections/boards/products/arduino-uno-rev3)

Arduino Board is connected to the computer through a USB cable.

### MCU (MCU for microcontroller unit)
A microcontroller is a small computer on a single VLSI (Very Large Scale Integration) integrated circuit (IC) chip. A microcontroller contains one or more CPUs (processor cores) along with memory and programmable input/output peripherals. You can check this article about [Microcontroller](https://en.wikipedia.org/wiki/Microcontroller)


### Breadboards:
Breadboard is anything you use to prototype electronics. When working on electronic circuits, breadboard will be the white, plastic, and solderless panel (board) also know as a "Protoboard". It helps to run and test any electronic circuit without the need of soldering.

![Breadboard](https://github.com/anmarjarjees/arduino-code/blob/master/images/breadboard.jpg)
- Every breadboard has rows labeled 1-N and 2 sets of columns labeled a-e and f-j. The first set of columns: a, b, c, d, and e are connected together and the second set of columns: f, g, h, i, and j are connected together. the two sets are separated by a middle grove.
- All of the terminals on the same row are connected. Columns are not connected. The image below shows the green lines for row connections and the orange for columns connections (notice that I only highlighted just 4 as a sample), for example using the point (terminal) a1, b1, c1, d1, or e1 is the same.

![Breadboard Rows/Columns Connections](https://github.com/anmarjarjees/arduino-code/blob/master/images/breadboard-r-c-connections.jpg)
- The positive (red) and the negative/ground (blue or black) rails on the two sides are commonly used to connect components to power, ground, or both. We can use any terminal to do the job along the negative or the positive rail 

You can check this article ["How to use a breadboard"](https://www.losant.com/blog/how-to-use-a-breadboard#:~:text=Along%20each%20side%20of%20a,be%20connected%20to%20the%20rails.) to learn the basic of breadboards. Or this article ["How to Use a Breadboard (with Video Example)"](https://www.instructables.com/How-to-use-a-Breadboard-with-example/)

## NOTE: 
You can use VScode to write Arduino sketches (programs):
* Step1: Download the official Arduino IDE from www.arduino.cc <br>
[Download Arduino](https://www.arduino.cc/en/software) <br>
NOTE: You need to download Arduino IDE even if you are not going to use it.

* Step2: Install the "Arduino" Extension which is provided by Microsoft

1. Arduino IDE => Uses a graphical text editor

2. it comes with a default starting code:
```cpp
void setup() {

}

void loop() {

}
```

3. Some of the Arduino Basic Terminologies:
  - "sketches" are programs written in Arduino IDE that can run on Arduino board
  - "pin" is either an input or output port that is connected to something in the breadboard. For example, Output to an LED or Input from a Push Button. You can learn more about ["Digital Pins"](https://docs.arduino.cc/learn/microcontrollers/digital-pins) from Arduino docs.
  - "digital" is the voltage value to be on/off, 1/0, or in Arduino C language is "HIGH" or "LOW"
  - "analog" is the voltage with more realistic value that can be ranged from 0 to 255 PWM. Pulse Width Modulation, or PWM, is a technique for getting analog results with digital means. Where 0 can represent the 0 volt and 255 can represent 5 volt. PWD is a technique used in controlling the brightness of LED, speed control of DC motor,  or where you have to get analog output with digital means. 

4. Using Arduino Uno Board on COMX (X will be the port number)

5. You can add more examples from Arduino IDE:
File Menu => Examples => 01. Basic (For example)

## IMPORTANT NOTE:
You can learn Arduino without buying the actual board (Yes for learning and virtual demonstration):
1. Go to the Tinkercad website: www.tinkercad.com
2. Create an account (for free) if you don't have one yet, then sign in
3. You will land on your personal Dashboard like "WordPress"
4. On the left-side panel of the Dashboard, you have these 4 categories:
- 3D Designs
- Circuits
- Codeblocks
- Lessons
Select "Circuits" => Then click the button "Create new Circuit".
And you can start building your Circuit

![Tinkercad Dashboard Left Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/dashboard-options.jpg)

5. Since we need to work on Arduino Circuit, we can search for Arduino in the search box above the Circuit, select "Arduino Uno R3". You will have the Arduino Circuit available on the sketch board

![Board Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/board-options.jpg)

Notice that we can search for any other component that we need to use in our Arduino projects. For example, we need "breadboard" so we can search for it and just drag it to the workspace.

![Breadboard with Arduino](https://github.com/anmarjarjees/arduino-code/blob/master/images/breadboard-arduino.jpg)

6. To start coding the Arduino Circuit, you click the "Code" button at the top:
- Blocks: Going with the templates/samples to see different built-in samples of tasks
- Text: To use the traditional method of coding with a text editor, select "text"
- Blocks + Text: mixing the two options

7. Select "Text", and you will get a text editor with the two basic required functions like in Arduino IDE

8. After writing your code, you can click "Start Simulation". No need for uploading the code to a real physical Arduino board!

#### Code Files:
- **01.intro.ino**
- **02.digital-io-pins.ino**
- **03.first-sketch.ino**

## Serial Monitor:
Is a built-in feature that comes with Arduino IDE. It's useful for code troubleshooting and facilitate the communication between the Arduino board and other devices like the computer. 
In order to work with "Serial Monitor", we need to activate it or open its window first, and we have 3 ways:
1. First Way: Go to "Tools" menu => Click the "Serial Monitor"
2. Second Way: Using the HOTKEY CTRL+SHIFT+M (In Mac => COMMAND+OPTIONS+M)
3. Third Way: Click the small magnifying glass icon on the top right corner

All Arduino boards have at least one serial port. In Arduino UNO board, it's Digital Pins 0 and 1:
- Digital Pin 0 (RX)
- Digital Pin 1 (TX)

Notice that these two ports (Pins) cannot be used for digital input/output when using the serial communication. <br>
You can lear more about [Serial Communication Functions](https://www.arduino.cc/reference/en/language/functions/communication/serial/).

The two functions of Serial Communication that are demonstrated in this repo are:
- Serial.begin(): Sets the data rate in bits per second (baud) for serial data transmission.
    -- [Serial.begin() Link](https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/)
- Serial.print(): Prints data to the serial port as human-readable ASCII text.
    -- [Serial.print() Link](https://www.arduino.cc/reference/en/language/functions/communication/serial/print/)

#### Code Files:
- **04.led-serial-monitor.ino**

## Light Emitting Diode (LED):
A light-emitting diode (LED) is a semiconductor tiny light source that emits light when current flows through it. Allows Arduino/Genuino boards to simplify the use of the LED.<br>
This library simplify the use of a LED. It contains many function to manage a LED. A diode is a semiconductor device that essentially acts as a one-way switch for current. It allows current to flow easily in one direction, but severely restricts current from flowing in the opposite direction.

LEDs/Diodes have polarity that is determined by an anode (positive lead) and cathode (negative lead). So they only light up when its leads (the positive/negative) are oriented properly.

![LED/DIODE Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/diode_symbol.jpg).

### LED Anode and Cathode:
- Anode (Positive) lead is longer
- Cathode (Negative) lead is shorter
- OR by using the "flat" area/spot on the case, the lead which is closest to the flat spot is the cathode pin

![LED Diagram](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-light-emitting-diode.jpg).

You can check this [Light-Emitting Diodes (LEDs) article](https://learn.sparkfun.com/tutorials/light-emitting-diodes-leds/all)

You can check this [article about diode](https://www.fluke.com/en-ca/learn/blog/electrical/what-is-a-diode#:~:text=A%20diode%20is%20a%20semiconductor,flowing%20in%20the%20opposite%20direction.)

In any board/circuit, LED requires a resistor to work.

### Resistor:
A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. In electronic circuits, resistors are used to reduce current flow (resists the flow of a current), adjust signal levels, to divide voltages, bias active elements, and terminate transmission lines, among other uses. So In a full circuit, LED requires the use of a resistor to make sure that the maximum current is not exceeded.

![Electronic-Lead-Resistors-Array](https://github.com/anmarjarjees/arduino-code/blob/master/images/Electronic-Lead-Resistors-Array.png)

![LED Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED_circuit.jpg)

Higher resistor values will further lower the current, reducing the brightness of the LED

### Getting Resistor Value (Ohm's Law) in General:
To determine what value we can use for a resistor for some special kinds of LEDs, we can use the Ohm's law, so by combining the elements of "voltage", "current", and "resistance", Ohm developed the formula below:
> V = I x R (To calculate the Voltage => it's called "Ohm's law")
Where:
- V = Voltage in volts
- I = Current in amps
- R = Resistance in ohms

After rearranging the formula/equation:
> I = R / V (To calculate the Current)
> R = V / I (To calculate the Resistance which is what we need to use)

So to determine the minimum acceptable value of the resistor, we can use this formula/equation:
> R = V / I

We need the value of "V" and the value "I" to find "R", we will learn to find them in the next topics. <br>

You can check this video [Ohm's Law](https://www.youtube.com/watch?v=8jB6hDUqN0Y).<br>
Or read the full article about ["Voltage, Current, Resistance, and Ohm's Law"](https://learn.sparkfun.com/tutorials/voltage-current-resistance-and-ohms-law/all#:~:text=Ohm%20defines%20the%20unit%20of,%2C%20and%20pronounced%20%22ohm%22.)

#### IMPORTANT NOTE:
LED are what's known as a "non-homic" devices. It introduces something called a "voltage drop" into a circuit, and this will lead to change the amount of current running through it. knowing the "Voltage Drop" value for a LED is important as this value/number will help you decide how much voltage your circuit will need to supply to the LED. Which means it will affect the voltage value that we use in Ohm's Law equation.

##### LED Specifications:
### Voltage Drop (Forward Voltage):
When buying a LED it comes with a document that shows all its specifications called "Datasheet". You can check this link about [LED-Basic Red] (https://www.sparkfun.com/products/9590?_ga=2.185358185.1176383297.1658699422-984879093.1658436149), click "Documents" tab then "Datasheet". In the Datasheet PDF file, you will see some tables with categories and values. The item that we need to look for is called "Forward Voltage" of an LED which the "Voltage Drop" of that specific LED. It has Min and Max value so the minimum is the value that we need to know/use to determine the value of the resistor. Notice in case if the Datasheet provides Forward Voltage for RED, Green, and Blue Color LED, we use the Red Color value based on our selected LED.
![LED Forward Voltage](https://github.com/anmarjarjees/arduino-code/blob/master/images/forward-voltage.jpg)

> ** We will use the minimum value of 1.8 V based Datasheet table that is provided with LED package.**

### The Current:
Also we can see in the first table of Parameters, the first important parameter is the "Forward Current". You can see a forward current for a Red LED is 20 mA (milliamp: a unit for measuring electrical current which is equal to one thousandth of an ampere.). 

![LED Forward Current](https://github.com/anmarjarjees/arduino-code/blob/master/images/forward-current.jpg)
Please remember that although the datasheet says 20 mA, but this is the maximum current that LED can take! So usually, when we do our calculation:
 > ** we should go a little bit lower which is around 10 mA.**

### Getting Resistor Value (Ohm's Law) in Arduino Project:
Since we are using Arduino Uno Board pin for the Voltage source (not a 9V Battery for example), and the LED has a specific voltage drop as stated in the note above, so to find the right voltage value to be used in the equation (Ohm's law), we need to include the difference between the voltage that is coming from Arduino board and the specific voltage of the LED itself (voltage drop). <br>
So to determine the required voltage value to be used, we use this formula:
The voltage = Arduino Pin Voltage - LED Voltage Drop (Forward Voltage) <br>

The formula/equation:
> R = (Arduino Pin Voltage - LED Forward Voltage) / I
We need to refer to the board documentation to know the Pin voltage, if you click the same link that provided at the beginning of this README file about [Arduino Uno Rev3](https://store-usa.arduino.cc/collections/boards/products/arduino-uno-rev3), then go to documentation tab (this tab will appear when you scroll down the page), then go to the topic "Input and Output", you will see this text:<br>
"Each of the 14 digital pins on the Uno can be used as an input or output, using pinMode(),digitalWrite(), and digitalRead() functions. They operate at 5 volts. Each pin can provide or receive 20 mA as recommended operating condition and has an internal pull-up resistor (disconnected by default) of 20-50k ohm." <br>
** So 5V is the value for "Arduino Pin Voltage" **

#### Our Formula with the values:
Based on what we have searched above:
- LED Current: 10mA
- LED Forward Voltage (Voltage Drop): 1.8V
- Arduino Pin 2 Output Voltage: 5V (Max)

> R = (Arduino Pin Voltage - LED Forward Voltage) / I
> R = (5V - 1.8V)/10mA = 320 ohm

NOTE:
The standard resistor value is 330 ohm to be commonly used in breadboards and other prototyping applications, these 330 ohm resistors make excellent LED current limiters and are great for general use. 330 ohm is very close to what we got from the above equation. So we can apply the same standard steps to calculate the desired resistor for any LED with any color or datasheet.

### LED Circuit and Coding:
Starting with the Hardware first by building the LED circuit
#### LED Wiring
Connecting an LED to arduino board:
- Pin 8 (on Arduino Board) as a voltage source will be connected to the one side of a resistor. 
- The resistor is 330 ohm. One end has to be placed on the same line as the Pin2 wire which is Line 2 in the breadboard. <br>
NOTE: You can specify the value of the resistor exactly plus the measurement unit with the help of the inspector popup window that appears when you select an item in the Tinkercad workspace:

![Resistor Inspector Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/resistor-inspector-options.jpg)

- The other side of the resistor connects to the LED anode (+) which is the longer side of the LED. Also they both have to be placed in the same line which is Line 2 also. Notice that Tinkercad will give you hints when you hover the mouse like anode/cathode and etc.

![LED Cathode](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-Cathode.jpg)
![LED Anode](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-Anode.jpg)
- The LED cathode (-) connects to the Arduino ground pin (GND)
Please look at the image below for more clarifications:

![LED Wiring](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-wiring.jpg)

#### Code Files:
Now you can start our code to light the LED circuit:<b>
Opening the same code file "04.led-serial-monitor.ino" and add some changes based on the pin that we used in the Hardware connection:
- **05.led-circuit-work1.ino**

As it was explained above, you can click "Code" button, then select "Text" from the dropdown list and start writing your code.

![Coding Sample](https://github.com/anmarjarjees/arduino-code/blob/master/images/coding-sample.jpg)

Then you can run your code by clicking "Start Simulation" button.<br>
The LED will be on for a second then off for half a second and so on...<br>
NOTES: 
- "Simulation" button is a toggle button between to actions: Start/Stop
- When you are in simulation mode, you cannot make any changes in our your code in your circuit. You have to click "Stop Simulation" button
- To see the output of Arduino built-in functions,
You can use the "Serial Monitor" it's like VSC terminal:

![Serial Monitor](https://github.com/anmarjarjees/arduino-code/blob/master/images/serial-monitor.jpg)

#### Code Files:
Now we can few changes to our code, please refer to the file:
- **06.led-circuit-work2.ino**

### LED Traffic Signal Circuit:
Practising what we have learned to create LED Traffic Signal Circuit:
#### Hardware Connection:
For this project, we need to control three separate digital interfaces:
- Red LED => using pin 12
- Yellow LED => using pin 11
- Green LED => using pin 10

- Breadboard
- 3 Resistors to be plugged into the breadboard:
![Three Resistor on Breadboard](https://github.com/anmarjarjees/arduino-code/blob/master/images/three-Resistor-board.jpg)
- Connect the 3 LED (as we did with one LED) if you have all the physical components. When using "Autodesk Tinkercad", you can select and LED and change its color from the inspector popup window:

![Three Color LEDs](https://github.com/anmarjarjees/arduino-code/blob/master/images/three-color-led.jpg)

- Connect one end of each resistor to its corresponding LED, and the other end will be connected to arduino pins as stated above. Notice in the image below, I used different color for the wires for more clarity:

![Three Led Wire Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/three-led-wire-connection.jpg)

- Connecting the other leg of each LED to the ground as we did in the first simple circuit for one LED. Since we have three LED, we can use the breadboard common ground (Usually the the strips marked"-"). Connect the cathode leg for each LED to the negative line of the breadboard  as shown below:

![LED Cathode Negative Line Connections](https://github.com/anmarjarjees/arduino-code/blob/master/images/led-cathode-negative-line.jpg)

- Finally, connecting the negative line on the breadboard that has the three connections from the LED to the Ground Pin (GND) of Arduino board.

![LED Traffic Signal Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/led-traffic-signal-connection.jpg)

#### Code Files:
You can use the code editor with "Text" option to write your code. In the code editor window, click the "Serial Monitor" to see the printed text output also.

- **07.led-traffic-signal.ino**

![Led traffic code - Serial Monitor](https://github.com/anmarjarjees/arduino-code/blob/master/images/led-traffic-code-serial-output.jpg)

## Working with Push Buttons:
Push buttons has different shapes to provide arduino with an input signal. Push buttons can be explained as simple power controlling switches of a machine or appliance. A switch is a component which controls the open-ness or closed-ness of an electric circuit. It connects two points in a circle when you press it:

![Pushbutton](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-symbol.jpg)
The current can only flow through a circuit when the button is pressed for connecting the circuit.

![Simple Pushbutton Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/simple-pushbutton-circuit.jpg)

### Types of Pushbutton:
Pushbutton can be either one of these two distinct types or categories:
- Momentary Pushbutton/Switch: Are switches/push-buttons which only remain in their "ON" (active) state as long as they're being actuated (pressed, held, pushed, magnetized,  etc.). If they're not being actuated, they remain in their "off" state. Think about this type of switches like the keys of your keyboard, when pressing the letter "A" and hold down the key, it will keep printing/typing the letter "A" until release the button.

![Momentary Pushbutton Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/momentary-pushbutton-symbol.jpg)
- Maintained Pushbutton/Switch: Are switched/push-buttons that stay in one state until actuated into a new one, and then remain in that state until acted upon once again. Like the light switches on a wall. Maintained switches are great for set-it-and-leave it applications like turning power on and off.

![Maintained Switch Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/maintained-switch-symbol.jpg)

Push buttons can be also arranged into two different cases/types:
- Normally Open (NO) => The switch is normally open, so we have an open circuit. Has to be pressed/activated/actuated to make the connection between the terminals. If you push/press it, there will be a close circuit so the current will run through it.

![Normally Open Switch](https://github.com/anmarjarjees/arduino-code/blob/master/images/normally-open-switch.jpg)

- Normally Closed (NC) => The switch is normally closed, so we have a closed circuit. Has to be pressed/activated/actuated to break the connection between the terminals. If you push/press it, there will be an open circuit so the current will NOT run through it.

![Normally Closed Switch](https://github.com/anmarjarjees/arduino-code/blob/master/images/normally-closed-switch.jpg)

This type of (NC) buttons are usually used in Emergency Stop button or the safety Stop buttons as we have on treadmill 

You can [read more about push buttons](https://learn.sparkfun.com/tutorials/button-and-switch-basics/all)

Look at the image below as an example of one type of using pushbutton:
When the pushbutton is pressed:
- A connection is created between Terminal 1 (T1) and Terminal 2 (T2)
OR:
- A connection is created between Terminal 3 (T3) and Terminal 4 (T4)
![Pushbutton Terminal Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-terminal-connection.jpg)

### VCC and GND
VCC Abbreviation of "Voltage Common Collector" is an electronics designation that refers to voltage from a power supply  (input) of a device (To supply voltage for an integrated circuit). GND Abbreviation of "Ground" is the the reference point against which the VCC is compared. It can be positive or negative compared to GND. When the VCC is at zero colts, it is called the ground.<br>
- Vcc => refers to the "Power Supply" voltage
- Vee => refers to the "Emitter" voltage
- Vss => refers to the "Source" voltage
- Vdd => refers to the "Drain" voltage

### Implementing/Adding a switch/pushbutton on Arduino
To plug/use a switch/pushbutton in an Arduino circuit, we use two methods:
- Pullup Resistor Circuit [used with Active Low]
- Pulldown Resistor Circuit [used with Active High]

When push buttons are used in a circuit, we refer to them as:
- Active High switch/pushbutton
- Active Low switch/pushbutton

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
Modifying the same code file but adding the required varaible and function to run the LED (refer to my comments in the code file):
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