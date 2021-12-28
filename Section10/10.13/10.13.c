#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	///* Two of 1D arrays */

	//int arr0[3] = { 1, 2, 3 };
	//int arr1[3] = { 4, 5, 6 };

	//int* parr[2] = { arr0, arr1 }; // an array of pointers

	//for (int j = 0; j < 2; ++j)
	//{
	//	for (int i = 0; i < 3; ++i)
	//		printf("%d(==%d, %d, %d) ", parr[j][i], *(parr[j] + i), *(*(parr + j) + i), (*(parr + j))[i]);
	//	printf("\n");
	//}
	//printf("\n");

	///* 2D arrays are arrays of 1D arrays */

	//int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	//int* parr0 = arr[0];
	//int* parr1 = arr[1];

	//for (int i = 0; i < 3; ++i)
	//	printf("%d ", parr0[i]);
	//printf("\n");

	//for (int i = 0; i < 3; ++i)
	//	printf("%d ", parr1[i]);
	//printf("\n");

	/* Arrays of pointers works like a 2D array */

	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	int* parr[2] = { arr[0], arr[1] }; // 포인터의 배열
	/*int* parr[2]; 
	parr[0] = arr[0];
	parr[1] = parr[1];*/

	/*for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
			printf("%d %d %d %d\n", 
				arr[j][i], parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
		printf("\n");
	}
	printf("\n");*/

	/*printf("%p\n", &parr);
	printf("%p\n", parr);
	printf("%p\n", &parr[0]);
	printf("%p\n", parr[0]);

	printf("%p\n", arr);
	printf("%p\n", *arr);
	printf("%p\n", &arr[0]);

	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);

	printf("%d\n", arr[0][0]);
	printf("%d\n", parr[0][0]);*/
	
	// 원하는 값 출력 test
	//printf("%u\n", (unsigned)**(&arr[0]));
	//printf("%u\n", (unsigned)**(&arr[0] + 1));
	//printf("%u\n", (unsigned)*(&arr[1][0]));
	//printf("%u\n", (unsigned)*(&arr[0][0] + 1));
	//printf("%u\n", (unsigned)*(&arr[0][1]));

	//포인터 연산에서 보이는 차이
	//printf("%u\n", (unsigned)(&arr[0] + 1));
	//printf("%u\n", (unsigned)(&arr + 1));
	//printf("%u\n", (unsigned)(arr + 1));

	//*,&이해
	//printf("%u\n", (unsigned)(&arr));
	//printf("%u\n", (unsigned)(&arr + 1));
	//printf("%u\n", (unsigned)*(&arr + 1));
	//printf("%u\n", (unsigned)**(&arr + 1));
	//printf("%u\n", (unsigned)***(&arr));

	//printf("%d\n", **(arr + 1)); //indicating arr[1][0]
	//printf("%d\n", arr[1][0]);

	//printf("%p\n", arr + 1);
	//printf("%p\n", *(arr + 1));
	//printf("%p\n", &arr[1]);

	//printf("%p\n", *arr + 2);
	//printf("%p\n", &arr[0][2]);

	//printf("%p\n", *(arr + 1) + 1);
	//printf("%p\n", &arr[1][1]);

	//// quest: print '5' in two ways
	//printf("%d\n", *(*(arr + 1) + 1));
	//printf("%d\n", arr[1][1]);


	return 0;
}