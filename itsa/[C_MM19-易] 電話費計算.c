#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    float a, b, c, d, e, i;
    float ans;
    while (scanf ("%f", &a) != EOF) {
        if (a <= 800)
            a *= 0.9;
        else if (a < 1500)
            a = a * 0.9 * 0.9;
        else
            a = a * 0.9 * 0.79;
        printf ("%.1f\n", a);
    }
}
