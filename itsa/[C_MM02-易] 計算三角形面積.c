#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    float a, b, c, d, e, i, ans;
    while (scanf ("%f%f", &a, &b) != EOF) {
        ans = (a * b) / 2;
        printf ("%.1f\n", ans);
    }
}

