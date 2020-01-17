#include <stdio.h>

long long f (long long a) {
    if (a == 0 || a == 1)
        return 1;
    return a * f (a - 1);
}

int main() {
    //freopen ("input.txt", "r", stdin);
    long long a, b, c, d, e, i;
    int ans;
    while (scanf ("%lld", &a) != EOF) {
        a = f (a);
        printf ("%lld\n", a);
        //cout << fixed << setprecision ( 1 ) << ans << endl;
    }
}
