#include <stdio.h>
int main() {
int num, x;
printf ("Enter a number ? ");
scanf ("%d", &num);
if (num >= 0) {
    for (x = 0; x <= num; x++) {
        if (x == 3)
        //continue skips that iteration and goes to the next
        //so in this case, since its =3, it will skip it and not print 3 but goes to iteration 4 and prints 4
            continue;
        if (x == 8)
            break;
        printf ("%d ", x);
        }
}
else
    printf ("Please provide a positive number!");
printf ("\n");
return 0;
}
