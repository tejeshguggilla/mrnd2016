#include<stdio.h>
void date(int d);
void month(int m);
void year(int y);
void main()
{
	int d, m, y;
	printf("enter the date/month/year\n");
	scanf("%d", &d);
	scanf("%d", &m);
	scanf("%d", &y);
	
	if (d>0 && d <= 31 && m <= 12)
	{
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			if (d > 30)
				printf("invalide date ");
			
		}
		if (m == 2)
		{
			if (d == 29 && y % 4 == 0)
			{
				printf("Leap year \n");
			}
			else if (d > 28)
				printf("feb has only 28 days");
		}

		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			if (d > 31)
				printf("invalid date or month");
		}
	}
	else
	{
		printf("invalid date or month");
	}

	date(d);
	month(m);
	year(y);
}


void date(int d)
{
	int x,y;
	char d1[11][11] = { " ", "first ", "second ", "third ", "fourth ", "fifth	 ", "Sixth ", "Seventh ", "Eighth ", "Ninght ","tenth" };
	char d2[10][15] = {" ", "Eleventh ", "Twelveth ", "Thirteenth ", "Fourteenth ", "Fifteenth ", "Sixteenth ", "Seventeenth ","eighteenth", "Nineteenth " };
	char d3[6][9] = { "tenth", "Twenty ","thirty"};
	if (d <=9 )
	{
		printf("%s\t", d1[d]);
	}
	if (d >= 11 && d <= 19)
	{
		printf("%s\t", d2[d % 10]);
	}
	if (d % 10 == 0)
	{
		printf("%s\t", d3[(d / 10) - 1]);
	}
	if (d>20)
	{
		x = d / 10;
		y = d % 10;
		printf("%s", d3[x - 1]);
		printf("%s", d1[y]);
	}

}

void month(int m)
{
	char m1[][12] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
	printf("%s", m1[m - 1]);
}

void year(int y)
{
	int ya1, ya2, ya3, ya4;
	char y1[][10] = { " ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine " };
	char y2[][9] = { "","Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen", "Eighteen ", "Nineteen " };
	char y3[][9] = { "Ten ", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety " };

	if (y > 999 & y < 9999)
	{
		ya4 = y / 1000;
		y = y % 1000;
		printf("%s Thousand", y1[ya4]);
	}

	if (y>99 && y < 1000)
	{
		ya3 = y / 100;
		ya2 = y % 100 / 10;
		ya1 = y % 100 % 10;
		printf("%s Hundred", y1[ya3]);
		
		y = y % 100;
	}

	if (y >= 11 && y <= 19)
	{
		printf("%s", y2[y % 10]);
	}
	if (y>20 && y<100)
	{
		ya1 = y / 10;
		ya2 = y % 10;
		printf("%s", y3[ya1 - 1]);
		printf("%s", y1[ya2]);
	}

}







