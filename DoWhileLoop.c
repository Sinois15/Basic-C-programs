#include <stdio.h>

int main() {
    int num, x;
    printf ("Enter a number ? ");
    scanf ("%d", &num);
    x = 0;
    if (num >= 0) {
        do {
            printf ("%d ", x);
            x++;
        } while (x <= num);
    }
    else
        printf ("Please provide a positive number!");
    printf ("\n");
    return 0;
}