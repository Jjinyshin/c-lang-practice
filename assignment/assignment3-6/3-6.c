#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 10000

int isort(int v[], int n); /* insertion sort */
void copyarray(int a[], int b[], int n); /* copy n elements of array b[] to a[] */
void printarray(int a[], int n); /* print n elements of array a[] */

int main()
{
    int numbers[ARRAYSIZE], data[ARRAYSIZE];
    int i, n, count;

    /* Generate 10,000 random numbers */
    for (i = 0; i < ARRAYSIZE; i++)
        numbers[i] = rand();
    printf("Before sort (the first 8 numbers) : ");
    printarray(numbers, 8);
    printf("\n");

    for (n = 10; n <= ARRAYSIZE; n *= 10) {
        copyarray(data, numbers, n);
        count = isort(data, n);
        printf("After insertion sort (the first 5 numbers) : ");
        printarray(data, 5);
        printf("The number of swaps in insertion sort : %d\n\n", count);
    }
    return 0;
}

int isort(int v[], int n)
{
    int cnt = 0;
    int temp, i, j;
    for (i = 1; i < n; ++i)
    {
        temp = v[i];
        for (j = i - 1; j >= 0 && v[j] > temp; j--)
        {
            v[j + 1] = v[j];
            cnt++;
        }
        v[j+1] = temp;
    }
    return cnt;
}

void copyarray(int a[], int b[], int n)
{
    for (int i = 0; i < n; ++i)
        a[i] = b[i];
}

void printarray(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d  ", a[i]);
    printf("\n");
}