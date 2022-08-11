// #include<stdio.h>

// int main(){
//      int a , b;
//      printf("Enter two integers:\n");
//      scanf("%d" , &a);
//      scanf("%d" , &b);
//      printf("a=%d , b=%d \n",a,b);
//      printf("a+b : %d \n" , a+b );
//      printf("a-b : %d \n" , a-b );
//      printf("a*b : %d \n" , a*b );
//      printf("a/b : %d \n" , a/b );
//      printf("a%%b : %d \n" , a%b );
//      return 0;
// }

// #include<stdio.h>

// int main(){
//      float p , r , t;
//      printf("Principal amount:\n");
//      scanf("%f" , &p);
//      printf("Rate of interest:\n");
//      scanf("%f" , &r);
//      printf("Time:\n");
//      scanf("%f" , &t);
//      printf("The simple interest is :%f\n", p*r*t/100);
//      return 0;
// }



// #include<stdio.h>

// int main(){
//      float p , r , t;
//      printf("Principal amount:\n");
//      scanf("%f" , &p);
//      printf("Rate of interest:\n");
//      scanf("%f" , &r);
//      printf("Time:\n");
//      scanf("%f" , &t);
//      printf("The simple interest is :%f\n", p*r*t/100);
//      return 0;
// }



// #include<stdio.h>

// int main(){
//      float n1,n2,n3,n4,n5;
//      printf("Enter five numbers: \n");
//      scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
//      float sum=n1+n2+n3+n4+n5;
//      printf("The sum of numbers is: %f \n" , sum);
//      printf("The average of numbers is: %f \n" , sum/5);
//      return 0;
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//      int num,n,nod;
//      printf("Enter number of digits: ");
//      scanf("%d", &nod);
//      printf("Type a number: ");
//      scanf("%d", &num);
//      printf("Type number of times to be rotated: ");
//      scanf("%d", &n);

//      n = n % nod;

//      int i = pow(10,n);
//      int x = num%i;
//      int y = (num-x)/i;
     
//      printf("%d%d",x,y);

//      //while()


#include <stdio.h> 
int main (){ 
    int N , i , j , number = 1 ;
    printf ( "Enter the number for Floyd's triangle : " ); 
    scanf ("%d",&N); 
    for ( i = 1 ; i <= N ; i ++) { 
        for ( j = 1 ; j <= i ; ++ j ) { 
            printf ( " %d " , number ); 
            ++number; 
        } 
        printf ( " \n" ); 
    } 
printf("Lavanay Ganotra 2K21/A12/20\n");
return 0 ; 
}

