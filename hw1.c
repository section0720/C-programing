#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	printf("Input two integers:");
	scanf("%d %d", &num1, &num2);
	int and = num1 & num2;
	int or = num1 | num2;
	int xor = num1 ^ num2;

	printf("%d & %d = %d \n", num1, num2, and);
	printf("%d | %d = %d \n", num1, num2, or);
	printf("%d ^ %d = %d \n", num1, num2, xor);
	return 0;
} 