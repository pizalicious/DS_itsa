#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i;
    int ans;
    while (scanf ("%d", &a) != EOF) {
        for (i = a - 1; i >= 2; i--) {
            ans = 1;
            for (b = 2; b <= i / 2 + 1; b++) {
                if (i % b == 0) {
                    ans = 0;
                    break;
                }
            }
            if (ans == 1) {
                printf ("%d\n", i);
                break;
            }
        }
    }
}
