#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i, ans;
    while (scanf ("%d%d", &a, &b) != EOF) {
        ans = (a + b) * (a + b) ;
        printf ("%d\n", ans);
    }
}
