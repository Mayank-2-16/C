#include<stdio.h>
int main(){

int a, k;

printf("Enter a starting Number\n");
scanf("%d", &a);
printf("Enter finishing Number\n");
scanf("%d", &k);

printf("here you GO!!!!\n");

do{
    printf("%d\n", a);
    a++;
    if(a==k+1){
        break;
    }
}while(a<=18);

return 0;
}