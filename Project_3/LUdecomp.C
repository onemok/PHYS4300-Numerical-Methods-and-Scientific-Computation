//--------------------------------------------------------------------------------
// This program takes a given matrix, and solves the vector x that satisfies
// the equation. 
// This is done by LU decomposition, which also produced the inverse of the matrix 
// and the determinant.
// N defines the dimension of the matrix; for example, mat[N][N] defines a 5x5 matrix
// A: original matrix; V: original vector; I: Inverse matrix; J: A*I (identity matrix)
// I am sorry; I did not figure out how to test the accuracy of my answers
//--------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

const int N = 5;

void Mat(double A[N][N],double V[N]){
A[0][0]=1.0;	A[0][1]=7.0;	A[0][2]=18.0;	A[0][3]=4.0;	A[0][4]=0.0;	V[0]=41.0;
A[1][0]=6.0;	A[1][1]=0.1;	A[1][2]=7.0;	A[1][3]=0.0;	A[1][4]=2.0;	V[1]=-9.0;	
A[2][0]=0.0;	A[2][1]=-5.0;	A[2][2]=-6.0;	A[2][3]=4.0;	A[2][4]=3.0;	V[2]=8.0;	
A[3][0]=19.3;	A[3][1]=3.0;	A[3][2]=-0.2;	A[3][3]=-0.4;	A[3][4]=-5.0;	V[3]=3.7;	
A[4][0]=7.3;	A[4][1]=-2.0;	A[4][2]=17.2;	A[4][3]=5.4;	A[4][4]=0.2;	V[4]=-7.7;
}	

// print the matrix
void PrintMat(double A[N][N]){
	int i,j;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cout << setw(10) << A[i][j] << setw (13);
		}
		cout << endl;
	}
}

// print the original vector
void PrintOV(double V[N]) {
	int i;
	
	for (i = 0; i < N; i++) {
		cout << setw(10) << V[i] << endl;
	}
}

void PrintVec(double A[N][N], double V[N]) {
	int i,j;
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cout << setw(10) << A[i][j] << setw (10);
		}
		cout << setw(17) << V[i] << endl;
	}
}


void LUdecom(double A[N][N]) {
	int i, j, k;

	for (j = 0; j < N; j++) {
		for (i = 0; i < j+1; i++) {
			if (i > 0) {
				for (k = 0; k < i; k++) {
					A[i][j]-=A[i][k]*A[k][j];
				}
			}
		}
		if (j < N - 1) {
			for (i = j + 1; i < N; i++) {
				if (j > 0) {
					for (k = 0; k < j; k++) {
						A[i][j]-=A[i][k]*A[k][j];
					}
				}
				A[i][j]=A[i][j]/A[j][j];
			}
		}
	}
}


void forwardsub(double L[N][N], double V[N], double y[N]) {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if(i==j){L[i][j]=1;}
			if(i<j){L[i][j]=0;}
		}
	}

	y[0] = V[0];
	for (int k = 0; k < N; k++) {
		y[k] = V[k];
		for (int j = 0; j < k; j++) {
			y[k]=y[k]-L[k][j]*y[j];
		}
	}
	}

void backsub(double U[N][N], double V[N], double x[N]) {
	int i,j,k;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if(i>j){U[i][j]=0;}
		}
	}
	

	if(U[N-1][N-1]==0){cout << "ERROR" << endl;
		}

	x[N-1] = V[N-1] / U[N-1][N-1];
	
	for (k = N-2; k >= 0; k--) {
		x[k] = V[k];
		for (j = k + 1; j<N; j++) {
			x[k]=x[k]-U[k][j]*x[j];
		}
		x[k] = x[k]/U[k][k];
		}
	}

void LtimesU(double L[N][N], double U[N][N], double LU[N][N]) {
	int i,j,k;
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++){
				LU[i][j]+=L[i][k]*U[k][j];
							}
						}
					}
}

void inverse(double A[N][N], double U[N][N], double x[N], double y[N], double V[N], double I[N][N]) {

	int i,j,k,h;		
	Mat(A,V);

	for (i = 0; i < N; i++) {
		
		for (j = 0; j < N; j++) {
			if (i == j) {
				V[j] = 1;
			}
			else {
				V[j] = 0;
			}
		}	
		cout << setw(10) << "V = ";
		for(h=0;h<N;h++){cout << setw(10) << V[h];}
		cout << endl;
		
		LUdecom(A);
		forwardsub(A,V,y);
		Mat(U,V);
		LUdecom(U);
		backsub(U,y,x);
		
		for (j = 0; j < N; j++) {
			I[j][i] = x[j];
		}
		PrintMat(I);
		cout << endl;
}}

void inverseTest(double A[N][N], double I[N][N], double J[N][N], double V[N]) {
	
	int i,j,k;
	Mat(A,V);
	
	for (k = 0; k < N; k++) { 
		
			for (i = 0; i < N; i++) { 
				for (j= 0; j < N; j++) { 
				J[i][k]+= A[i][j]*I[j][k]; } } }

	for (i = 0; i < N; i++) {
		for (j= 0; j < N; j++) { 
			if(J[i][j]<1e-10){J[i][j]=0;}}}

	PrintMat(J);
	cout << endl;
		}

void det(double x[N], double y[N], double U[N][N], double V[N]) {
	int i;
	double det = 1;

	Mat(U,V);
	LUdecom(U);
	backsub(U,y,x);
	
	
	for (i = 0; i < N; i++) {
		det *= U[i][i];
	}
		cout << det << endl;
}

int main() {

	double A[N][N], V[N], LU[N][N], U[N][N], L[N][N], x[N], y[N], I[N][N], J[N][N];

	double M;

	int i,j,k;
	
	cout << "Original Matrix" << endl;
	Mat(A,V);
	PrintMat(A);
	
	cout << "Original Vetor" << endl;
	PrintOV(V);

	cout << "Original System in Whole" << endl;
	Mat(A,V);
	PrintVec(A,V);
	
	cout << "Matrix after LU Decomposition" << endl;
	LUdecom(A);
	PrintMat(A);
	
	cout << "L - Lower Trianguler Matrix" << endl;
	forwardsub(A,V,y);
	PrintVec(A,y);
	
	cout << "U - Upper Triangular Matrix" << endl;
	Mat(U,V);
	LUdecom(U);
	backsub(U,y,x);
	PrintVec(U,x);

	cout << "L multiplied by U" << endl;
	LtimesU(A,U,LU);
	PrintMat(LU);

	cout << "Inverse Calculation" << endl;
	inverse(A,U,V,x,y,I);

	cout << "As you can see, A * A^-1 = 1" << endl;
	inverseTest(A,I,J,V);

	cout << "The determinant of A is" << endl;
	det(x,y,U,V);	
}
