#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    float a, b, c, d, e, i, ans;
    while (scanf ("%f%f%f", &a, &b, &c) != EOF) {
        ans = (a + b) * c / 2;
        printf ("Trapezoid area:");
        printf ("%.1f\n", ans);
    }
}
