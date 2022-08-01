# Arduino-code
## Brief and Simple Demonstration About How to Start with Arduino Programming

![Arduino UNO R3](https://github.com/anmarjarjees/arduino-code/blob/master/images/Arduino_Uno_R3.jpg)

Arduino is an open-source electronic computing platform. It has two components:
- Hardware: Arduino Circuit Board => Arduino Uno R3 (It has a computing system/processor)
- Software: Arduino IDE to write our code for controlling the Arduino board. Using Arduino language which is based on C/C++ language

It's Easy-to-use hardware and software and it's intended for anyone who is interested in creating interactive objects or environments. 

[Arduino Board - UNO R3](https://docs.arduino.cc/hardware/uno-rev3)

[Arduino Uno Rev3](https://store-usa.arduino.cc/collections/boards/products/arduino-uno-rev3)

Arduino Board is connected to the computer through a USB cable.

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
  - "pin" is either an input or output port that is connected to something in the breadboard. For example, Output to an LED or Input from a Push Button
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
And you can start building your Circuit.
![Tinkercad Dashboard Left Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/dashboard-options.jpg)

5. Since we need to work on Arduino Circuit, we can search for Arduino in the search box above the Circuit.
select "Arduino Uno R3". You will have the Arduino Circuit available on the sketch board
![Board Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/board-options.jpg)

Notice that we can search for any other component that we need to use in our Arduino projects. For example, we need "breadboard" so we can search for it and just drag it to the workspace.
![Breadboard with Arduino](https://github.com/anmarjarjees/arduino-code/blob/master/images/breadboard-arduino.jpg)

6. To start coding the Arduino Circuit, you click the "Code" button at the top:
- Blocks: Going with the templates/samples to see different built-in samples of tasks
- Text: To use the traditional method of coding with a text editor, select "text"
- Blocks + Text: mixing the two options

7. Select "Text", and you will get a text editor with the two basic required functions like in Arduino IDE

8. After writing your code, you can click "Start Simulation". No need for uploading the code to a real physical Arduino board!

### Code Files:
- 01.intro.ino
- 02.digital-io-pins.ino
- 03.first-sketch.ino

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

### Code Files:
- 04.led-serial-monitor.ino

## Light Emitting Diode (LED):
A light-emitting diode (LED) is a semiconductor tiny light source that emits light when current flows through it. Allows Arduino/Genuino boards to simplify the use of the LED.<br>
This library simplify the use of a LED. It contains many function to manage a LED. A diode is a semiconductor device that essentially acts as a one-way switch for current. It allows current to flow easily in one direction, but severely restricts current from flowing in the opposite direction.

LEDs/Diodes have polarity that is determined by an anode (positive lead) and cathode (negative lead). So they only light up when its leads (the positive/negative) are oriented properly.

![LED/DIODE Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/diode_symbol.png).

### LED Anode and Cathode:
- Anode (Positive) lead is longer
- Cathode (Negative) lead is shorter
- OR by using the "flat" area/spot on the case, the lead which is closest to the flat spot is the cathode pin

![LED Diagram](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED.png).

You can check this [Light-Emitting Diodes (LEDs) article](https://learn.sparkfun.com/tutorials/light-emitting-diodes-leds/all)

You can check this [article about diode](https://www.fluke.com/en-ca/learn/blog/electrical/what-is-a-diode#:~:text=A%20diode%20is%20a%20semiconductor,flowing%20in%20the%20opposite%20direction.)

In any board/circuit, LED requires a resister to work.

### Resistor:
A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. In electronic circuits, resistors are used to reduce current flow (resists the flow of a current), adjust signal levels, to divide voltages, bias active elements, and terminate transmission lines, among other uses. So In a full circuit, LED requires the use of a resister to make sure that the maximum current is not exceeded.

![Electronic-Lead-Resistors-Array](https://github.com/anmarjarjees/arduino-code/blob/master/images/Electronic-Lead-Resistors-Array.png)

![LED Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED_circuit.png)

Higher resistor values will further lower the current, reducing the brightness of the LED

### Getting Resister Value (Ohm's Law) in General:
To determine what value we can use for a resister for some special kinds of LEDs, we can use the Ohm's law, so by combining the elements of "voltage", "current", and "resistance", Ohm developed the formula below:
> V = I x R (To calculate the Voltage => it's called "Ohm's law")
Where:
- V = Voltage in volts
- I = Current in amps
- R = Resistance in ohms

After rearranging the formula/equation:
> I = R / V (To calculate the Current)
> R = V / I (To calculate the Resistance which is what we need to use)

So to determine the minimum acceptable value of the resister, we can use this formula/equation:
> R = V / I

We need the value of "V" and the value "I" to find "R", we will learn to find them in the next topics. <br>

You can check this video [Ohm's Law](https://www.youtube.com/watch?v=8jB6hDUqN0Y).<br>
Or read the full article about ["Voltage, Current, Resistance, and Ohm's Law"](https://learn.sparkfun.com/tutorials/voltage-current-resistance-and-ohms-law/all#:~:text=Ohm%20defines%20the%20unit%20of,%2C%20and%20pronounced%20%22ohm%22.)

#### IMPORTANT NOTE:
LED are what's known as a "non-homic" devices. It introduces something called a "voltage drop" into a circuit, and this will lead to change the amount of current running through it. knowing the "Voltage Drop" value for a LED is important as this value/number will help you decide how much voltage your circuit will need to supply to the LED. Which means it will affect the voltage value that we use in Ohm's Law equation.

##### LED Specifications:
### Votlage Drop (Forward Voltage):
When buying a LED it comes with a document that shows all its specifications called "Datasheet". You can check this link about [LED-Basic Red] (https://www.sparkfun.com/products/9590?_ga=2.185358185.1176383297.1658699422-984879093.1658436149), click "Documents" tab then "Datasheet". In the Datasheet PDF file, you will see some tables with categories and values. The item that we need to look for is called "Forward Voltage" of an LED which the "Voltage Drop" of that specific LED. It has Min and Max value so the minimum is the value that we need to know/use to determine the value of the resister. Notice in case if the Datasheet provides Forward Voltage for RED, Green, and Blue Color LED, we use the Red Color value based on our selected LED.
![LED Forward Voltage](https://github.com/anmarjarjees/arduino-code/blob/master/images/forward-voltage.jpg)
> ** We will use the minimum value of 1.8 V based Datasheet table that is provided with LED package.**

### The Current:
Also we can see in the first table of Parameters, the first important parameter is the "Forward Current". You can see a forward current for a Red LED is 20 mA (milliamp: a unit for measuring electrical current which is equal to one thousandth of an ampere.). 
![LED Forward Current](https://github.com/anmarjarjees/arduino-code/blob/master/images/forward-current.jpg)
Please remember that although the datasheet says 20 mA, but this is the maximum current that LED can take! So usually, when we do our calculation:
 > ** we should go a little bit lower which is around 10 mA.**

### Getting Resister Value (Ohm's Law) in Arduino Project:
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
The standard resister value is 330 ohm to be commonly used in breadboards and other prototyping applications, these 330 ohm resistors make excellent LED current limiters and are great for general use. 330 ohm is very close to what we got from the above equation. So we can apply the same standard steps to calculate the desired resister for any LED with any color or datasheet.

### LED Circuit and Coding:
Starting with the Hardware first by building the LED circuit
#### LED Wiring
Connecting an LED to arduino board:
- Pin 8 (on Arduino Board) as a voltage source will be connected to the one side of a resister. 
- The resister is 330 ohm. One end has to be placed on the same line as the Pin2 wire which is Line 2 in the breadboard. 
NOTE: 
You can specify the value of the resister exactly plus the measurement unit with the help of the inspector popup window that appears when you select an item in the Tinkercad workspace:
![Resister Inspector Options](https://github.com/anmarjarjees/arduino-code/blob/master/images/resister-inspector-options.jpg)

- The other side of the resister connects to the LED anode (+) which is the longer side of the LED. Also they both have to be placed in the same line which is Line 2 also. Notice that Tinkercad will give you hints when you hover the mouse like anode/cathode and etc..
![LED Cathode](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-Cathode.jpg)
![LED Anode](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-Anode.jpg)
- The LED cathode (-) connects to the Arduino ground pin (GND)
Please look at the image below for more clarifications:

![LED Wiring](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-wiring.jpg)

### Code Files:
Now you can start our code to light the LED circuit:<b>
Opening the same code file "04.led-serial-monitor.ino" and add some changes based on the pin that we used in the Hardware connection:
- 05.led-circuit-work1.ino

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

### Code Files:
Now we can few changes to our code, please refer to the file:
- 06.led-circuit-work2.ino

### LED Traffic Signal Circuit:
Practising what we have learned to create LED Traffic Signal Circuit:
#### Hardware Connection:
For this project, we need to control three separate digital interfaces:
- Red LED => using pin 12
- Yellow LED => using pin 11
- Green LED => using pin 10

- Breadboard
- 3 resisters to be plugged into the breadboard:
![Three Resisters on Breadboard](https://github.com/anmarjarjees/arduino-code/blob/master/images/three-resisters-board.jpg)
- Connect the 3 LED (as we did with one LED) if you have all the physical components. When using "Autodesk Tinkercad", you can select and LED and change its color from the inspector popup window:

![Three Color LEDs](https://github.com/anmarjarjees/arduino-code/blob/master/images/three-color-led.jpg)


- Connect one end of each resister to its corresponding LED, and the other end will be connected to arduino pins as stated above. Notice in the image below, I used different color for the wires for more clarity:

![Three Led Wire Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/three-led-wire-connection.jpg)

- Connecting the other leg of each LED to the ground as we did in the first simple circuit for one LED. Since we have three LED, we can use the breadboard common ground. Connect the cathode leg for each LED to the negative line of the breadboard  as shown below:
led-cathode-negative-line.jpg
![LED Cathode Negative Line Connections](https://github.com/anmarjarjees/arduino-code/blob/master/images/led-cathode-negative-line.jpg)

- Finally, connecting the negative line on the breadboard that has the three connections from the LED to the Ground Pin (GND) of Arduino board.

![LED Traffic Signal Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/led-traffic-signal-connection.jpg)

### Code Files:
You can use the code editor with "Text" option to write your code. In the code editor window, click the "Serial Monitor" to see the printed text output also.

- 07.led-traffic-signal.ino

![Led traffic code - Serial Monitor](https://github.com/anmarjarjees/arduino-code/blob/master/images/led-traffic-code-serial-output.jpg)


## Working with Push Buttons:
Push buttons has different shapes to provide arduino with an input signal. Push buttons can be explained as simple power controlling switches of a machine or appliance. A switch is a component which controls the open-ness or closed-ness of an electric circuit. It connects two points in a circle when you press it:
![Pushbutton](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-symbol.png)
The current can only flow through a circuit when the button is pressed for connecting the circuit.
![Simple Pushbutton Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/simple-pushbutton-circuit.jpg)

### Types of Pushbutton:
Pushbutton can be either one of these two distinct types or categories:
- Momentary Pushbutton/Switch: Are switches/push-buttons which only remain in their "ON" (active) state as long as they're being actuated (pressed, held, pushed, magnetized,  etc.). If they're not being actuated, they remain in their "off" state. Think about this type of switches like the keys of your keyboard, when pressing the letter "A" and hold down the key, it will keep printing/typing the letter "A" until release the button.
![Momentary Pushbutton Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/momentary-pushbutton-symbol.jpg)
- Maintained Pushbutton/Switch: Are switched/push-buttons that stay in one state until actuated into a new one, and then remain in that state until acted upon once again. Like the light switches on a wall. Maintained switches are great for set-it-and-leave it applications like turning power on and off.
![Maintained Switch Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/maintained-switch-symbol.png)

Push buttons can be arranged to two different cases:
- Normally Open (NO) => The switch is normally open, so we have an open circuit. Has to be pressed/activated/actuated to make the connection between the terminals. If you push/press it, there will be a close circuit so the current will run through it.
![Normally Open Switch](https://github.com/anmarjarjees/arduino-code/blob/master/images/normally-open-switch.jpg)

- Normally Closed (NC) => The switch is normally closed, so we have a closed circuit. Has to be pressed/activated/actuated to break the connection between the terminals. If you push/press it, there will be an open circuit so the current will NOT run through it.
![Normally Closed Switch](https://github.com/anmarjarjees/arduino-code/blob/master/images/normally-closed-switch.jpg)

This type of (NC) buttons are usually used in Emergency Stop button or the safety Stop buttons as we have on treadmill 

You can [read more about push buttons](https://learn.sparkfun.com/tutorials/button-and-switch-basics/all)

Look at the image below as an example of one type of using pushbutton:
When the push button is pressed:
- A connection is created between Terminal 1 (T1) and Terminal 2 (T2)
OR:
- A connection is created between Terminal 3 (T3) and Terminal 4 (T4)
![Pushbutton Terminal Connection](https://github.com/anmarjarjees/arduino-code/blob/master/images/pushbutton-terminal-connection.jpg)

---

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