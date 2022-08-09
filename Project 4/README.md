# Project 4: Ordinary Differential Equations (ODEs)

Methods: Euler Method, Runge-Kutta Method, Verlet Method
Applications: Simple Harmonic Oscillatorm (SHO), Non-Linear Pendulum, Damped, Driven Non-Linear Pendulum

Two programs were made using the Verlet method to show the time evolution of the damped-driven nonlinear and the undriven-undamped nonlinear oscillators. Their phase protratis were then plotted.

Furthermore, the Poincare Section for the chaotic section was plotted. 

## Description

<p align="center">
    Reproduce the phase portrait in the damped-driven nonlinear section that contrast that model with the undriven-undamped nonlinear oscillator.
<br><br>
  Produce a plot with two panels.   In the first panel fix γ=0.5, a0=0.5 and draw three orbits with initial conditions (x0,v0)=(0.2,0) then (0.2,2) and finally (0,0.25).   In the second panel fix γ=0, a0=0 and draw three orbits with the same initial conditions.
<br><br>
  Next consider the chaotic case γ=0.5, a0=1.2. Produce one plot of (x,v) points.
<br><br>
  Recall that the dynamics is really 3D.   Next plot a Poincare Section of the data in b).
</p>

## Files
Programs (.C):
Phase_Portrait.C   -  the main program that generate data to draw phase portraits; a and gamma were varied accordingly 
2.C   -  program for part c that produces data files for poincare section

Data (.dat):
data files for Undamped with the 3 Initial Conditions 
undamped_IC1.dat, undamped_IC2.dat , undamped_IC3.dat  

data files for Damped with the 3 Initial Conditions 
damped_IC1.dat, damped_IC2.dat , damped_IC3.dat 

data file for the Chaotic Case (using the first I.C.: 0.2,0)
chaotic.dat 

data file for the Poincare
pc1.dat, pc2.dat, pc3.dat 

Gnu:
undamped.gnu		chaos.gnu
damped.gnu		pc.gnu

## Results
### Program 1 - hw3.1.C
Purpose: Find a fixed point for a=0.8

Instruction: Run the program and enter any number.

Output: 
```sh
x = ? 15
   0                  15                 -14                 -14
   1                   1           -0.335963           -0.607797
   2            0.392203           -0.088347           -0.322596
   3           0.0696073          -0.0139789          -0.0690401
   4         0.000567144        -0.000113429        -0.000567144
   5         3.11335e-10         -6.2267e-11        -3.11335e-10
   6         5.16988e-26        -1.03398e-26        -5.16988e-26
   7                   0                   0                   0
   8                   0                   0                   0
   9                   0                   0                   0
  10                   0                   0                   0
For the function f(x)=tanh(ax)-x=0, there must be a fixed point at x= 0 when a=0.8 
```
Analysis: After trying different values of x, you can see that there is a fixed point at x=0 for the function f(x) when a=0.8

### Program 1.1 - hw3.2.C
Plot for a=0.8 to verify solutions
<br>
![Plot for a=0.8](a=0.8/plot_0.8.png?raw=true "Title")


### Program 2 - 0.8.stability.C
Purpose: Tells whether the fixed point is stable or not (a=0.8)

Output:
```sh
x = ? 0
  -0
The alpha, or g'(x), is -0
```

Analysis: In the previous program, we found x=0 as a fixed point. 
Thus, using this value, we found the alpha, which is also zero. 
This fixed point (x=0) is stable. 

### Program 3 - 1.2.C

Purpose: Finds fixed point for a=1.2

Output:
```sh
x = ? -5
   0                  -5             4.00001             4.00013
   1            -0.99987            0.166263            0.262294
   2           -0.737576           0.0286154           0.0709793
   3           -0.666597          0.00260691          0.00792231
   4           -0.658675         3.36039e-05         0.000104826
   5            -0.65857         5.90091e-09          1.8414e-08
   6            -0.65857         1.11022e-16         3.33067e-16
   7            -0.65857         1.11022e-16         3.33067e-16
   8            -0.65857        -1.11022e-16        -3.33067e-16
   9            -0.65857         1.11022e-16         3.33067e-16
  10            -0.65857        -1.11022e-16        -3.33067e-16
For the function f(x)=tanh(ax)-x=0, there must be a fixed point at x= -0.65857 when a=1.2 
```

```sh
x = ? 0.2
   0                 0.2           0.0354957           -0.265985
   1          -0.0659852           -0.013032           0.0676959
   2          0.00171068         0.000342133         -0.00171071
   3        -2.88361e-08        -5.76723e-09         2.88361e-08
   4         1.75362e-22         3.50725e-23        -1.75362e-22
   5         4.70198e-38         9.40395e-39        -4.70198e-38
   6                   0                   0                   0
   7                   0                   0                   0
   8                   0                   0                   0
   9                   0                   0                   0
  10                   0                   0                   0
For the function f(x)=tanh(ax)-x=0, there must be a fixed point at x= 0 when a=1.2 
```

```sh
x = ? 5
   0                   5            -4.00001            -4.00013
   1             0.99987           -0.166263           -0.262294
   2            0.737576          -0.0286154          -0.0709793
   3            0.666597         -0.00260691         -0.00792231
   4            0.658675        -3.36039e-05        -0.000104826
   5             0.65857        -5.90091e-09         -1.8414e-08
   6             0.65857        -1.11022e-16        -3.33067e-16
   7             0.65857        -1.11022e-16        -3.33067e-16
   8             0.65857         1.11022e-16         3.33067e-16
   9             0.65857        -1.11022e-16        -3.33067e-16
  10             0.65857         1.11022e-16         3.33067e-16
For the function f(x)=tanh(ax)-x=0, there must be a fixed point at x= 0.65857 when a=1.2 
```

Analysis: After trying different values of x, you can see that there are fixed points at 
x= -0.65857
x= 0
x= 0.65857
for f(x) when a=1.2

### Program 3.1 - 1.2.gnu
Plot for a=1.2 to verify solutions
<br>
![Plot for a=1.2](a=1.2/plot_1.2.png?raw=true "Title")

### Program 4 - 1.2.stability.C

Purpose: Tells whether the fixed point is stable or not (a=1.2)

Output:

x= -0.65857
```sh
x = ? -0.65857
1.1382e-06
The alpha, or g'(x), is 1.1382e-06
```

x = 0
```sh
x = ? 0
  -0
The alpha, or g'(x), is -0
```
x = 0.65857

```sh
x = ? 0.65857
1.1382e-06
The alpha, or g'(x), is 1.1382e-06
```

Analysis: As you can see, the alpha’s for all three fixed points are less than 1.
Therefore, they are all stable. 

## Conclusion:
When $a$ goes through 1, you can observe from the f(x) vs. x graph that the number of intersections between f(x) and the x-axis changes from 1 to 3. This means that the number of fixed points increases from 1 to 3. Thus, this explains why for a=0.8 there is only one fixed point at x=0. But for a=1.2, there are three fixed points. 
It is important to note that the fixed points always lie between x=[0,1]. No matter how big “a” is, the fixed points do not go beyond x=1. 
