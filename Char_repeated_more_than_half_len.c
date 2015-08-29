#include<stdio.h>
char repeat(char[]);
void main() {
	char a[1000], b;
	int i, j, x;
	printf("enter the string \n");
	scanf("%s", a);
	b = repeat(a);
	printf("repeated = %c \n", b);
}
char repeat(char a[]) {
	int i, j, c = 0, n = 0, k, z[3], m, max;
	char x, y;
	for (i = 0;a[i] != '\0';i++)
		n++;
	for (i = 0;a[i] != '\0';i++) {	
		x = a[i];
		for (j = 0;a[j] != '\0';j++) {		
			if (x == a[j]) 
				c++;	
		}
		if (c > (n / 2))	return x; break;
	}
	printf("no character to be display \n");
}