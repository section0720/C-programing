#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct info
{
	char name[30];
	char country[30];
	int population;
}Info;

int main()
{
	Info arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		scanf("%s", arr[i].name);
		printf("country> ");
		scanf("%s", arr[i].country);
		printf("Population> ");
		scanf("%d", &arr[i].population);
	}
	printf("Printing the three cities: \n");
	
	for (i = 0; i < 3; i++)
	{
		printf("%s in %s with a population of %d people\n", arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}
