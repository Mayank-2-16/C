#include<stdio.h>
#include<math.h>

int main(){

    int year;

    printf("Enter the year\n");
    scanf("%d", &year);

    if(year%4==0 && year>=2021){
        printf("The year will be a leap year\n");
    }
    if(year%4!=0 && year>=2021){
        printf("The year won't be a leap year\n");
    }
    if(year%4==0 && year<=2021){
        printf("The year was a leap year\n");
    }
    if(year%4!=0 && year<=2021){
        printf("The year wasn't a leap year\n");
    }
    return 0;
}