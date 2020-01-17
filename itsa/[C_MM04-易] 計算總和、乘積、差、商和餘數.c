#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, c, d, e, i, ans;
    while (scanf ("%d%d", &a, &b) != EOF) {
        ans =  a + b  ;
        printf ("%d+%d=%d\n", a, b, ans);
        ans =  a * b  ;
        printf ("%d*%d=%d\n", a, b, ans);
        ans =  a - b  ;
        printf ("%d-%d=%d\n", a, b, ans);
        int t = a, t2 = b, t3, t4;
        t3 = t / t2;
        t4 = t % t2;
        if (t4 < 0) {
            t4 += t2;
            t3 -= 1;
        }
        printf ("%d/%d=%d...%d\n", a, b, t3, t4);
    }
}

