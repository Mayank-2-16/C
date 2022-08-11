#include<stdio.h>
#include<math.h>

//void area(int a);
int main(){
    int side;
    printf("Enter the side of the square\n");
    scanf("%d", &side);
    //void area(a);
    printf("The area is %f", pow(side,2));
    //void area();
    return 0;
}

// void area(int a){
//     a = side * side;
// }

// #include<stdio.h>
// int main(){
//     int area(int);
//     int side;

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