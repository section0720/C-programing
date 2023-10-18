#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int num;
	printf("please enter a number: ");
	scanf("%d", &num);
	convert(num);
	return 0;
} 

int convert(int a)
{
	if (a == 1 || a == 0)
	{
		printf("%d" , a);
	}
	else 
	{
		convert(a / 2);
		printf("%d", a % 2);
	}
}
