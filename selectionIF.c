#include <stdio.h>

int main(){
    int x;
    printf("please enter a number: ");
    scanf("%d", &x);
    if (x == 0){
        printf("ZERO\n");
    }
    else if (x == 1){
        printf("ONE\n");
    }
    else {
        printf("Dunno that number :p\n");
    }
    return 0;
}