#include<stdio.h>

int main(){
     int n,i;

     printf("Enter a number\n");
     scanf("%d", &n);

     for(i=2; i<n; i++){
         

         if(n%i == 0){
             printf("Not Prime\n");
             break;
         }
         else{
             printf("Prime\n");
             break;
         }
     }

    return 0;
}