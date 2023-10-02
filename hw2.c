#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double km;
	double mile = 1.609;
	printf("please enter kilometers:");
	scanf("%lf", &km);
	printf("%.1lf km is equal to %.1lf miles", km , km / mile);
	return 0;
}