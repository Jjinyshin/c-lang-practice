#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* Omitting Size */
	const int power_of_twos[] = { 1, 2, 4, 7, 16, 32, 64 };
	
	for (int i = 0; i < sizeof power_of_twos / sizeof power_of_twos[0]; ++i)
		printf("%d ", power_of_twos[i]);

	printf("\n");
	/* Designated initializers */
	int days[10] = { 23,135,[5] = 9, 4, 5,[2] = 10,[1] = 56 };
	for (int i = 0; i < sizeof days / sizeof (int); ++i)
		printf("%d ", days[i]);

	return 0;
}