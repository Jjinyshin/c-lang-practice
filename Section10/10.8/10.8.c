#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a[3] = {1,2,3};
//	int* pd = a;
//	printf("%d %d %d", pd[0], a[0], *pd);
//
//	return 0;
//}

double average(double*, double*);

int main()
{
	double arr1[5] = { 10, 13, 12, 7, 8 };
	printf("Avg = %f\n", average(arr1, arr1 + 5));

	return 0;
}

double average(double* start, double* end)
{
	int count = end - start;
	//int count = 0;
	double avg = 0.0;

	while (start < end)
	{
		avg += *start++;
		//count++;
	}
	avg /= count;
	return avg;
}