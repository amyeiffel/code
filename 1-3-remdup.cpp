#include<stdio.h>

bool rem(char str[]) {
	char * p, * q;
	p = str;
	q = str;
	q++;
	char * tmp;
	while (*q!='\0') {
		for(tmp=str;tmp<=p;tmp++) {
			if (*tmp==*q) break;
		}
		if (tmp>p) {
			p++;
			*p = *q;
		}
		q++;
	}
	p++;
	if (*p=='\0') return false;
	*p='\0';
	return true;
}

bool rem2(char str[]){
	if (str[0] == '\0') return false;
	bool hit[256];
	for (int i=0; i<256; i++) {
		hit[i] = false;
	}
	hit[str[0]]=true;
	int tail = 1;
	for (int i=1; str[i]!='\0';i++) {
		if (!hit[str[i]]) {
			str[tail]=str[i];
			tail++;
			hit[str[i]]=true;
		}
	}
	if (str[tail]=='\0') return false;
	str[tail]='\0';
	return true;
}

int main(int argc, char * argv[]) {
	printf(rem2(argv[1])?"yes":"no");
	printf("\n");
	for (int i=0; argv[1][i]!='\0'; i++) {
		printf("%c",argv[1][i]);
	}
	printf("\n");
}

