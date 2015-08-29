#include<stdio.h>
void rotater(int[], int, int);
void rotatel(int[], int, int);
void main() {
	int a[100], x, s, n, p, i;
	printf("enter the range of the array \n");
	scanf("%d", &n);
	printf("enter the array\n");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	printf("enter the number of times the array should rotate\n");
	scanf("%d", &x);
	n = n % 10;
	if (x >= 0)
		rotater(a, x, n);
	else
		rotatel(a, x, n);


}
void rotater(int a[], int x, int n) {
	int i, j, temp;
	if (x == 0) {
		for (i = 0;i < n;i++) {
			printf("%d\t", a[i]);
		}
	}
	else {
		for (i = 1;i <= x;i++) {
				temp = a[n - 1];

			for (j = n-1;j >=0;j--) {
				a[j] = a[j - 1];

			}
				a[0] = temp;
		}
		for (i = 0;i < n;i++) {
			printf("%d\t", a[i]);
		}

	}
}
void rotatel(int a[], int x, int n) {
	int i, j, temp;
	x = -x;


	for (i = 1;i <= x;i++) {
		temp = a[0];
		for (j = 0;j <n;j++) {

			a[j] = a[j + 1];

		}
		a[n - 1] = temp;
	}
	for (i = 0;i < n;i++) {
		printf("%d\t", a[i]);
	}


}