#include<stdio.h>
tuple(int[], int,int);
void main() {
	int i, j, a[1000], b, c, n, x;
	printf("enter the range \n");
	scanf("%d", &n);
	printf("enter the values \n");
	for (i=0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	printf("enter the tuple \n");
	scanf("%d", &x);
	tuple(a, n, x);
}
tuple(int a[], int n, int x) {
	int i, j;
	for (i = 0;a[i] != '\0';i++)
		for (j = 0;a[j] != '\0';j++) {
			if (i >= j) {
				if ((a[i] + a[j]) == x)
					printf("%d %d\n", a[i], a[j]);
			}
		}
}