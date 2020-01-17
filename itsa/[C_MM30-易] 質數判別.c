#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, a2, b, b2, ncase, i;
    scanf ("%d", &a);
    if (a == 1) {
        printf ("NO\n");
        return 0;
    } else if (a == 2) {
        printf ("YES\n");
        return 0;
    }

    for (i = 2; i <= a / 2; i++)
        if (a % i == 0) {
            printf ("NO\n");
            return 0;
        }
    printf ("YES\n");
    return 0;
}
