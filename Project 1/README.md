# Project 1: Newton-Raphson method

This project was to use the Newton-Raphson method to find solutions of a function.

## Description

Develop c++ and python codes to find all real solutions of

<p align="center">
    $f(x)=tanh(ax)−x=0,$
</p>

for a=0.8 and for a=1.2, by searching for fixed points of the recusion relation xn+1=g(xn). Contrast two choices of the function g, namely the simple method

<p align="center">
    $$g_0(x)=tanh(ax)$$
</p>

vs. the Newton-Raphson method

<p align="center">
    $$g_{NR}(x)=x−{f(x) \over f′(x)}.$$
</p>

Use the Newton-Raphson method to find all the solutions for the two cases. Plot y=tanh(ax) and y=x to visually see the solutions for the two vales of a. Classify the stability (stable vs unstable ) of the fixed point(s) for both the simple g0(x) and the Newton-Raphson gNR(x). 

Briefly describe what happens to the solutions when a increases through one, using a concept we used in the Logistic map when r increases through 34.

## Getting Started

### Dependencies

* Describe any prerequisites, libraries, OS version, etc., needed before installing program.
* ex. Windows 10

### Installing

* How/where to download your program
* Any modifications needed to be made to files/folders

### Executing program

* How to run the program
* Step-by-step bullets
```
code blocks for commands
```

## Results
I coded multiple programs that do different tasks in order to use the Newton-Raphson method and classify the stability of the fixed points.

### Program 1: 
Purpose: Finds a fixed point for a=0.8

Output: 

![0 8Output](https://user-images.githubusercontent.com/87621598/180702072-847ceff0-a1b7-4c25-960e-b29ed04630a9.png)

Analysis: After trying different values of x, you can see that there is a fixed point at x=0 for the function f(x) when a=0.8

### Program 2:
Purpose: Tells whether the fixed point is stable or not (a=0.8)

Output:

![0 8Stability](https://user-images.githubusercontent.com/87621598/180702398-c14879ea-4500-453f-b6fb-8b0c6faec7a9.png)


Analysis: In the previous program, we found x=0 as a fixed point. 
Thus, using this value, we found the alpha, which is also zero. 
This fixed point (x=0) is stable. 

### Program 3

Purpose: Finds fixed point for a=1.2

Output:

![1 2Result](https://user-images.githubusercontent.com/87621598/180702612-ebdbfefd-78ca-4d66-a845-67b623ebd8b2.png)
![1 2Result2](https://user-images.githubusercontent.com/87621598/180702759-5acf299b-6853-492a-8272-9bbc82993395.png)
![1 2Result3](https://user-images.githubusercontent.com/87621598/180702840-6ea8d1e6-0be6-4936-a232-0a386e1d9d0b.png)


Analysis: After trying different values of x, you can see that there are fixed points at 
x= -0.65857
x= 0
x= 0.65857
for f(x) when a=1.2

### Program 4:

Purpose: Tells whether the fixed point is stable or not (a=1.2)

Output:

x= -0.65857

![1 2Stability1](https://user-images.githubusercontent.com/87621598/180703134-3c4e7385-210f-4d7d-b8c1-0584a0a959f1.png)

x= 0

![1 2Stability2](https://user-images.githubusercontent.com/87621598/180703199-dd96f8a5-b72d-4416-92cc-158b2f6329e1.png)

x=0.65857

![1 2Stability3](https://user-images.githubusercontent.com/87621598/180703026-e39e0639-c972-41f9-a506-c29f7489ce2c.png)


Analysis: As you can see, the alpha’s for all three fixed points are less than 1.
Therefore, they are all stable. 

## Conclusion:
When a increases through 1, you can observe from the f(x) vs. x graph that the number of intersections between f(x) and the x-axis changes from 1 to 3. This means that the number of fixed points go from 1 to 3. Thus, explains why for a=0.8 there is only one fixed point at x=0. But for a=1.2, there are three fixed points. 
It is important to note that the fixed points always lie between x=[0,1]. No matter how big “a” is, the fixed points do not go beyond x=1. 
