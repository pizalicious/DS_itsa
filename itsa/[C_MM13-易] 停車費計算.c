#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d;
    //while (scanf ("%d", &a) != EOF) {
    scanf ("%d%d%d%d", &a, &b, &c, &d);
    a = a * 60 + b;
    c = c * 60 + d;

    int t;

    if (a > c)
        t = (24 * 60 - a) + c;
    else
        t = c - a;
    if (t <= 2 * 60) {
        printf ("%d\n", (t / 30) * 30);
    } else if (t <= 4 * 60) {
        int t2;
        t2 = t - 120;
        printf ("%d\n", (t2 / 30) * 40 + 120);
    } else {
        int t2;
        t2 = t - 240;
        printf ("%d\n", (t2 / 30) * 60 + 120 + 160);
    }
}
