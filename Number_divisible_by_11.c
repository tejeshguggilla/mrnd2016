#include<stdio.h>
void div(int);
void main() {
	int i, j, x, y, a;
	printf("enter the number \n");
	scanf("%d", a);
	div(a);

}
void div(int a) {
	int i, j, d, s, b[1000], e = 0, o = 0;
	i = 0;
	while (a != 0) {
		j = a % 10;
		a = a / 10;
		if (i % 2 == 0)	e = e + j;
		else
		{
			o = o + j;
		}
	}
}