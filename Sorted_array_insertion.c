#include<stdio.h>
int sort(int[], int, int);
void main() {
	int a[100], x, i, j, n, p;
	printf("enter the range \n");
	scanf("%d", &n);
	printf("enter the sorted array\n");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);

	}

	printf("enter the number to be inserted\n");
	scanf("%d", &x);
	p=sort(a, x, n);
	if (p == 1) {
		for (i = 0;i <= n;i++) {
			printf("%d\t", a[i]);
		}
	}
	getch();
}
int  sort(int a[], int x, int n) {
	int m = 0, i;

	for (i = 0;i < n;i++) {
		if (x == a[i]) {
			n++;
			for (m = (n - 1);m >(i + 1);m--) {
				a[m] = a[m - 1];
			}
			a[i + 1] = x;
			return 1;
		}
		
	}
	
	if (x < a[0]) {
		for (i = 0;i < n;i++) {
			n++;
			for (m = (n - 1);m > 0;m--) {
				a[m] = a[m - 1];
			}
			a[0] = x;
			return 1;
		}
		
	}

	if (x > a[n - 1]) {
		n++;
		a[n - 1] = x;
		return 1;
	}
	for (i = 0;i < n;i++) {
		if (x > a[i] && x < a[i + 1]) {
			n++;

			for (m = (n - 1);m >(i + 1);m--) {
				a[m] = a[m - 1];
			}
			a[i + 1] = x;
		}
	}
	for (i = 0;i < n;i++) {
		printf("%d\t", a[i]);
	}
}
