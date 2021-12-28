#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ¿Á±Õ»£√‚(recursion)

void my_func(int);

int main()
{
	my_func(1);

	return 0;
}

void my_func(int n)
{
	printf("Lv.%d, address of variable n = %p\n", n, &n);

	if (n < 4) // stop condition
		my_func(n + 1);

	printf("Lv.%d, address of variable n = %p\n", n, &n); // stackø° Ω◊¿Œ ∞™ √‚∑¬
}