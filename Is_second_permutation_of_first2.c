#include<stdio.h>
permu(char[], char[]);
void main() {
	char a[100], b[100];
	int i, j;
	printf("enter two strings \n");
	scanf("%s%s", a, b);
	permu(a, b);
	

}
permu(char a[], char b[]) {
	int x[26], i, j, k, z, al=0, bl=0, count = 0;
	for (i = 0;i < 26;i++) {
		x[i] = 0;
	}
	for (k = 0;a[k] != '\0';k++) {
		al++;
	}
	for (k = 0;b[k] != '\0';k++) {
		bl++;
	}
	for (i = 0;a[i] != '\0';i++) {
		if (a[i] >= 97) {
			z = a[i] - 97;
		}
		else if (a[i] < 97) {
			z = a[i] - 65;
		}
		x[z] = 1;
	}
	for (i = 0;b[i] != '\0';i++) {
		if (b[i] >= 97) {
			z = b[i] - 97;
		}
		else if (b[i] < 97) {
			z = b[i] - 65;
		}
		if (x[z] == 2) { count++; }
		else if (x[z] == 1) {
			x[z] = 2;
		}
	}
	for (j = 0;j <26;j++) {
		if (x[j] == 2)
			count++;
	}
	if (count == al && count ==bl)	printf("TRUE \n");
	else	printf("false \n");
}