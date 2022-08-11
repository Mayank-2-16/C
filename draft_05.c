/*#include<stdio.h>
int main(){
    int num, i=1, sum;

    printf("Type a number\n");
    scanf("%d", &num);

    while(i < num){
        i++;
        sum = sum + i;
        if(i = num){
            printf("%d\n", sum);
        }

        printf("%d", sum);
        
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int num, i=1, sum=0;
    printf("Type a number\n");
    scanf("%d", &num);

    while(i<=num)
    {
        sum=sum+i;
        i++;
    }
       printf("%d",sum);
    return 0;
}