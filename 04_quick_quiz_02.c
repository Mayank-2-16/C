#include<stdio.h>

int main(){
    int i, n;
        printf("Type a natural number\n");
        scanf("%d", &n);
        printf("Here You GO!!!!\n\n\n");
    do{
        printf("%d\n", i+1);
        i++;
    }while(i<n);
    return 0;
}