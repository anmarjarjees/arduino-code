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

5. Since we need to work on Arduino Circuit, we can search for Arduino in the search box above the Circuit.
select "Arduino Uno R3". You will have the Arduino Circuit available on the sketch board

6. To start coding the Arduino Circuit, you click the "Code" button at the top:
- Blocks: Going with the templates/samples to see different built-in samples of tasks
- Text: To use the traditional method of coding with a text editor, select "text"
- Blocks + Text: mixing the two options

7. Select "Text", and you will get a text editor with the two basic required functions like in Arduino IDE

8. After writing your code, you can click "Start Simulation". No need for uploading the code to a real physical Arduino board!

### First Code Files:
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
