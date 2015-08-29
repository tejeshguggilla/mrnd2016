#include<stdio.h>
common(char [], char []);
void main() {
	char a[100], b[100];
	int i, j;
	printf("enter two strings \n");
	scanf("%s%s", a, b);
	common(a, b);
}
common(char a[], char b[]) {
	int i, j, z,k, flag = 0,l=0;
	char c[100],f,g;
	for (i = 0;a[i] != '\0';i++) {
		for (j = 0;b[j] != '\0';j++) {
			if (a[i] == b[j]) {
				for (k = 0;c[k] != '\0';k++) {
					if (c[k] == a[i]) {
						flag = 1;
						break;
						
					}
					else {
						flag = 0;
						continue;
						
					}
					
				}	
				if (flag == 0) {
					
					c[l] = a[i];
					l++;
					printf("%c\n", a[i]);
				}
				else
					continue;
			}
		}
	}
	
	
	
}