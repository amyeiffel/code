#include<stdio.h>

bool uniqstr_slow(char str[]) {
	for (int i = 0; str[i]!='\0'; i++) {
		for (int j = i+1; str[j]!='\0'; j++) {
			if (str[i]==str[j]) {
				return false;
			}
		}
	}
	return true;
}

bool uniqstr_count(char str[]) {
}

int main(int argc, char * argv[]) {
	printf(uniqstr_slow(argv[1])?"yes":"no");
}
