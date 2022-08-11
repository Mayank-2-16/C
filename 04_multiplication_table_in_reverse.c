/* #include<stdio.h>

int main(){
    int i;

    i=10;

    printf("Here you GO!!!!!!!!\n");
    do{
        printf("%d\n", 10*i);
        i--;
    }while (i>=1);
    return 0;
} */

#include<stdio.h>
int main(){
    int num, n = 10;

    printf("Type a number\n");
    scanf("%d", &num);

    while(n>0){

    printf("The value of %d * %d is %d\n", num , n, num * n);
    n--;
    }
    return 0;
}