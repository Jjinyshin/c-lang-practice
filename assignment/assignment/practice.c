#include <stdio.h>

int main() {
    // 16���� (10����ǥ��) : '������'
    char c;
    int inter;

    c = 'A';
    for (int i = 0; i <= ('Z' - 'A'); i++)
    {
        inter = 'A' - 'a';
        printf("%x (%d) : '%c'\t%x (%d) : '%c'\n", c, c, c, c - inter, c - inter, c - inter);
        c++;
    }
    return 0;
}
