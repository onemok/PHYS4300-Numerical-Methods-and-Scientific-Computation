# Project 4: Ordinary Differential Equations (ODEs)

Methods: Euler Method, Runge-Kutta Method, Verlet Method
Applications: Simple Harmonic Oscillatorm (SHO), Non-Linear Pendulum, Damped, Driven Non-Linear Pendulum

Two programs were made using the Verlet method to show the time evolution of the damped-driven nonlinear and the undriven-undamped nonlinear oscillators. Their phase protratis were then plotted.

Furthermore, the Poincare Section for the chaotic section was plotted. 

## Description

<p align="center">
    Reproduce the phase portrait in the damped-driven nonlinear section that contrast that model with the undriven-undamped nonlinear oscillator.
<br><br>
    Produce a plot with two panels.   In the first panel fix $γ=0.5$, $a_0=0.5$ and draw three orbits with initial conditions $(x_0,v_0)=(0.2,0)$ then $(0.2,2)$ and finally $(0,0.25)$.   In the second panel fix $γ=0, a0=0$ and draw three orbits with the same initial conditions.
<br><br>
  Next consider the chaotic case $γ=0.5, a0=1.2$. Produce one plot of $(x,v)$ points.
<br><br>
  Recall that the dynamics is really 3D.   Next plot a Poincare Section of the data for the chaotic case.
</p>

## Files
### Programs (.C):
- Phase_Portrait.C -  main program that generate data to draw phase portraits; a and gamma were varied accordingly 
- 2.C   -  program for part c that produces data files for poincare section

### Data (.dat):
- Undamped with the 3 Initial Conditions 
    - undamped_IC1.dat 
    - undamped_IC2.dat
    - undamped_IC3.dat  

- Damped with the 3 Initial Conditions 
    - damped_IC1.dat
    - damped_IC2.dat
    - damped_IC3.dat 

- Chaotic Case (using the first I.C.: 0.2,0)
    - chaotic.dat 

- Poincare
    - pc1.dat
    - pc2.dat
    - pc3.dat 

### Gnu (.gnu):
- undamped.gnu		
- chaos.gnu
- damped.gnu		
- pc.gnu

## Results
### Phase Portraits
Figure 1.1: Undriven- Undamped Phase Portrait <br>
![Plot for Undriven-Undamped](Phase_Portraits/Undamped/undamped_plot.png?raw=true "Title")

Figure 1.2: Damped-Driven Phase Portrait <br>
![Plot for Damped-Driven](Phase_Portraits/Damped/damped_plot.png?raw=true "Title")

Figure 1.3: Chaotic Case <br>
![Plot for Chaos](Phase_Portraits/Chaotic/chaos.png?raw=true "Title")

### Poincare Section 
Figure 2: Chaotic Case (initial condition = 0.2, 0)
![Plot for Poincare](Poincare/pc.png?raw=true "Title")

