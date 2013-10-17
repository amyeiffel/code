#include<stdio.h>

bool isSubstring(char str1[], char str2[]) {
	int i=0;
	int j=0;
	int s=0;
	while (str1[i]!='\0'&&str2[j]!='\0') {
		if (str1[i]==str2[j]) {
			i++;
			j++;
			printf("%c\n",str1[i]);
		}
		else {
			s++;
			i=s;
			j=0;
			printf("reset\n");
		}
		if (str2[j]=='\0') return true;
	}
	return false;
}

int main(int argc, char * argv[]) {
	char str[100];
	printf("%s\n",argv[1]);
	printf("%s\n",argv[2]);
	int count=2;
	int p=0;
	int i=0;
	while (argv[2][i]!='\0') {
		if (count ==0) break;
		str[p]=argv[2][i];
		p++;
		i++;
		if (argv[2][i]=='\0') {
			i=0;
			count--;
		}
	}
	str[p]='\0';
	printf("%s\n",str);
	printf(isSubstring(str,argv[1])?"yes\n":"no\n");
	return 0;
}
