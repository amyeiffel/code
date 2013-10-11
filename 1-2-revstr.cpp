#include<stdio.h>

bool revstr(char * str) {
	char * end=str;
	char tmp;
	if(str) {
		while(*end!='\0') {
			end++;
		}
		end--;
		while(str<end) {
			tmp=*str;
			*str++=*end;
			*end--=tmp;
		}
		return true;
	}
	return false;
}

int main(int argc, char * argv[]) {
	printf(revstr(argv[1])?"yes":"no");
	printf("\n");
	for (int i =0; argv[1][i]!='\0'; i++) {
		printf("%c",argv[1][i]);
	}
	printf("\n");
}
