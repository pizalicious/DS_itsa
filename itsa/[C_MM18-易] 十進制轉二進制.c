#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, cnt = 0;
    int arr[8], i;
    scanf ("%d", &a);
    if (a == 0)
        printf ("00000000\n");
    if (a > 0) {
        while (a != 0) {
            b = a % 2;
            arr[cnt++] = b;
            a = a / 2;
        }
        for (i = cnt; i < 8; i++)
            arr[i] = 0;
        for (i = 7; i >= 0; i--)
            printf ("%d", arr[i]);
        printf ("\n");
    } else {
        a = abs (a) - 1;
        while (a != 0) {
            b = a % 2;
            arr[cnt++] = b;
            a = a / 2;
        }
        for (i = cnt; i < 8; i++)
            arr[i] = 0;
        for (i = 0; i < 8; i++)
            if (arr[i] == 1)
                arr[i] = 0;
            else if (arr[i] == 0)
                arr[i] = 1;
        for (i = 7; i >= 0; i--)
            printf ("%d", arr[i]);
        printf ("\n");
    }
}
