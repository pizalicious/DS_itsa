#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i;
    int ans = 0;
    while (scanf ("%d", &a) != EOF) {
        if (a >= 35)
            printf ("35");
        else
            continue;
        for (i = 70; i <= a; i += 35)
            printf (" %d", i);
        printf ("\n");
    }
}
