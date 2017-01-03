---
layout: index
---

#Arduino Basics

Today we'll be taking an in-depth look at Arduino's, and what they're capable of. In short, we can use Arduinos to control circuits with code, allowing us to add complex logic to our circuits. We've already seen a couple of demos of what we can do.

### Reading Voltage Data

One thing we'll want to do is read voltage values from our circuit. Try opening the Basic AnalogReadSerial example, and connecting the flex sensor crcuit to A04. You should see numbers changing as you bend the sensor around. This allows us to look at how much each flex sensor is flex, which we'll want to do for our final project. 

### Writing Voltage Data

We also want to be able to control voltage values in our circuits. Arduino allows us to do this easily. Try out the Basic Fade example, and try measuring the voltage output from the pin using your multimeter. You should see the voltage changing.

## Basic Code Syntax

Okay, so we've seen what is possible with Arduino's. Now we'll take a look at how to code programs for Arduino. Arduino uses a progamming language similar to C++. 

### Arduino Code Layout

A default Arduino project looks like this:

```c++
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
```

In this code, __setup__ and __loop__ are **functions**. In Arduino, __setup__ and __loop__ are special functions. __setup__ is run once, and __loop__ is run over and over again until power is removed.