#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* Two of 1D arrays */

	int arr0[3] = { 1, 2, 3 };
	int arr1[3] = { 4, 5, 6 };

	int* parr[2] = { arr0, arr1 }; // an array of pointers

	for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
			printf("%d(==%d, %d, %d) ", parr[j][i], *(parr[j] + i), *(*(parr + j) + i), (*(parr + j))[i]);
		printf("\n");
	}
	printf("\n");

	return 0;
}