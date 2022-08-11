/* #include<stdio.h>

int main(){
    int i=1, sum = 0, n;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    for(i; i<=n; i++){
        sum = sum + i;
    }
        printf("The value of sum of 8 X 1 to 8 X 10 is %d\n", 8 * sum);
    return 0;

} */

#include<stdio.h>
int main(){
    int num, n = 1;

    printf("Type a number\n");
    scanf("%d", &num);

    while(n<11){

    printf("The value of %d * %d is %d\n", num , n, num * n);
    n++;
    }
    return 0;
}