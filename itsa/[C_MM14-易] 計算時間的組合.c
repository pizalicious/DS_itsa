#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i;
    int ans;
    while (scanf ("%d", &a) != EOF) {
        b = a % 60; //sec
        a /= 60;
        c = a % 60; //min
        a /= 60;
        d = a % 24; //hour
        a /= 24; //day
        printf ("%d days\n", a);
        printf ("%d hours\n", d);
        printf ("%d minutes\n", c);
        printf ("%d seconds\n", b);
    }
}
