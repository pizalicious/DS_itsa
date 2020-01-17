#include <stdio.h>
#include <string.h>
int main() {
    int a, a2, b, b2, ncase, i, sum = 0;
    char line[1024];
    scanf ("%s", line);
    char line2[1024];
    for (i = 0; i < strlen (line); i++)
        line2[i] = line[strlen (line) - i - 1];
    line2[strlen (line)] = '\0';
    if (!strcmp (line, line2))
        printf ("YES\n");
    else
        printf ("NO\n");
    return 0;
}
