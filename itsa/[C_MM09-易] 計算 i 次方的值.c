#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i, ans;
    while (scanf ("%d", &a) != EOF) {
        if (a > 31) {
            printf ("Value of more than 31\n");
            continue;
        }
        a--;
        b = 2;
        ans = (b << a);
        printf ("%d\n", ans);
    }
}
