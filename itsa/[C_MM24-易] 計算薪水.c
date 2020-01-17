#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    double a, b, c, d, e, i;
    int ans;
    while (scanf ("%lf%lf", &a, &b) != EOF) {
        if (a <= 60)
            printf ("%.1lf\n", a * b);
        else if (a <= 120)
            printf ("%.1lf\n", 60 * b + (a - 60) * b * 1.33);
        else
            printf ("%.1lf\n", 60 * b + 60 * b * 1.33 + (a - 120) * b * 1.66);
    }
}
