#include<stdio.h>

bool permut(char str1[], char str2[]) {
	int l1,l2;
	l1=0;
	l2=0;
	while(str1[l1]!='\0') {l1++;}
	while(str2[l2]!='\0') {l2++;}
	if (l1!=l2) return false;
	int letters[256] = {0};
	for (int i=0; i<l1; i++) {
		letters[str1[i]]++;
	}
	for (int j=0; j<l1; j++) {
		if(--letters[str2[j]]<0)
			return false;
	}
	return true;
}

int main(int argc, char * argv[]) {
	printf(permut(argv[1],argv[2])?"yes":"no");
	printf("\n");
}
