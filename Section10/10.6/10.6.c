#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12
#define YEARS 3

void printTemp(double arr[][MONTHS]);
void Year_average(double arr[][MONTHS]);
void Month_average(double arr[][MONTHS]);

int main()
{
	double	year2019[MONTHS] = { -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 };
	double	year2020[MONTHS] = { -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 };
	double	year2021[MONTHS] = { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };

	/*
	1. Use 2D array
	2. Print data
	3. Calculate and print yearly average temperatures of 3 years
	4/ Calculate and print monthly average temperatures of 3 years
	*/

	double temp_of_3years[YEARS][MONTHS] = { 
		{ -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 },
		{ -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 },
		{ -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 }
	};

	printTemp(temp_of_3years);
	Year_average(temp_of_3years);
	Month_average(temp_of_3years);
	printf("\n");

	return 0;
}

void printTemp(double arr[][MONTHS])
{
	printf("[Temperature Data]\n");
	printf("Year index :");
	for (int i = 0; i < MONTHS; i++)
		printf("\t%d", i + 1);

	printf("\n");

	for (int j = 0; j < YEARS; j++)
	{
		printf("Year %d :", j+2019);
		for (int i = 0; i < MONTHS; i++)
		{
			printf("\t%.1f", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
}

void Year_average(double arr[][MONTHS])
{
	printf("[Yearly average temperatures of 3 years]\n");

	for (int j = 0; j < YEARS; j++)
	{
		double sum = 0.0;
		for (int i = 0; i < MONTHS; i++)
			sum += arr[j][i];

		printf("Year %d : average temperature = %.1f\n", j + 2019, sum / (double)MONTHS);
	}
	printf("\n");
}

void Month_average(double arr[][MONTHS])
{
	printf("[Monthly average temperatures for 3 years]\n");
	printf("Year index :");
	for (int i = 1; i < 13; i++)
		printf("\t%d", i);
	printf("\nAvg temps :");
	for (int j = 0; j < MONTHS; j++)
	{
		double sum = 0;
		for (int i = 0; i < YEARS; i++)
		{
			sum += arr[i][j];
		}
		printf("\t%.1f", sum / YEARS);
	}
	printf("\n");
}