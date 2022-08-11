// #include<stdio.h>

// int main(){
// int factorial(int a);
//     int a;
//     printf("Type a number\n");
//     scanf("%d", &a);
//     printf("The factorial of %d is %d", a, factorial(a));
//     return 0;
// }

// int factorial(int a){
//     if(a==0 || a==1){
//         return 1;
//     }
//     else{
//         return a*factorial(a-1);
//     }
// }

#include<stdio.h>
int main(){
    int factorial(int x);
    int x, fact;
    printf("Enter a number\n");
    scanf("%d",&x);
    fact = factorial(x);
    printf("The factorial of %d is %d", x, fact);
    return 0;
}

int factorial(int x){
    int f;
    if(x==0 || x==1){
        return 1;
    }
    else{
        f = x*factorial(x-1);
        return f;
    }
}