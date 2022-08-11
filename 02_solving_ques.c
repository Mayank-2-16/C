#include<stdio.h>

int main(){

    int a;

    printf("Type any number\n");
    scanf("%d", &a);

    printf("Divisibility test returns: %d \n", a%41);
    return 0;
}