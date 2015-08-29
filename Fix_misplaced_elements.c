#include<stdio.h>
void displace(int[], int);
void main() {
	int a[100], i, j, k,n;
	printf("enter the range of  array \n");
	scanf("%d", &n);
	printf("enter the array \n");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);

	}
	displace(a, n);
	getch();
}
void displace(int a[], int n) {
	int i, j, k = 0, temp, x, y;
	for (i = 0;i < n;i++) {
		k++;
		if (a[i] != (a[i+1] - 1)) {
			
			if (a[i] > a[i + 1]) {
				x = i;
			}
			else {
				x = i + 1;
			}
			break;
		}
	}
	for (i = n-1;i >k;i--) {
		if (a[i ] != (a[i-1] + 1)) {
			
			if (a[i] > a[i - 1]) {
				y = i - 1;

			}
			else {
				y = i;
			}
			break;
		}

		
	}
	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
	for (i = 0;i < n;i++) {
		printf("%d\t", a[i]);
	}
}