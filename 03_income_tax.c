#include<stdio.h>
#include<math.h>

int main(){

    float salary;

    printf("Type your salary in lakhs per annum\n");
    scanf("%f", &salary);

    if(salary<=2.5){
        printf("You have to pay no income tax\n");
    }
    else if(salary>=2.5 && salary<=5){
       printf("The income tax to be paid by you is %f\n", salary*0.05); 
    }
    else if(salary>=5 && salary<=10){
       printf("The income tax to be paid by you is %f\n", salary*0.2); 
    }
    else{
       printf("The income tax to be paid by you is %f\n", salary*0.3); 
    }
    return 0;
}