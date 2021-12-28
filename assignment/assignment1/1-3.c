#include <stdio.h>

main() {
    int prime[1000];
    int count = 0;

    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i < 1000; ++i)
        prime[i] = 1;

    for (int p = 2; p < 32; ++p)
    {
        if (prime[p] == 1)
        {
            for (int j = 2; j <= (1000 / p) && j * p != 1000; j++)
                prime[j * p] = 0;
        }
    }
    
    for (int k = 0; k < 1000; ++k)
    {
        if (prime[k] == 1)
        {
            printf("\t%3d", k);
            count++;
            if (count % 15 == 0)
                printf("\n\n");
        }
    }
    printf("\n");
}