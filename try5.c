#include <stdio.h>
#include <string.h>
int main(){
    char fname[20], lname[20];
    //string in c is an array of char unless we use the external library (#include <string.h>)
    //if there is a space between the names, the first input itself is counted as both inputs
    printf("please enter your first name: ");
    scanf("%s", &fname);
    printf("please enter your last name: ");
    scanf("%s", &lname);
    printf("your full name is %s %s", fname, lname);
    return 0;
}