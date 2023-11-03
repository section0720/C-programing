#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int arr[5];
	int odd[5] = { 0 };
	int even[5] = { 0 };
	int m = 0;
	int n = 0;
	int p;
	int q;
	printf("Please input five integers: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (j = 0; j < 5; j++)
	{
		if (arr[j] % 2 == 0)
		{
			even[m] = arr[j];
			m++;
	
		}
		else
		{
			odd[n] = arr[j];
			n++;
         }
	}
	printf("Odd numbers:");
	
	for (p = 0; odd[p] != 0; p++)
	{
		printf("%d ", odd[p]);
	}
	printf("\nEven numbers:");
	
	for (q = 0; even[q] != 0; q++)
	{
		printf("%d ", even[q]);
	}
	return 0;
}