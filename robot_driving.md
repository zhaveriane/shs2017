---
layout: index
---

# Driving the Robot

After completing the connections, it's time to test the motors on the robot! This is mostly programming on the Arduino IDE.

First, we want to setup some variables so that it's easy to refer to the pins on the Arduino as easy-to-remember motor pins:

```
#define leftMotorA 5
#define leftMotorB 6
#define leftMotorEnable 9

#define rightMotorA 7
#define rightMotorB 8
#define rightMotorEnable 10
```

Next, we specify that these pins are output pins in the Setup Function:

```
void setup() {
  pinMode(leftMotorA, OUTPUT);
  pinMode(leftMotorB, OUTPUT);
    pinMode(rightMotorA, OUTPUT);
  pinMode(rightMotorB, OUTPUT);
}
```

And finally, you follow the following pattern of code and play around to see what direction the wheels are turning in:

```
void loop() {
digitalWrite(leftMotorA, HIGH);
digitalWrite(leftMotorB, LOW);
digitalWrite(leftMotorEnable, HIGH);
  digitalWrite(rightMotorA, HIGH);
digitalWrite(rightMotorB, LOW);
digitalWrite(rightMotorEnable, HIGH);
}
```

By now, you should have already understood what to do. Upload the code to your Arduino board!

If your wheels are moving, GREAT JOB! That's all for now. We can easily play around with the code to make the motors turn in the desired direction. We will also learn about creating movement functions to easily create complex paths for the robot.




