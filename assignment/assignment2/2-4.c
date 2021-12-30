#include <stdio.h>

int htoi(char s[]) {

	int n = 0;
	int i = 0;
	while (s[i] >= '0' && s[i] <= '9' || s[i] >= 'A' && s[i] <= 'F')
	{
		int decimal = 0;
		if (s[i] >= '0' && s[i] <= '9')
			decimal += s[i] - '0';
		else if(s[i] >= 'A' && s[i] <= 'F')
			decimal += s[i] - 'A' + 10;

		n = n * 16 + decimal;
		++i;
	}

	return n;
}

main()
{
	printf("ABCDEF ==> %d\n", htoi("ABCDEF"));
	printf("123456 ==> %d\n", htoi("123456"));
	printf("0100 ==> %d\n", htoi("0100"));
}