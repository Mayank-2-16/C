// #include<stdio.h>

// int main(){

//     return 0;
// }


#include<stdio.h>
int main(){

    float square(float);
    float a,b;

    printf("Type a number\n");
    scanf("%f",&a);

    b = square(a);
    printf("The square of the number is %d", b);

}

float square(float x){
    float y;
    y = x*x;
    return(y);
}