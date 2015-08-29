#include<stdio.h>
void  fibo(int[], int);
void main() {
	int a[100], x,i, j, s;
	printf("enter the range \n");
	scanf("%d", &x);
	fibo(a, x);

}
void fibo(int a[], int x) {
	int i, j, k;
	a[0] = 0;	a[1] = 1;
	for (i = 2;i <= x;i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	if(x<=0){
        printf("enter the valid range \n");
	}
	else{
	for(i=1;i<=x;i++){
        printf("%d\t",a[i]);
	}
	}
}
