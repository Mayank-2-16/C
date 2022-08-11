#include<stdio.h>
int main(){
    int i , num;
    printf("Type a number\n");
    scanf("%d\n", &num);

    for(i = 1; i<num+1; i++){
        printf("%d\n", i);
    }

    return 0;
}
