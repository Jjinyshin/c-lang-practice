#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������ ��ȯ ����

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);

int main()
{
	unsigned long num = 10;
	
	print_binary_loop(num);
	print_binary(num);

	printf("\n");

	return 0;
}


//Note: printing order is reversed!
void print_binary_loop(unsigned long num)
{
	while(1)
	{
		int quotient = num / 2;
		int remainder = num % 2;

		printf("%d", remainder);

		num = quotient;

		if (quotient == 0)
			break;
	}

	printf("\n");
}

void print_binary(unsigned long num)
{

	int quotient = num / 2;
	int remainder = num % 2;

	if (num >= 2)
		print_binary(quotient);

	printf("%d", remainder);
	// stack�� ���� ���� ����ϹǷ� ��(=���ϴ� ��)���� ��µ�
}