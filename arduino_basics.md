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

Okay, so we've seen what is possible with Arduino's. Now we'll take a look at how to code programs for Arduino. Arduino uses a progamming language similar to C++. It is useful to have a code editor open so you can copy and paste examples and play around with them:
[Online Code Editor](cpp_shell/cpp_shell.html)  

Use "print" and "println" to print things. Copy and paste this example:

```c++
println("Hello World!");
```

To write comments in C++, use two slashes:

```c++
int i; // this is a comment
```

Anything after the two slashes is ignored.

Also, in C++, we must always end each line with a semicolon.

### Variables

Vaiables are symbols that can hold values. Think of them as a box that you can put things in. For example, take a look at the following code:

```c++
int a = 5;
int b = 3;

int c;
c = a*b // c = 15
```

__a__, __b__, and __c__ are all variables. To use a variable, we must first **declare** variables. We declare variables by stating the type of the varable(in this case, we used integers, so we use the __int__ type), then the name.

```c++
int a;
```

We can also specify the default value if we want:

```c++
int a = 5;
```

**We only need to declare a vaiable once in a program** After it has been declared, we can use it without specifying the type:

```c++
int a = 5;
a = 3 // a is 3
a = a + 4 // a is 3 + 4 = 7
```

### Functions

Functions are pieces of code you can run wherever. With a function, you pass in data, and the function returns data. This function computes the square of a number:

```c++
int square(int i){
    return i*i;
}

square(5); // 25
square(2); // 4
square(3); // 9

```

Let's break the above code down:  
To declare a function, we must say what type it will return. In this case, we're returning an integer (the square of a number), so we use the **int** type. After that, we give a name to our function (in the example, it is "square"). Next, we need to let the function know what we will pass in. In this case, we're just passing in some integer i. We call these **parameters**. These go in parentheses. Next, we move onto the actual code of the function. This goes in curly braces {}. In this example, we only have one line, i*i, which we then return. Now we can call square(i) whenever we want the square of a number.

### If Statements

Sometimes, we only want to execute code when certain conditions are met. For this, we use If statements. Take a look at the following example:

```c++
int a = 5;
if(a > 3){
    print("a is greater than 3");
}
```

This only executes if a is greater than 3. We put what we want to test in the parentheses (), and the code to execute in curly braces {}. We can test many things, such as if two things are equal:
```c++
int a = 5;
a == 5; // true
```

Or if things are not equal:
```c++
int a = 5;
a != 5; // false
```

We can even put two tests together:
```c++
int a = 5;
int b = 8;

if (a > 3 && b > 3){
    print("both a and b are greater than 3");
}
```

Sometimes we want to run code if a test fails, so we use else statements:

```c++
int a = 5;
if (a > 9){
    print("a is greater than 9");
} else {
    print("a is less than or equal to 9");
}
```
In thse above code, only the second "print" is executed, since it fails the test.

### While Loops
**TODO**

### For Loops
**TODO**

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

To get you guys familiar with coding, we have a couple of excercises for you all to try. 