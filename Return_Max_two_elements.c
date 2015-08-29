#include<stdio.h>
max(int[], int);
void main() {
	int a[1000], b[2], x, n, i;
	printf("enter the range \n");
	scanf("%d", &n);
	printf("enter the values\n ");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	max(a, n,b);
	for (i = 0;i < 2;i++) {
		printf("%d\t", b[i]);
	}
}
max(int a[], int n,int b[]) {
	int i, j, k, f = a[0], s = a[1];
	
	for (i = 0;i < n;i++) {
		if (a[i] > f) {
			s = f;
			f = a[i];
			b[0] = f, b[1] = s;
		}
		else if (a[i] >= s && f != a[i]) {
			s = a[i];
			b[1] = s;
		}
	}

}