#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i, ans;
    while (scanf ("%d", &a) != EOF) {
        b = a * a ;
        c = a * a * a;
        printf ("%d %d %d\n", a, b, c);
    }
}
