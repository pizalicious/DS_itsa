#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i;
    int ans = 0;
    while (scanf ("%d", &a) != EOF) {
        for (i = 1; i <= a; i++)
            printf ("%d*%d=%d\n", i, i, i * i);
    }
}
