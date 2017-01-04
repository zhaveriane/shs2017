---
layout: index
---

**Arduino** is a tool for making computers that can sense and control more of the physical world than your desktop computer. Arduino is a small circuit board with an Atmel MicroController chip and other parts. 

**Arduino** is a **"Rapid Electronics Prototyping Platform"** which consists of two main parts:

**HARDWARE: An Arduino Open-Source Microcomputer board**
![](https://arduino-info.wikispaces.com/file/view/RoboRed-Annotated-600.jpg/540023456/465x339/RoboRed-Annotated-600.jpg)

**SOFTWARE: The free Arduino IDE that runs on PC, MAC, or Linux**
![](https://arduino-info.wikispaces.com/file/view/ArduinoArch1-900.jpg/374218474/880x665/ArduinoArch1-900.jpg)

**Arduino** can be used to quickly develop **Interactive Objects**, taking **Inputs** from a variety of switches or sensors, making **Decisions**, and controlling a variety of **Outputs** such as lights, motors, sounds, etc. This is called **Physical Computing**.

**The Arduino IDE (Integrated Development Environment)**

![](https://arduino-info.wikispaces.com/file/view/IDE-Example1.jpg/374274694/IDE-Example1.jpg)

This is the free software you will use to create the Behavior of your project. Here's what it includes:

* An **EDITOR** to create and edit the text of your software Sketch. It actively highlights Keywords in the language so typing errors are more obvious.

* A **VERIFY** system that runs through your Sketch, verifies that there are no errors, and then compiles it into the machine language program that can be Uploaded to your Arduino board over the USB cable.

* An **UPLOAD** system that communicates with your Arduino Board over USB, loads your program into Arduino memory, and starts your program running.

* A **SERIAL MONITOR** window that allows you to receive and send messages from programs running on your Arduino board. This is often used for testing and "debugging" programs.

* Many **EXAMPLE** software Sketches that show how to use many different devices and techniques.

**The "Arduino Language"**:

If you haven't written "code" in any computer language yet, you'll have to get used to writing very specific commands to get things done. But Arduino gives you many easy to use commands! To turn an LED ON for example, you'd write something like:

```
digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
```
and to turn it off again, you'd write:
```
digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
```

