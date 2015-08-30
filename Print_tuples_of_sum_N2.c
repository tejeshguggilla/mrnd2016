#include<stdio.h>
tuple(int[], int, int);
void main() {
	int i, j, a[1000], b, c, n, x;
	printf("enter the range \n");
	scanf("%d", &n);
	printf("enter the values \n");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	printf("enter the tuple \n");
	scanf("%d", &x);
	tuple(a, n, x);
}
tuple(int a[], int n, int x) {
	int i, j, s[1000], c = 0;
	for (i = 0;i <= x;i++) {
		s[i] = 0;
	}
	for (i = 0;i < n;i++)
	{
		if (a[i] <= x) {
			if (s[a[i]] == 0)
				s[a[i]] = 1;
		}
	}

	for (i = 0;i <= x;i++)
		for (j = 0;j <= x;j++) {
			if (s[j] == 1 && s[i] == 1 ) {
				if (i >= j) {
					if ((i + j) == x)
						printf("%d %d\n", i, j);
					c++;
				}
			}
		}
	if (c == 0)	printf("no tuples found \n");
}
