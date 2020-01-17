#include <stdio.h>
int f (int a) {
    if (a == 0 || a == 1)
        return a + 1;
    return (f (a - 1) + f (a / 2));
}

int main() {
    int a, a2, b, b2, ncase, i, sum = 0;
    scanf ("%d", &a);
    a = f (a);
    printf ("%d\n", a);
    return 0;
}
