#include<stdio.h>
void div(int);
void main() {
	int i, j, x, y, a;
	printf("enter the number \n");
	scanf("%d", &a);
	div(a);

}
void div(int a) {
	int i, j, d, c=0, e = 0, o = 0;
	i = 0;
	while (a != 0) {
		j = a % 10;
		c++;
		if (c % 2 == 0)	e = e + j;
		else
		{
			o = o + j;
		}
		a = a / 10;
	}
	if ((e - o) == 11 || (o - e) == 11 || (e - o) == 0 || (o - e) == 0)	printf("divisible by 11 \n");
	else
		printf("not diviible by 11 \n");
}
