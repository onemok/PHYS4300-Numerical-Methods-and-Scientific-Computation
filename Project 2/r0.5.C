//------------------------------------------------------------
//g(x)=rsin(pi*x)   for r=0.5
//------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const double r=0.5;

double g(double x) {
  return (r*sin(x*3.14159265));
}

int main(){
  double x;
  x=0.9;
  int n;
  
    cout << setw(4) << x << setw(20) << 0.000 << endl;
  
  for(n=0;n<20;n++) {
    cout << setw(4) << x << setw(20) << g(x) << endl;
    x=g(x);
    
    cout << setw(4) << x << setw(20) << x << endl;}
  }