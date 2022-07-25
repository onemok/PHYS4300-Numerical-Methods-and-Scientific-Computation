just tanh
//-------------------------------------------------------------------------
// Newton-Raphson Iterative solution to f(x)=0; a=0.8
// f(x)=tanh(ax)−x = 0
// g(x)=tanh(ax)
// a = 0.8
// An initial x value, which was used to find a fixed point for f(x)
// Note: sech did not work, so it was converted to cosh 
//-------------------------------------------------------------------------
using namespace std;
#include <iostream>
#include <iomanip>
#include <math.h>

const double a=0.8 ;

double f(double x) {
  return tanh(a*x)-x;
}

double g(double x) {
  return (tanh(a*x));
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

cout << "For the function f(x)=tanh(ax)-x=0, there must be a fixed point at x= " << x <<  " when a=0.8 \n";

}
