#include<stdio.h>

int main(){
    int num, i;

    i=1;

    printf("Type a number\n");
    scanf("%d", &num);
    printf("Here you GO!!!!!!!!\n");
    do{
        printf("%d\n", num*i);
        i++;
    }while (i<=10);
    return 0;
}