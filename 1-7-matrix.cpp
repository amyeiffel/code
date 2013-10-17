#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char* argv[]) {
	int m=atoi(argv[1]);
	int n=atoi(argv[2]);
	int A[m][n];
	int i=0;
	int j=0;
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			A[i][j]=rand()%10-5;
			cout<<A[i][j]<<",";
		}
		cout<<endl;
	}
	cout<<"set:"<<endl;
	bool M[m];
	bool N[n];
	for (int x=0;x<m;x++) {
		M[x]=false;
	}
	for (int y=0;y<n;y++) {
		N[y]=false;
	}
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			if (A[i][j]==0) {
				M[i]=true;
				N[j]=true;
				cout<<i<<","<<j<<endl;
			}
		}
	}
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			if (M[i]==true||N[j]==true) {
				A[i][j]=0;
			}
			cout<<A[i][j]<<",";
		}
		cout<<endl;
	}
	return 0;
}



