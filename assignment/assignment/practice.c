#include <stdio.h>

int main() {
    char c;
    int inter;

    c = 'A';
    for (int i = 0; i <= ('Z' - 'A'); i++)
    {
        inter = 'A' - 'a';
        printf("%X (%d) : '%c'\t\t%X (%3d) : '%c'\n", c, c, c, c - inter, c - inter, c - inter);
        c++;
    }
    return 0;
}
