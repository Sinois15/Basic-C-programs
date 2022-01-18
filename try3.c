#include <stdio.h>

int main(){
    int num;
    //if a double is entered instead. it is rounded down to the nearest int
    //if a char/string is entered, it returns 0
    printf("please enter a number: ");
    scanf("%d", &num);
    printf("your number is %d",num);
    return 0;
}