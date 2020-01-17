#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i;
    int ans;
    while (scanf ("%d%d", &a, &b) != EOF) {
        if (a > 100 || b > 100)
            printf ("outside\n");
        else
            printf ("inside\n");
    }
}
