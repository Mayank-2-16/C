// #include<stdio.h>

// void change(int a);
// int main(){

//     int b=344;
//     printf("The value of before change is %d\n", b);
//     change(b);
//     printf("The value of after change is %d\n", b);

//     return 0;
// }

// void change(int a){
//     a = 77;
// }

// #include<stdio.h>

// int main(){
//         int a = 1;
//         // printf("%d %d %d\n", a, a++, ++a);
//         // printf("%d %d %d\n", a++, ++a, a);
//         // printf("%d %d %d\n", ++a, ++a, a);
//         // printf("%d %d %d\n", a, ++a, a++);
//     return 0;
// }

#include<stdio.h>

void change(int a);
int main(){

    int b=344;
    printf("The value of before change is %d\n", b);
    change(b);
    printf("The value of after change is %d\n", b);

    return 0;
}

void change(int b){
    b = 77;
}