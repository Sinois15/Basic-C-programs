#include <stdio.h>
int main() {
 int a;
 printf ("Enter a number? ");
 scanf ("%d", &a);
 switch (a) {
    case 0 :
        printf ("ZERO!");
        break;
    case 1 :
        printf ("ONE!");
        break;
    case 2 :
        printf ("TWO!");
        break;
    default :
        printf ("UNKNOWN!");
    }
 printf ("\n");
 return 0;
}