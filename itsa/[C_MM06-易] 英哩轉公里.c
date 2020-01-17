#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    double a;
    while (scanf ("%lf", &a) != EOF) {
        printf ("%.1lf\n", a * 1.6);
    }
}
