#include<stdio.h>
common(char[], char[]);
void main() {
	char a[100], b[100];
	int i, j;
	printf("enter two strings \n");
	scanf("%s%s", a, b);
	common(a, b);
	//printf("%d", a[5] - 97);

}
common(char a[], char b[]) {
	int x[26], i, j, k, z;
	for (i = 0;i < 26;i++) {
		x[i] = 0;
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
		if (x[z] == 2 ) {}
		else if (x[z] == 1) {
			x[z] = 2;
		}
	}
	for (j = 0;j <26;j++) {
		if (x[j] == 2)
			printf("%c \t", j+97 );
	}
}