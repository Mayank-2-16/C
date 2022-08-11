#include<stdio.h>
int main()
{
    int num, i=1, sum = 0;

    printf("Type a number\n");
    scanf("%d", &num);

    while(i <= num)
    {
        i++;
        sum = sum + i;
        printf("%d", sum);
       
    }
    return 0;
}