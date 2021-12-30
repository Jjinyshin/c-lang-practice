#include <stdio.h>

// 원하는 위치에 특정 비트를 덮어쓰는 setbits()함수 만들기

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned y_bit = ((y << (p - n + 1)) & ~(~0 << p + 1));
    unsigned x_bit;
    unsigned a_temp = x & (~0 << p + 1);
    unsigned c_temp = x & ~(~0 << (p - n + 1));

    x_bit = a_temp | c_temp;
    return (x_bit | y_bit);
}

main()
{
    printf("setbits(0X12345678,  7,  8, 0X89ABCDEF) = %X\n",
        setbits(0X12345678, 7, 8, 0X89ABCDEF));
    printf("setbits(0X12345678, 15, 16, 0X89ABCDEF) = %X\n",
        setbits(0X12345678, 15, 16, 0X89ABCDEF));
    printf("setbits(0X12345678, 15,  8, 0X89ABCDEF) = %X\n",
        setbits(0X12345678, 15, 8, 0X89ABCDEF));
    printf("setbits(0X12345678,  9, 10, 0X89ABCDEF) = %X\n",
        setbits(0X12345678, 9, 10, 0X89ABCDEF));
}