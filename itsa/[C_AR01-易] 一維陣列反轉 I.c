#include <stdio.h>
int main() {
    //freopen ("input.txt", "r", stdin);
    char line[1024], temp[100];
    char *ptr, *qtr;
    int i, total;
    int a[100];
    while (scanf ("%[^\n]", line) != EOF) {
        char tmp;
        scanf ("%[\n]", &tmp);
        //printf("%s\n", line);
        total = 0;
        int len = strlen (line);
        if (line[len - 1] == '\n')
            line[len - 1] = '\0';
        ptr = line;
        qtr = temp;
        while (*ptr != '\0') {
            if (*ptr != ' ')
                *qtr++ = *ptr++;
            else {
                *qtr = '\0';
                qtr = temp;
                ptr++;
                a[total++] = atoi (temp);
            }
        }
        *qtr = '\0';
        qtr = temp;
        a[total++] = atoi (temp);
        for (i = total - 1; i > 0; i--)
            printf("%d ",a[i]);
        printf("%d\n",a[i]);
    }

}
