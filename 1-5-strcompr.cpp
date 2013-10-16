#include<stdio.h>

bool compress(char str[]) {
	int len = 0;
	int newlen = 0;
	while (str[len]!='\0') {
		len++;
		if(str[len]==str[len-1]) continue;
		else newlen +=2;
	}
	if (newlen>=len) return false;
	int p,q,newlentemp ;
	p=len-2;
	q=len-1;
	newlentemp=newlen;
	int tempcount=1;
	while (q>=0&&newlentemp>0) {
		if (str[p]==str[q]) {
			tempcount++;
		}
		else {
			len--;
			str[len]=tempcount+'0';
			len--;;
			str[len]=str[p+1];
			newlentemp-=2;
			q=p;
			tempcount=1;
		}
		p--;
	}
	for (int i=0; i<=newlen; i++ ) {
		str[i]=str[len];
		len++;
	}
	return true;
}

int main(int argc, char *argv[]) {
	printf(compress(argv[1])?"compressed\n":"not compressed\n");
	printf("%s\n",argv[1]);
}
