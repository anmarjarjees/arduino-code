# Arduino-code
## Brief and Simple Demonstration About How to Start with Arduino Programming

![Arduino UNO R3](https://github.com/anmarjarjees/arduino-code/blob/master/images/Arduino_Uno_R3.jpg)

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

3. Programs written in Arduino IDE are called "sketches"

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

### Code Files#1:
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

### Code Files#2:
- 04.led-serial-monitor.ino

## Light Emitting Diode (LED):
A light-emitting diode (LED) is a semiconductor tiny light source that emits light when current flows through it. Allows Arduino/Genuino boards to simplify the use of the LED.<br>
This library simplify the use of a LED. It contains many function to manage a LED. A diode is a semiconductor device that essentially acts as a one-way switch for current. It allows current to flow easily in one direction, but severely restricts current from flowing in the opposite direction.

LEDs/Diodes have polarity that is determined by an anode (positive lead) and cathode (negative lead). So they only light up when its legs are oriented properly.

![LED/DIODE Symbol](https://github.com/anmarjarjees/arduino-code/blob/master/images/diode_symbol.png).

### LED Anode and Cathode:
- Anode (Positive) lead is longer
- Cathode (Negative) lead is shorter
- OR By using the "flat" area/spot on the case, the lead which is closest to the flat spot is the cathode pin

![LED Diagram](https://github.com/anmarjarjees/arduino-code/blob/master/images/LED.png).

You can check this [article about diode](https://www.fluke.com/en-ca/learn/blog/electrical/what-is-a-diode#:~:text=A%20diode%20is%20a%20semiconductor,flowing%20in%20the%20opposite%20direction.)

### Resistor:
A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. In electronic circuits, resistors are used to reduce current flow (resists the flow of a current), adjust signal levels, to divide voltages, bias active elements, and terminate transmission lines, among other uses. So In a full circuit, LED requires the use of a resister to make sure that the maximum current is not exceeded.

![Electronic-Lead-Resistors-Array](https://github.com/anmarjarjees/arduino-code/blob/master/images/(https://github.com/anmarjarjees/arduino-code/blob/master/images/LED.png)

![LED Circuit](https://github.com/anmarjarjees/arduino-code/blob/master/images/(https://github.com/anmarjarjees/arduino-code/blob/master/images/LED_circuit.jpg)

Higher resistor values will further lower the current, reducing the brightness of the LED

### LED Wiring
Connecting an LED to arduino board:
- Pin 2 (on Arduino Board) connects the resister (330 ohm). 330 ohm is the standard value to be commonly used in breadboards and other prototyping applications, these 330 ohm resistors make excellent LED current limiters and are great for general use.
- The resister connects to the LED anode (+). Notice that Tinkercad will give you hints when you hover the mouse like anode/cathode and etc..
- The LED cathode (-) connects to the Arduino ground pin (GND)
Please look at the image below for more clarifications:

![LED Wiring](https://github.com/anmarjarjees/arduino-code/blob/master/images/(https://github.com/anmarjarjees/arduino-code/blob/master/images/LED-wiring.png)

======================================================

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
[Arduino Tutorial by Paul McWhorter](https://youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP)
