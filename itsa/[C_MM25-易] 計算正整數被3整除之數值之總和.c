#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, a2, b, b2, ncase, i, sum = 0;
    scanf ("%d", &a);
    for (i = 3; i <= a; i += 3)
        sum += i;
    printf ("%d\n", sum);
    return 0;
}
