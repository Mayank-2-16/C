#include<stdio.h>
#include<math.h>
int main(){
    
    int num, i=1;
    printf("Type a number\n");
    scanf("%d", &num);

    //i=sqrt(num);

    while(i>0){
        if(num%i==0 && num !=2){
            printf("Number is not prime");
            break;

        }else{
            printf("The number is prime");
            break;
            }
        }
            
        i--;
    }
    //return 0;


