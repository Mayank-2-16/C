#include<stdio.h>

int main(){

    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    // One liner

    (a < 5)?printf("The number is less than 5\n"): printf("The number not is less than 5\n");

    return 0;

}