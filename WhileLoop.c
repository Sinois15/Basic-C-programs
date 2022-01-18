#include <stdio.h>
int main() {
int num, x;
printf ("Enter a number ? ");
scanf ("%d", &num);
x = 0;
if (num >= 0) {
while (x <= num) {
printf ("%d ", x);
x++;
}
}
else
printf ("Please provide a positive number!");
printf ("\n");
return 0;
}
