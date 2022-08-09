//--------------------------------------------------------------
// Onemo Kang
// Phase Portraits
//! The data are already saved in .dat files (.dat) for you 
//! `cout` will console log the output
//! If you wish to save it to a new data file, replace `cout` with `pp` in line 81 and uncomment line 45
//--------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
using namespace std;

/*
Undriven-Undamped Nonlinear Oscillator
    gam=0; a0=0
Driven-Damped Nonlinear Oscillator
    gam=0.5; a0=0.5
Chaotic 
    gam=0.5; a0=1.2

change the below variables accordingly for undamped/damped/chaos 
*/
const double a0=0.5;
const double gam=0.5;

//time intervals
const double dt =0.05;                  
const double tfin=50.0;         //10000 for chaos   
const double O = 2.00/3.00;

const double w=1.0;
const double PI=acos(-1.0);
const double m=1.00;

double f(double x, double v, double t) { 
	return -w*w*sin(x)-gam*v+a0*sin(O*t);;
}

int main(){

    double told, tolder, xold, xolder, vold, volder, Eold, Eolder, tnew, xnew, vnew, Enew, q1x, q1v, q2x, q2v;

    ofstream pp("damped_IC2.dat");

    // alternate these values to get all three initial conditions
    // xold=0.2; vold=0
    // xold=0.2; vold=2
    // xold=0; vold=0.25
    told=0; 
    xold=0.2; 
    vold=2;           

    q1x=vold*dt;
    q1v=f(xold,vold,told)*dt;
    q2x=(vold+q1v/2)*dt;
    q2v=f(xold+q1x/2,vold+q1v/2,told+dt/2)*dt;

    xnew=xold+q2x;
    vnew=vold+q2v;
    tnew=told+dt;

    cout << setw(5) << "told" << setw(20) << "xold" << setw(20) << "vold" << endl;

    while(tnew<tfin){
        tolder = told; 
        xolder = xold;
        volder = vold;

        told = tnew; 
        xold = xnew; 
        vold = vnew;

        xnew = (2*xold - xolder*(1-gam*dt/2) - (w*w*sin(xold)-a0*sin(O*told))*dt*dt)/(1+gam*dt/2);

        vold=(xnew-xolder)/dt/2;

        tnew=told+dt;

        pp << setw(5) << told << setw(20) << xold << setw(20) << vold << endl;
    }
}

