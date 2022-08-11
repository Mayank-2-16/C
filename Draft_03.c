#include<stdio.h>
int main(){

    int num , i;
    printf("Type a number\n");
    scanf("%d", &num);

    for(num ; num>0 ; num--){
        printf("The value of i is %d\n", num);
    }

    return 0;
}