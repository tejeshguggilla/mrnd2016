#include<stdio.h>
void main() {
	char a[100];
	int  i = 0, j, k;
	printf("enter the string \n");
	scanf("%s", a);
	printf("enter the kth element \n");
	scanf("%d", &k);

	while (a[i + k] != '\0') {
		i++;
	}

	printf("%c\n", a[i]);

}
