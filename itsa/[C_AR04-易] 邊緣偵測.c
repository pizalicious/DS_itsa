#include <stdio.h>
int main() {
    //freopen ( "input.txt", "r", stdin );
    //freopen ( "output.txt", "w", stdout );
    int ncase, i, j;
    scanf ("%d", &ncase);
    while (ncase--) {
        int row, col;
        scanf ("%d%d", &row, &col);
        int tab[row][col];
        for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
                scanf ("%d", &tab[i][j]);
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                if (tab[i][j] == 0)
                    printf ("_");
                else {
                    if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
                        printf ("0");
                    else if (tab[i - 1][j] == 0 || tab[i + 1][j] == 0 || tab[i][j - 1] == 0 || tab[i][j + 1] == 0)
                        printf ("0");
                    else
                        printf ("_");
                }
                printf (" ");
            }
            printf ("\n");
        }
        if (ncase != 0)
            printf ("\n");
    }
}
