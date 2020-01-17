#include <stdio.h>
#include <stdlib.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b;
    scanf ("%d%d", &a, &b);
    a = abs (a);
    b = abs (b);
    if ( (a * a + b * b) <= 10000)
        printf ("inside\n");
    else
        printf ("outside\n");
}
