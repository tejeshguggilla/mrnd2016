	

#include<stdio.h>
void pallindrome(char[],int);
void main() {
	char a[1000], b;
	int x=0, y, i, j;
	printf("enter the string \n");
	scanf("%s", a);
	for (i = 0;a[i] != '\0';i++) {
		x++;
	}
	//printf("%d\n", x);
	pallindrome(a,x);
	getch();
}
void pallindrome(char a[],int x) {
	int i, j, count = 0;
	for (i = 0,j=x-1;i<j;i++,j--) {
		
			if (a[i] != a[j]) {
				count = 1;
				break;
			}
		
	}
	if (count == 1) {
		printf("string is a not a  pallindrome \n");

	}
	else
		printf("string is  a pallidrome \n");
}