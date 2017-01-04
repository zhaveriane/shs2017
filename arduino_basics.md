---
layout: index
---

**Arduino** is a tool for making computers that can sense and control more of the physical world than your desktop computer. Arduino is a small circuit board with an Atmel MicroController chip and other parts. 

**Arduino** is a **"Rapid Electronics Prototyping Platform"** which consists of two main parts:

**HARDWARE: An Arduino Open-Source Microcomputer board**
![](https://arduino-info.wikispaces.com/file/view/RoboRed-Annotated-600.jpg/540023456/465x339/RoboRed-Annotated-600.jpg)

**SOFTWARE: The free Arduino IDE that runs on PC, MAC, or Linux**
![](https://arduino-info.wikispaces.com/file/view/IDE-Example1.jpg/374274694/IDE-Example1.jpg)

**ARDUINO BASIC OVERVIEW**

![](https://arduino-info.wikispaces.com/file/view/ArduinoArch1-900.jpg/374218474/880x665/ArduinoArch1-900.jpg)

**Arduino** can be used to quickly develop **Interactive Objects**, taking **Inputs** from a variety of switches or sensors, making **Decisions**, and controlling a variety of **Outputs** such as lights, motors, sounds, etc. This is called **Physical Computing**.

**The Arduino IDE (Integrated Development Environment)**

This is the free software you will use to create the Behavior of your project. Here's what it includes:

* An **EDITOR** to create and edit the text of your software Sketch. It actively highlights Keywords in the language so typing errors are more obvious.

* A **VERIFY** system that runs through your Sketch, verifies that there are no errors, and then compiles it into the machine language program that can be Uploaded to your Arduino board over the USB cable.

* An **UPLOAD** system that communicates with your Arduino Board over USB, loads your program into Arduino memory, and starts your program running.

* A **SERIAL MONITOR** window that allows you to receive and send messages from programs running on your Arduino board. This is often used for testing and "debugging" programs.

* Many **EXAMPLE** software Sketches that show how to use many different devices and techniques.

**STRUCTURE OF ARDUINO SOFTWARE:**

Every Arduino Software Sketch has two main parts:

**SETUP** - Runs Once at the beginning

**LOOP** - Runs over and over again, forever

![](https://arduino-info.wikispaces.com/file/view/LCSS-IDE-BlinkCode.jpg/293533854/503x424/LCSS-IDE-BlinkCode.jpg)

**The Simplest Arduino Code - LED Blink**

Arduino makes it very easy to use commands! Here is a simple code to get started:

```
#define led 13  // define name of pin number 

void setup()   /****** SETUP: RUNS ONCE ******/
{
  pinMode(led, OUTPUT);  // initialize the digital pin as an output. 
}

void loop()   /****** LOOP: RUNS CONSTANTLY ******/
{
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second, watching the bright LED
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second, watch the Dark
}
```
What **SETUP** does: Tells Arduino about things that need to be done once. Arduino Digital Pins can be either INPUT or OUTPUT. You have to tell Arduino when a Pin will be used as an OUTPUT. In this example, there is one line that tells Arduino that Pin 13 must be an OUTPUT.

**MAKING THINGS MOVE**

Now let's do something more interesting and control servos!

Servos are Positional devices: they move an output arm to different positions as commanded by a signal. This signal will be provided by an Arduino! Servos come in different shapes and sizes. Here is the servo that we will be using:

![](https://arduino-info.wikispaces.com/file/view/servo-sg90-400.jpg/414536738/320x320/servo-sg90-400.jpg)

Servos have a three wire connector. One wire supplies positive DC voltage – usually 5 to 6 volts. The second wire is for ground, and the third wire is the signal wire. The Arduino “talks” to the servo through this wire by means of a simple on/off pulsed signal. They can plug directly into the 3-pin connectors on your Arduino.

**CONNECTIONS**:
wire colors may vary!

* Servo Black or Brown to Ground
* Servo Red or Orange (Center wire) to +5V
* Servo White or Yellow to Signal (Pin 11)

And here's a basic code to control the servo. Don't get scared by the length of the code - it mostly includes comments to clarify any misunderstandings!

```
/* YourDuino Basic Robot Kit V2: Test Servo movement
 - WHAT IT DOES: Tests the servo by commanding it to go to several different directions
   to "Look Around". 

/*-----( Import needed libraries )-----*/
#include <Servo.h>

/*-----( Declare Constants and Pin Numbers )-----*/
#define SERVO_PIN 11 // Servo plugs into Pin 11

/*-----( Declare objects )-----*/
Servo myservo;  // create servo object to control a servo

/*-----( Declare Variables )-----*/
int pos;    // variable to store the servo position

void setup()   /****** SETUP: RUNS ONCE ******/
{
  myservo.attach(SERVO_PIN);  // attaches the servo on pin 11 to the servo object

}//--(end setup )---

void loop()   /****** LOOP: RUNS CONSTANTLY ******/
{
  for(pos = 20; pos < 160; pos += 30)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 30 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1000);                      // Wait 500ms between pings 
  }
    
  for(pos = 160; pos>=20; pos -= 30)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1000);
  }    

}//--(end main loop )---

/*-----( Declare User-written Functions )-----*/
//NONE

//*********( THE END )***********
```
