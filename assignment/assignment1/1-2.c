#include <stdio.h>

void strsum(char to[], char from1[], char from2[])
{
    int i, j;
    j = 0;

    for (i = 0; from1[i] != '\0'; ++i)
    {
        to[i] = from1[i];
    }

    while ((to[i + j] = from2[j]) != '\0')
        ++j;
}

void strmul(char s[], char t[], int n)
{
    int frst = 0;
    int j, cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        j = 0;
        while (t[j] != '\0')
        {
            s[frst + j] = t[j];
            ++j;
            ++cnt;
        }

        frst += j;
    }
    s[cnt] = '\0';
}

main() {
    char s[100], t[100], u[100];

    strmul(t, "abc", 2);	/* t: "abcabc" */
    strmul(u, "DE", 3);  	/* u: "DEDEDE" */
    strsum(s, t, u);  	/* s: "abcabcDEDEDE" */
    printf("%s\n", s);	/* Ãâ·Â: abcabcDEDEDE */
}