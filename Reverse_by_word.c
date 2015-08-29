#include<stdio.h>
void revsen(char[], int);
void revword(char[], int);
int lenght(char[]);
void main() {
	char a[1000];
	int i, j, l;
	printf("enter the sentence\n");
	gets(a);
	l = lenght(a) - 1;
	//printf("%d\n", l);
	revsen(a, l);
	revword(a, l);
	printf("%s\n", a);
}
void revsen(char a[], int n) {
	int i, j;
	char temp;
	for (i = 0;i <= (n / 2);i++) {
		temp = a[n - i];
		a[n - i] = a[i];
		a[i] = temp;
	}
	//printf("%s\n", a);
}
void revword(char a[], int n) {
	int i, j, k, l;
	char temp;
	j = 0;
	for (i = 0;i<=n+1;i++) {
	
		if( (a[i] == ' ')||(a[i]=='\0'))  {
			k = i - 1;
			for (j, k; j < k;j++, k--) {
				temp = a[ j];
				a[ j] = a[k];
				a[k] = temp;
			}
			j = i + 1;
		}
	}
	
}
int lenght(char a[]) {
	int i, s = 0;
	for (i = 0;a[i] != '\0';i++) {
		s++;
	}
	return s;
}