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
