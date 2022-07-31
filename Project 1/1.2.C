
//-------------------------------------------------------------------------
// Newton-Raphson Iterative solution to f(x)=0; a=1.2
// f(x)=tanh(ax)−x = 0
// g(x)=x-f(x)/f'(x)
// f'(x)=-1 + a sech^2(ax)
// Therefore, g(x)=x-[tanh(ax)−x]/[-1+a*sech^2(ax)]
// a = 1.2
// An initial x value, which was used to find a fixed point for f(x)
// Note: sech did not work, so it was converted to cosh 
//-------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>
using namespace std;

const double a=1.2 ;

double f(double x) {
  return tanh(a*x)-x;
}

// Newton-Raphson method
double g(double x) {
  return (x-(tanh(a*x)-x)/(-1 + a*(1/cosh(a*x))*(1/cosh(a*x))));
}

int main(){
  double x;
  int n;
  cout << "x = ? ";
  cin >> x;
  for(n=0;n<11;n++) {
    cout << setw(4) << n << setw(20) << x << setw(20) << f(x) << setw(20) << g(x)-x <<endl;
    x=g(x);
  }

  std::ofstream file("1.2.dat");

cout << "For the function f(x)=tanh(ax)-x=0, there must be a fixed point at x= " << x <<  " when a=1.2 \n";

}


