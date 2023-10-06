#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int i , j;
	printf("Please enter a number: ");
	scanf("%d", &i);
	
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			break;
	}
	if (i == j)
		printf("It is a prime number!");
	else
		printf("It is not a prime number!");
	return 0;
}
