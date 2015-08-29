#include<stdio.h>
permu(char[], char[]);
void main() {
	char a[1000], b[1000];
	int i, j, x;
	printf("enter the two string \n");
	scanf("%s%s", a,b);
	permu(a, b);
}
permu(char a[], char b[]) {
	int i, j, c = 0, l = 0, k,bl=0;
	for (k = 0;a[k] != '\0';k++) {
		l++;
	}
	for (k = 0;b[k] != '\0';k++) {
		bl++;
	}
	for (i = 0;a[i] != '\0';i++) {
		for (j = 0;b[j] != '\0';j++) {
			if (a[i] == b[j]) {
				c++;
				break;
			}
		}
		
	}
	if ((c == l) && (c == bl))
		printf("TRUE\n");
	else
		printf("FALSE\n");
}
