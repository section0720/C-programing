#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double Sigma(double *param)
{
	double sum = 0;
	double dev = 0;
	double var = 0;
	for (int i = 0; i < 5; i++)
		sum += param[i];
	double avg = sum / 5;
	for (int j = 0; j < 5; j++)
		param[j] -= avg;
	
	for (int k = 0; k < 5; k++)
		dev += pow(param[k], 2);
	var = dev / 5;
	
	printf("Standard Deviation = %.4lf", sqrt(var));
	return 0;
}

int main()
{
	int n = 0;
	double arr[5];
	printf("Enter 5 real numbers: ");
	for (n = 0; n < 5; n++)
	{
		scanf("%lf", &arr[n]);
	}
	Sigma(arr);

}
