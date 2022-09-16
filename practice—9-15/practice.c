#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int count = 5;
	int a = 0;
	int c = 0;
	scanf("%d",&a);
	while (count)
	{
		
		c = c + a;
		a = a * 10;
		a = a + 2;

		count--;

	}
	printf("%d", c);

	return 0;
}
int main()
{
	int e = 0;
	int count = 0;
	int d = 0;
	int a = 1;
	int c = 0;
	int b = 100000;
	

	for (b = 100000; b > 0; b--)
	{
		int f = b;
		int g = b;
		if (b > 0 && b <= 9)
		{
			c = 1;
		}
		else if (b > 9 && b <= 99)
		{
			c = 2;
		}
		else if (b > 99 && b <= 999)
		{
			c = 3;
		}
		else if (b > 999 && b <= 9999)
		{
			c = 4;
		}
		else if (b > 9999 && b <= 99999)
		{
			c = 5;
		}
		else if (b > 99999 && b <= 999999)
		{
			c = 6;
		}
		e = 0;
		while (g)
		{
			
			e = e + pow(g % 10, c);
			g = g / 10;


			/*if (f == e)
			{
				count++;
				printf("%d ", b);
			}*/
		}
		if (f == e)
		{
			count++;
			printf("%d ", b);
		}
	}
	
	printf("\n ");
	printf("%d", count);

	return 0;
}




