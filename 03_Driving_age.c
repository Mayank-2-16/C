#include<stdio.h>

int main(){

    int age;

    printf("Enter your age \n");
    scanf("%d", &age);

    if(age>=18 && age<=80){
        printf("You are eligible to drive a car in India\n");
    }

    else{
        printf("You are not eligible to drive a car in India\n");
    }

    return 0;
}