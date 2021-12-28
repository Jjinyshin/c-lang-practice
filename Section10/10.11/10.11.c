#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(const int ar[], const int n)
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i] ++; // wrong implementation

	return total;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	const int n = sizeof(arr) / sizeof(arr[0]);

	int s = sum(arr, n);
	printf("sum is %d\n", s);
	s = sum(arr, n);
	printf("sum is %d\n", s);

	return 0;
}