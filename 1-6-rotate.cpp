#include<stdlib.h>
#include<iostream>

using namespace std;


int main(int argc, char * argv[]) {
	int dim=atoi(argv[1]);
	cout<<"A matrix of dimension "<<dim<<endl;
	int A[dim][dim];
	int init=0;
	for (int i=0;i<dim;i++) {
		for (int j=0;j<dim;j++) {
			A[i][j]=init;
			init++;
			cout<<A[i][j]<<",";
		}
		cout<<endl;
	}
	cout<<"Rotate to:"<<endl;
	cout<<"First pass:"<<endl;
	for(int i=0;i<dim;i++) {
		for(int j=0;j<dim/2;j++) {
			A[i][j]^=A[i][dim-1-j];
			A[i][dim-1-j]^=A[i][j];
			A[i][j]^=A[i][dim-1-j];
		}
	}
	for (int i=0;i<dim;i++) {
		for (int j=0;j<dim;j++) {
			cout<<A[i][j]<<",";
		}
		cout<<endl;
	}
	cout<<"Second pass:"<<endl;
	for(int i=0;i<dim;i++) {
		for(int j=0;j<dim-1-i;j++) {
			A[i][j]^=A[dim-1-j][dim-1-i];
			A[dim-1-j][dim-1-i]^=A[i][j];
			A[i][j]^=A[dim-1-j][dim-1-i];
		}
	}
	for (int i=0;i<dim;i++) {
		for (int j=0;j<dim;j++) {
			cout<<A[i][j]<<",";
		}
		cout<<endl;
	}
	return 0;
}

	
