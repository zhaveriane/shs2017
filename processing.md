---
layout: index
---

# Coding with Processing

## Using openprocessing.org

Go to [openprocessing.org](openprocessing.org). Click "Join & Create". Create an account.  

Now click "Create a Sketch".

## Coordinate Systems  

(0, 0) is in the top left corner. It increases in both directions.

![coordinates](coordinates.svg)

## Drawing Shapes  

Now we will learn how to draw shapes:  

![shape](shapes.svg)

## Drawing Points  

Points are simple to draw. We only need an x and y coordinate.

![point](point.svg)

## Drawing Lines  
Lines require two coordinates:  

![lines](lines.svg)  

## Drawing Rectangles  

A rectangle requires the top left corner location and its width and height.

## Drawing Ellipses  

To draw an ellipse, provide the center point and the width and height.

![ellipse](ellipse.svg)

## Drawing 

Try running the following code:  

```java
function setup() {
  createCanvas(windowWidth, windowHeight);
} 

function draw() {
rect(90,50,20,100);
ellipse(100,70,60,60);
ellipse(81,70,16,32); 
ellipse(119,70,16,32); 
line(90,150,80,160);
line(110,150,120,160);
line(60,100,90,110);
line(110,110,140,100);
}
```

Now try making your own drawings!


