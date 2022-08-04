# Project 3: LU decomposition

A program was made in c++ in order to take the given matrix and solve for a vector ‘x’ that satisfies the given equation. Concepts including LU decomposition were used which produced lower and upper triangular matrices. This process led to finding the inverse of the original matrix, and ultimately the determinant. 

## Description

<p align="center">
    Solve for the vector x that satisfies
</p>

<p align="center">
    Calculate the inverse of the matrix above and test the accuracy of your solution.
</p>

<p align="center">
Calculate the deterninant of the matrix above.
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
$g(x)=rsin(πx)$

### Case 1: Period-1 
- File: r0.5.C
- Purpose: Find a period-1 cycle (r = 0.5)
#### Plot - 0.5.gnu
![r=0.5 plot](r0.5.png?raw=true "Title")
#### Analysis
The plot shows that the trajectory converges to the solution (x = 0.5).

### Case 2: Period-2
- File: r0.75.C
- Purpose: Find a period-2 cycle (r = 0.75)
#### Plot - 0.75.gnu
![r=0.75 plot](r0.75.png?raw=true "Title")
#### Analysis: 
The plot shows that the first period doubling bifurcations occurs around r=0.75.

### Case 3: Period-3
- File: r0.84.C
- Purpose: Find a period-4 cycle (r = 0.84)
#### Plot - 0.84.gnu
![r=0.84 plot](r0.84.png?raw=true "Title")
#### Analysis: 
The plot shows that the second period doubling bifurcations occurs around r=0.84.
