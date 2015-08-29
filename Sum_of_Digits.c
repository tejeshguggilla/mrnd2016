#include<stdio.h>
int sum(int);
void main() {
	int x,a;
	printf("enter the number \n");
	scanf("%d", &a);
	x=sum(a);
	printf("sum=%d", x);
	getch();
}
int sum(int a) {
	int i, j, s = 0;

	while (a != 0) {
		i = a % 10;
		s = s + i;
		a = a / 10;
	}
	return s;
}
