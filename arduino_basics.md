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
