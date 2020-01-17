#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    float a, b, c, d, e, i, ans;
    while (scanf ("%f", &a) != EOF) {
        ans = 9 * a / 5 + 32;
        printf ("%.1f\n", ans);
    }
}
