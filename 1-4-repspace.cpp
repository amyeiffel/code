#include<stdio.h>

int repspace(char str[]) {
	int len = 0;
	int space = 0;
	while (str[len]!='\0') {
		len++;
		if (str[len]==' ') {
			space++;
		}
	}
	int newlen = len + space*2;
	while (newlen>=0) {
		if(str[len]==' ') {
			str[newlen--]='0';
			str[newlen--]='2';
			str[newlen]='%';
		}else{ 
			str[newlen]=str[len];
		}
		len--;
		newlen--;
	}
	return space;
}

int main(int argc, char * argv[]) {
	printf("%d\n",repspace(argv[1]));
	printf("%s\n",argv[1]);
}
