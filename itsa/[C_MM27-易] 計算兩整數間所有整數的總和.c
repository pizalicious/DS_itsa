#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i;
    int ans = 0;
    while (scanf ("%d%d", &a, &b) != EOF) {
        ans = (a + b) * (abs (b - a) + 1) / 2;
        printf ("%d\n", ans);
    }
}
