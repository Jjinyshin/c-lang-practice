#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Ǻ���ġ ���� ����

int fibonacci(int number);

int main()
{
	for (int count = 1; count < 13; ++count)
		printf("%d ", fibonacci(count));

	return 0;
}

int fibonacci(int number)
{
	/*
	if (number == 1 || number == 2)
		return number = 1;
	else
		return fibonacci(number - 2) + fibonacci(number - 1);
	*/
	if (number > 2)
		return fibonacci(number - 1) + fibonacci(number - 2); // double recursion
	else
		return 1;
}

/* Note
���ȣ���� ����: ������ �����ϰ� �� �� �ִ�.
����: �޸� ��뷮�� ����(��ȿ�������� ���� memory inefficiency) ��꿡 �ߺ��� �����(redundant computation).
*/