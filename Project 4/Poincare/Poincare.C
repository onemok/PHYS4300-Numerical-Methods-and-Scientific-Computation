//--------------------------------------------------------------
// Onemo Kang
// Poincare Section
// Chaotic 
// gamma = 0.5; a_0 = 1.2
//
// Initial condition: 
// x=0.2; v=0
//--------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>
using namespace std;

// identical to previous program
const double a0=1.2;
const double gam=0.5;
                 
const double tfin=10000.0;                 
const double O = 2.00/3.00;

const double w=1.0;
const double PI=acos(-1.0);
const double m=1.00;

//! added for poincare
const double TD=2.00*PI/O;
const int    nn=100;
const double dt=TD/nn;


double f(double x, double v, double t) { 

return -w*w*sin(x)-gam*v+a0*sin(O*t);

}

int main(){
       
double told, tolder, xold, xolder, vold, volder, Eold, Eolder, tnew, xnew, vnew, Enew, q1x, q1v, q2x, q2v;


int nt;

// stores output as data file
ofstream prt1("pc1.dat");
	
ofstream prt2("pc2.dat");
	
ofstream prt3("pc3.dat");


told=0; 
xold=0.2; 
vold=0;


q1x=vold*dt;
q1v=f(xold,vold,told)*dt;
q2x=(vold+q1v/2.0)*dt;
q2v=f(xold+q1x/2.0,vold+q1v/2.0,told+dt/2.0)*dt;

cout << setw(5) << "told" << setw(20) << "xold" << setw(20) << "vold" << endl;

xnew=xold+q2x;
vnew=vold+q2v;
tnew=told+dt;

while(tnew<tfin){

tolder = told;
xolder = xold;
volder = vold;

told = tnew; 
xold = xnew;

xnew = (2.0*xold - xolder*(1.0-gam*dt/2.0)-(w*w*sin(xold)-a0*sin(O*told))*dt*dt
	)/(1.0+gam*dt/2.0);


vold=(xnew-xolder)/dt/2.0;

tnew=told+dt;

nt++;

if (told<500.0){prt1  << setw(20) << tolder << setw(20) << xolder << setw(20) << volder << endl;}

if ((nt-2)%nn == 0){prt2  << setw(20) << xolder << setw(20) << volder << endl;}

if ((nt-2)%nn == nn/2){prt3  << setw(20) << xolder << setw(20) << volder << endl;}

		}
}
