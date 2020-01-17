#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i, ans;
    while (scanf ("%d", &a) != EOF) {
        b = a / 10;
        printf ("NT10=%d\n", b);
        a -= b * 10;
        b = a / 5;
        printf ("NT5=%d\n", b);
        a -= b * 5;
        printf ("NT1=%d\n", a);
    }
}
