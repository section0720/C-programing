#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i;
	int j;
	int n;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j <= 5 - i; j++)
		{
			printf(" ");
		}
		for(n = 0; n < i * 2 + 1; n++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


/*
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 5; a++)
	{
		for (b = a; b <= 5 - 1; b++) {
			printf(" ");
		}
		for (c = 0; c <= (a * 2); c++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
*/