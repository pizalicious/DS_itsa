#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    float a, b, c, d, e, i, ans;
    while (scanf ("%f", &a) != EOF) {
        ans =  a * a  ;
        ans += 0.04;
        printf ("%.1f\n", ans);
    }
}

