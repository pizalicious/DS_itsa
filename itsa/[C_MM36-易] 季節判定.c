#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    int a, b, cnt = 0;
    int arr[8], i;
    scanf ("%d", &a);
    switch (a) {
    case 3:
    case 4:
    case 5:
        printf ("Spring\n");
        break;
    case 6:
    case 7:
    case 8:
        printf ("Summer\n");
        break;
    case 9:
    case 10:
    case 11:
        printf ("Autumn\n");
        break;
    case 12:
    case 1:
    case 2:
        printf ("Winter\n");
        break;
    default:
        printf ("error\n");
    }
}
