#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// 콘솔에 나의 뽀짝한 명함 출력하기

#define WIDTH 25
#define NAME "Jin-Young Shin"
#define ADDRESS "Anyang, Korea"

void print_centered_str(char str[]);
void print_multiple_chars(char c, int n_stars, bool print_newline); // prototype

int main()
{
	print_multiple_chars('*', WIDTH, true); // argument

	print_centered_str(NAME);
	print_centered_str(ADDRESS);
	print_centered_str("Hello, How are you?");

	print_multiple_chars('*', WIDTH, true);
	return 0;
}

void print_multiple_chars(char c, int n_stars, bool print_newline) // parameter
{
	for (int i = 0; i < n_stars; ++i)
		printf("%c", c); // putchar(c)도 가능

	if (print_newline)
		printf("\n");
}

void print_centered_str(char str[])
{
	int n_blanks = 0;
	n_blanks = (WIDTH - strlen(str)) / 2;
	print_multiple_chars(' ', n_blanks, false);
	printf("%s\n", str);
}