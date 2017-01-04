---
layout: index
---

### Debugging

It is useful to have a code editor open so you can copy and paste examples and play around with them:
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

### Primitives

These are the basic building blocks of a programming language. In C++ these are:

#### int

An integer like 4, 29, 0, -5.

#### float

A decimal number like 1.2, 57.7.

#### bool

A boolean is either yes or no. In C++ booleans are either __true__ or __false__.

#### string

A string is text, like a word or a sentence. In C++ strings must have quotation marks "" around them.

### Variables

Vaiables are symbols that can hold values. Think of them as a box that you can put things in. We use an equal sign = to assign values to a variable. For example, take a look at the following code:

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

### Loops

A loop lets you run a section of code many times. Each time we go through a loop once is called an iteration.

#### While Loops

A while loop lets you run a section of code while something is true. For example:

```c++
int a = 3;
while(a > 0) {
	print("hello");
	a = a - 1
}
```

This code above will start with a variable __a__ that has a value of 3. When we enter the while loop, 3 > 0 so we print "hello" and then lower the value of __a__ by 1. In the second iteration, __a__ = 2 and 2 > 0, so we will print "hello" and lower the value of __a__ by 1 again. In the third iteration, __a__ = 1 and 1 > 0, so we will print "hello" and lower the value of __a__ by 1. In the fourth iteration, __a__ = 0, and 0 is not > 0, so we will exit the while loop.

#### For Loops

For loops let you run a section of code a specific number of times.

In a for loop, you create a variable that has a starting value, the stopping value, and how the variable will change between iterations. For example, the code below has a variable called __i__ that starts at 0. At each iteration, __i__ is increased by 1, and the loop stops after __i__ is 10 or higher, or after the loop iterates 10 times.

```c++
for(int i = 0; i < 10; i = i + 1) {
	print(i);
}
```

### Arrays

An array is like a train of variables. An array is a variable that can hold many values.

![Arrays](images/arrays_foo.png)

In the above example, the array foo holds five values: 16, 2, 77, 40, and 12071. To create this array, you have to tell the computer what type of values you want to put into the array, and how many values the array is able to hold. This would look like:

```c++
int foo[5];
```

This would create an empty array with five slots to hold values. To create an array with values already in it, do:

```c++
int foo[5] = {16, 2, 77, 40, 12071};
```

You can get a value in an array using the index. Arrays start at index 0, __not__ 1.

Getting the first value from an array:

```c++
foo[0];
```

Getting the second value from an array:

```c++
foo[1];
```

To get you guys familiar with coding, we have a couple of excercises for you all to try. 