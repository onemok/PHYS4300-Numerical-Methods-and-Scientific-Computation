//-------------------------------------------------------------------------
// This program is to take the fixed points and find g'(x)=alpha to determine
// its stability.
// g'(x)= -2(a^2)tanh(ax)(tanh(ax)-x)sech^2(ax) / (a*sech^2(ax)-1)^2
// If alpha is bigger than 1, then it is an unstable point. 
// If alpha issmaller than 1, then it is a stable point. 
using namespace std;
#include <iostream>
#include <iomanip>
#include <math.h>

const double a=1.2 ;

double h(double x) {
  return (-2*a*a*tanh(a*x)*(tanh(a*x)-x)*(1/cosh(a*x))*(1/cosh(a*x))/(a*(1/cosh(a*x))*(1/cosh(a*x))-1)/(a*(1/cosh(a*x))*(1/cosh(a*x))-1));
}

int main(){
  double x;
  int n;
  cout << "x = ? ";
  cin >> x;
    
  cout << setw(4) << h(x) <<endl;
  x=h(x);
  
cout << "The alpha, or g'(x), is " << x << "\n";

}