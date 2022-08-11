// #include<stdio.h>
// int main(){
//     int area(int), side;
//     //int side;

//     printf("Type the side of square\n");
//     scanf("%d", &side);

//     area(side);
//     printf("The area of square of size %d is %d\n", side, area(side));
// }

// int area(int x){
// int y;

// y = x*x;
// return(y);
// }

// #include<stdio.h>
// int main(){
// int factorial(int);
// int num, b;

// printf("Type a number\n");
// scanf("%d", &num);

// factorial(num);
// printf("The value of factorial of %d is %d", num, factorial(num));
// }

// int factorial(int y){
//     int y,z;
//     if(y==0 || y==1){
        
//     }
// }

// #include<stdio.h>
// void display();

// int main(){
//     display();
//     return 0;
// }

// void display(){
//     printf("Hello");
// }

// #include<stdio.h>
// int main(){
//     //int a,b,c;
//     int sum(int a, int b, int c);
//     // printf("Enter 1st Number\n");
//     // scanf("%d", &a);
//     // printf("Enter 2nd Number\n");
//     // scanf("%d", &b);
//     // printf("Enter 3rd Number\n");
//     // scanf("%d", &c);
//     return 0;
// }

// int sum(x,y,z){
//     int result;
//     printf("Enter 1st Number\n");
//     scanf("%d", &x);
//     printf("Enter 2nd Number\n");
//     scanf("%d", &y);
//     printf("Enter 3rd Number\n");
//     scanf("%d", &z);

//     result = x + y + z;
//     //printf("The value of sum is %d", result);
//     return result;
// }

#include<stdio.h>
int sum(int a, int b, int c);
int main(){
    int d;
    d = sum(2,4,6);
    printf("The value of sum is %d", d);
    return 0;
}

sum(x,y,z){
    int result;
    result = x + y + z;
    return result;
}