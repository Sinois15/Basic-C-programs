#include <stdio.h>
int main() {
int num, x;
printf ("Enter a number ? ");
scanf ("%d", &num);
if (num >= 0) {
    for (x = 50; x >= num; x-= 5)
        printf ("%d ", x);
}

else
    printf ("Please provide a positive number!");
printf ("\n");
return 0;
}