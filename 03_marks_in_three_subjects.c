#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c, avg;
    printf("Enter marks in first subject\n");
    scanf("%f", &a);
    printf("Enter marks in second subject\n");
    scanf("%f", &b);
    printf("Enter marks in third subject\n");
    scanf("%f", &c);

    avg = (a+b+c) / 3;

    if(a>=33 && b>=33 && c>=33 && avg>=40 && avg<=100){
        printf("You are pass\n");
    }
    else{
        printf("You are fail\n");
    }
    // Harry bhaiya ka method -->
    // if((total<40) || physics<33 || maths<33 || chemistry<33){
    //     printf("Your total percentage is %d and you are fail\n", total);
    // }
    // else{
    //     printf("Your total percentage is %d and you are pass\n", total);
    // }
    return 0;
}
