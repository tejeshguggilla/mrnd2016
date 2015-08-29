#include<stdio.h>
void great(char[], char[]);

void main() {
	char a[100], b[100];

	printf("enter two strings(numbers)\n");
	gets(a);
	gets(b);
	great(a, b);
}
void great(char a[], char b[]) {
	int i, j, s = 0, p = 0, al = 0, bl = 0, z1 = 0, z2 = 0, e = 0;
	

	if (a[0] != '-' && b[0] != '-') {
		for (i = 0;a[i] != '\0';i++) {
			al++;
		}
		for (j = 0;b[j] != '\0';j++) {
			bl++;
		}
		//printf("a=%d  b=%d \n", al, bl);
		i = 0;
		while (a[i] == '0') {
			z1++;
			i++;
		}
		i = 0;
		while (b[i] == '0') {
			z2++;
			i++;
		}
		//printf("z1=%d , z2=%d\n", z1, z2);
		if ((al - z1) == (bl - z2)) {
			for (i = z1, j = z2;z1 < al || z2 < bl;i++, j++)
			{
				if (a[i] == b[j])
					e++;
				if (e == (al - z1)) {
					printf("both the strings are equal\n");
					break;
				}
				else if (a[i] != b[j]) {
					if (a[i] > b[j])
						printf("%s is greater \n", a);
					else
						printf("%s is greater \n", b);
					break;
				}
			}
			
		}
		else if ((al - z1) > (bl - z2))
			printf("%s is greater \n", a);

		else
			printf("%s is greater \n", b);

	}
	else if (a[0] != '-'&&b[0] == '-')	printf("%s is greater \n", a);
	else if (a[0] == '-'&&b[0] != '-')	printf("%s is greater \n", b);
	else if (a[0] == '-'&&b[0] == '-') {
		for (i = 1;a[i] != '\0';i++) {
			al++;
		}
		for (j = 1;b[j] != '\0';j++) {
			bl++;
		}
		//printf("a=%d  b=%d \n", al, bl);
		i = 1;
		while (a[i] == '0') {
			z1++;
			i++;
		}
		i = 1;
		while (b[i] == '0') {
			z2++;
			i++;
		}
		//printf("z1=%d , z2=%d\n", z1, z2);
		if((al - z1) == (bl - z2)){
			for (i = z1+1, j = z2+1;(z1<al) || (z2<bl);i++, j++) {

				if (a[i] == b[j]) 
					e++;
				if (e == (al - z1)) {
					printf("both the strings are equal\n");
					break;
				}
				else if (a[i] != b[j]) {
					if (a[i] < b[j])
						printf("%s is greater \n", a);
					else
						printf("%s is greater \n", b);
					break;
				}
			}
			
		}
		else if ((al - z1) < (bl - z2))
			printf("%s is greater \n", a);

		else

			printf("%s is greater \n", b);
	}

}
