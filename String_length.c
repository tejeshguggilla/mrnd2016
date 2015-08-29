#include<stdio.h>
int len(char[]);
void main() {
	char *a[100];
	int i, l;
	printf("enter the string \n");
	//scanf("%s", a);
	gets(a);
	l = len(&a);
	printf("lenght of the sring is %d", l);
	getch();
}
int len(char *a) {
	int i, j=0;

	for (i = 0;a[i]!='\0';i++) {
		j++;
	}
	return j;
}
