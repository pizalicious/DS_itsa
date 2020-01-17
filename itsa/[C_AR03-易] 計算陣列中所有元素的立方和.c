#include <stdio.h>
int main() {
    //freopen ( "input.txt", "r", stdin );
    int a;
    int i, sum = 0;
    for ( i = 0; i < 6; i++ ) {
        scanf("%d", &a);
        a = a * a * a;
        sum += a;
    }
    printf("%d\n", sum);
}
