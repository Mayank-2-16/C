#include<stdio.h>
#include<math.h>

int main(){

    int year;

    printf("Enter the year\n");
    scanf("%d", &year);

    if(year%4==0){
        printf("Leap year\n");
    }
    else{
        printf("Not a leap year\n");
    }

    return 0;
}