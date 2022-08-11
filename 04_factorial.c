#include<stdio.h>

int main(){
    int num, i=1, k=1;

    printf("Enter a number\n");
    scanf("%d", &num);

    for(i; i<=num; i++){
        k = k * i;
    }

    printf("%d\n", k);

    return 0;
}