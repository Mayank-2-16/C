#include<stdio.h>
#include<math.h>

int main(){

    char letter;

    printf("Type a character\n");
    scanf("%c", &letter);

    if(letter<=122 && letter>=97){
        printf("It is lowercase letter\n");
    }
    else if(letter<=90 && letter>=65){
        printf("It is an uppercase letter");
    }
    else{
        printf("It is not a letter\n");
    }

    return 0;
}

// A is uppercase letter
// a is lowercase letter