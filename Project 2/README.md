# Project 2: Period Doubling Bifurcations - Chaos and the Logistic Map

Period Doubling
As r increases there is a cascade of period doubling bifurcations and the sequence asymptotes to cycles of period 20↦21↦22↦…↦2n↦… cycles.   Our goal is to understand these 2, 4, 8, ... period limits cycles which will characterize a universal route to chaos.

## Description

<p align="center">
    As an alternative for the logistic map, consider the sine-map
</p>

<p align="center">
    $g(x) = r sin({pi}x)$
</p>

<p align="center">
Numerically determine values for the parameter r for which the sine-map iterates to a period-1, a period-2 and a period-4 limit cycle.</p><br>
<p align="center">
Plot the curves y=x, y=g(x) and the graphical representation for the iteration of the sine-map (cob-web diagram), for each of the 3 cases.
</p>

## Getting Started

### Dependencies
Run these commands in terminal to check if you have the dependencies 
```sh
/usr/bin/xcodebuild -version 
which brew
g++ --version
which gnuplot
```
If not, install them
* [XCode Command Line Tools](https://apps.apple.com/us/app/xcode/id497799835?mt=12)
* [Homebrew](https://brew.sh/index.html)
* GNU ```brew install gcc```
* GNUplot ```brew install gnuplot```

### Executing program
Switch to /PHYS4300-Numerical-Methods-and-Scientific-Computation/Project 1

* To compile a C++ code, use:
```sh
g++ <filename.C>
```
* To run the C++ code:
```sh
./a.out
```
* To run .gnu files
```sh
gnuplot
load "<filename.gnu>"
```

## Results
The parameter r for which the sine-map iterates to a period-1, period-2, and a period-4 limit cycle was determined.
g(x)=rsin(pi*x)
### Case 1: Period-1 
File: r0.5.C
#### Purpose: Find x values for r=0.5

#### Output: 
```sh

```
#### Plot - 0.5.gnu

#### Analysis: 

### Case 2: Period-2
File: r0.8.C
#### Purpose: Find x values for r=0.8

#### Output: 
```sh

```
#### Plot - 0.8.gnu

#### Analysis: 

### Case 3: Period-3
File: r0.84.C
#### Purpose: Find x values for r=0.84

#### Output: 
```sh

```
#### Plot - 0.84.gnu

#### Analysis: 

## Conclusion:

