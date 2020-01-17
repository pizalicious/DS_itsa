#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    float a, b, c, d, e, i;
    int ans;
    while (scanf ("%f", &a) != EOF) {
        ans = (a / 0.238) + 1;
        printf ("%d\n", ans);
    }
}
