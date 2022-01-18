#include <stdio.h>

int main(){
    int num1, num2, num3, prod;
    printf("please enter the 1st number: ");
    scanf("%d", &num1);
    printf("please enter the 2nd number: ");
    scanf("%d", &num2);
    printf("please enter the 3rd number: ");
    scanf("%d", &num3);
    prod = num1 * num2 * num3;
    printf("%d x %d x %d = %d",num1, num2, num3, prod);
    return 0;
}