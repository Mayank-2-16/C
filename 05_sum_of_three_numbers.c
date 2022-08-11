#include<stdio.h>

    float average(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Type first number\n");
    scanf("%d", &a);
    printf("Type second number\n");
    scanf("%d", &b);
    printf("Type third number\n"); 
    scanf("%d", &c);
    
    printf("The avg of three numbers is %f", average(a, b, c));
    
    return 0;
}

    float average(int a, int b, int c){
        float x;
        x = (a+b+c)/3;
        return x;
    }
