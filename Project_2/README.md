# Project 2: Period Doubling Bifurcations - Chaos and the Logistic Map

Period Doubling
As r increases there is a cascade of period doubling bifurcations and the sequence asymptotes to cycles of period $2^0↦2^1↦2^2↦…↦2^n↦…$ cycles.   Our goal is to understand these 2, 4, 8, ... period limits cycles which will characterize a universal route to chaos.

## Description

<p align="center">
    As an alternative for the logistic map, consider the sine-map
</p>

<p align="center">
    $g(x) = r*sin(πx)$
</p>

<p align="center">
Numerically determine values for the parameter r for which the sine-map iterates to a period-1, a period-2 and a period-4 limit cycle.</p><br>
<p align="center">
Plot the curves $y=x$, $y=g(x)$ and the graphical representation for the iteration of the sine-map (cob-web diagram), for each of the 3 cases.
</p>

## Results
The parameter r for which the sine-map iterates to a period-1, period-2, and a period-4 limit cycle was determined.
$g(x)=rsin(πx)$

### Case 1: Period-1 
- File: r0.5.C
- Purpose: Find a period-1 cycle (r = 0.5)
#### Plot - 0.5.gnu
![r=0.5 plot](r0.5/r0.5.png?raw=true "Title")
#### Analysis
The plot shows that the trajectory converges to the solution (x = 0.5).

### Case 2: Period-2
- File: r0.75.C
- Purpose: Find a period-2 cycle (r = 0.75)
#### Plot - 0.75.gnu
![r=0.75 plot](r0.75/r0.75.png?raw=true "Title")
#### Analysis: 
The plot shows that the first period doubling bifurcations occurs around r=0.75.

### Case 3: Period-3
- File: r0.84.C
- Purpose: Find a period-4 cycle (r = 0.84)
#### Plot - 0.84.gnu
![r=0.84 plot](r0.84/r0.84.png?raw=true "Title")
#### Analysis: 
The plot shows that the second period doubling bifurcations occurs around r=0.84.
