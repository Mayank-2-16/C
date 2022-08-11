// #include<stdio.h>
// void display();

// int main(){
//     printf("Hey!, Here we go again\n");
//     display();
//     printf("Queendom\n");
//     return 0;
// }

// void display(){
//     printf("Good Morning\n");
// }

#include<stdio.h>
int main(){

    float square(float);
    float a,b;

    printf("Type a number\n");
    scanf("%f",&a);

    b = square(a);
    printf("The square of the number is %f", b);

}

float square(float x){
    float y;
    y = x*x;
    return(y);
}