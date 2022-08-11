#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c, d;

    printf("Enter 1st number\n");
    scanf("%f", &a);
    printf("Enter 2nd number\n");
    scanf("%f", &b);
    printf("Enter 3rd number\n");
    scanf("%f", &c);
    printf("Enter 4th number\n");
    scanf("%f", &d);

    if(a>b && a>c && a>d){
        printf("The greatest number is %f\n", a);
    }
    else if(b>a && b>c && b>d){
        printf("The greatest number is %f\n", b);
    }
    else if(c>b && c>a && c>d){
        printf("The greatest number is %f\n", c);
    }
    else{
        printf("The greatest number is %f\n", d);
    }

    return 0;
}