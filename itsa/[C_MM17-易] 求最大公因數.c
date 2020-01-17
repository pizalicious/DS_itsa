#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, a2, b, b2, ncase, i, sum = 0;
    scanf ("%d%d", &a, &b);
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    printf ("%d\n", a);
    return 0;
}
