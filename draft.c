
// #include<stdio.h>

// int main(){
//      int x, y;
//     printf("Enter two integers:\n");
//      scanf("%d" , &x);
//      scanf("%d" , &y);
//      printf("x=%d , y=%d \n",x,y);
//      printf("x+y : %d \n" , x+y );
//      printf("x-y : %d \n" , x-y );
//      printf("x*y : %d \n" , x*y );
//      printf("x/y : %d \n" , x/y );
//      printf("x%%y : %d \n" , x%y );
//      return 0;
// }


// #include<stdio.h>

// int main(){
//      float n1,n2,n3,n4,n5;
//      printf("Enter five numbers: \n");
//      scanf("%f",&n1);
//      scanf("%f",&n2);
//      scanf("%f",&n3);
//      scanf("%f",&n4);
//      scanf("%f",&n5);
//      float sum=n1+n2+n3+n4+n5;
//      printf("The sum of numbers is: %f \n", sum);
//      printf("The average of numbers is: %f \n", sum/5);
//      return 0;
// }

// #include<stdio.h>

// int main(){
//      float p , r , t;
//      printf("Principal amount:\n");
//      scanf("%f", &p);
//      printf("Rate of interest:\n");
//      scanf("%f", &r);
//      printf("Time of investment:\n");
//      scanf("%f", &t);
//      printf("The simple interest is :%f\n", p*r*t/100);
//      return 0;
// }

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
//     int num;
//     printf("Checking whether the given number is prime or not :\n");
//     printf("Enter a number :\n");
//     scanf("%d",&num);
//     int i=2;
//     for (i; i<num; i++){
//         if (num%i == 0){
//             printf("The number entered is not a prime number.\n");
//             break;
//         }
//     }
//     if (i==num){
//         printf("The number entered is a prime number.\n");
//     } 
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int x;
//     while (1){
//         int length=0;
//         printf("Enter a 5-digit number:\n");
//         scanf("%d",&x);
//         int a = x;
//         for(length ; a>0 ; length++){
//             a=a/10;
//         }
//         if (length==5){
//             break;
//         }
//     }
//     int sum=0;
//     for (int i=0 ; i<5 ; i++){
//         sum+=x%10;
//         x/=10;
//     }
//     printf("The sum of digits of the given 5-digit number is:%d\n",sum);
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>

// int main(){
//     int num;
//     printf("Conversion of Decimal to Binary->\n\n");
//     printf("Enter a number in Decimal value :\n");
//     scanf("%d", &num);
//     int i=0;
//     int binary=0;
//     while(num!=0){
//         binary+=pow(10,i)*(num%2);
//         i++;
//         num = num/2;
//     }
//     printf("The binary of given decimal is : %d\n",binary);
//     printf("Conversion of Binary to Decimal->\n");
//     int binary_form;
//     printf("Enter binary form of a number :\n");
//     scanf("%d",&binary_form);
//     int a = binary_form;
//     int l=0;
//     for(l ; a>0 ; l++){
//         a=a/10;
//     }
//     int decimal=0;
//     for (int i=0 ; i<l ; i++){
//         decimal+=pow(2,i)*(binary_form%10);
//         binary_form/=10;
//     }   
//     printf("The decimal of given binary is : %d\n",decimal);
//     return 0; 
// }


// #include<stdio.h>

// int main(){
//     char grade;
//     printf("Enter your grade(in caps) :\n");
//     scanf("%c",&grade);
//     switch (grade)
//     {
//     case 'A':
//         printf("Your percentage is between 91-100%.\n");
//         break;
//     case 'B':
//         printf("Your percentage is between 81-90%.\n");
//         break;
//     case 'C':
//         printf("Your percentage is between 71-80%.\n");
//         break;
//     case 'D':
//         printf("Your percentage is between 61-70%.\n");
//         break;
//     default:
//         printf("Your percentage is below 60%.\n");
//         break;
// }
// }


// #include<stdio.h>
// #include<math.h>

// int main(){
//     int a = 0;
//     int b = 1;
//     int c,num;
//     printf("Enter number of terms required for fabonacci:\n");
//     scanf("%d",&num);
//     printf("%d, %d, ",a,b);
//     int i=1;
//     while( i < num-1){
//         c = a + b;
//         printf("%d, ",c);
//         a = b;
//         b = c;
//         i++;
//     }
//     return 0;
// } 


// #include<stdio.h>
// #include<math.h>

// int main(){
//     int num;
//     while (1){
//         int len=0;
//         printf("Enter a 5-digit number:\n");
//         scanf("%d",&num);
//         int a = num;
//         for(len ; a>0 ; len++){
//             a=a/10;
//         }
//         if (len==5){
//             break;
//         }
//     }
//     int rev_num=0;
//     for (int i=0 ; i<5 ; i++){
//         rev_num+=pow(10,(4-i))*(num%10);
//         num/=10;
//     }
//     printf("The reverse of given 5-digit number is: \n%d\n",rev_num);
//     return 0;
// }


// #include<stdio.h>
//     int main(){
//         int i = 1,n;
//         scanf("%d",&n);
// while(i <= n){
//         int j = 1;
//     while(j <= i){
//         printf("*");
//         j++;
//     }
//     printf("\n");
//     i++;
// }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             printf("%d",n-j+1);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
// }

// #include<stdio.h>
// void pattern(int n);
// int main(){
//     int n=4;
//     pattern(n);
//     return 0;
// }

// void pattern(int n){
//     if(n==1){
//         printf("*\n");
//         return;
//     }
//         pattern(n-1);
//         for(int i=1;i<(2*n-1);i++){
//             printf("*",i);
//     }
//     printf("\n");
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     long req=0,mf=1;
//     for(int i=0;n>0;i++){
//         req=req+(n%2)*mf;
//         n=n/2;
//         mf=mf*10;
//     }
//     printf("%lu", req);
// }

// #include<stdio.h>
// int factorial(int x);
// int main(){
//     int num,y;
//     printf("Type the number whose factorial is to be calculated: ");
//     scanf("%d", &num);
//     y = factorial(num);
//     printf("The factorial of the number is: %d",y);
//     return 0;
// }

// int factorial(int x){
//     int f=1;
//         for(int i=x;i>=1;i--){
//             f=f*i;
//     }
//     return (f);
//     // if(x==0||x==1){
//     //     return(1);
//     // }
//     // return factorial(x)=factorial(x-1)*x;
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//     int x,y;

//     printf("Enter a number: ");
//     scanf("%d", &x);

//     printf("Enter its power: ");
//     scanf("%d", &y);

//     printf("The value is : %f", pow(x,y));
// }


// #include<stdio.h>  Wrong Code!!!!!!!
// #include<math.h>
// int main(){
//     int num,i,k,l;
//     printf("Enter the number of digits: ");
//     scanf("%d",&i);
//     printf("Enter a six digit number: ");
//     scanf("%d",&num);
//     printf("Enter the number of time it must be reversed: ");
//     scanf("%d", &k);

//     // while(i<6){
//     //     int x = pow(10,i);
//     //     int u = num%x;
//     //     int y = x/10;
//     //     int z =u/y;
//     //     printf("%d",z);
//     //     i++;
//     // }

//     while(k>=0){
//         int x = pow(10,6-i);
//         l = num%x;
//         printf("%d",l);
//         k--;
//         i--;
//     }
// }

// #include<stdio.h>
// int swap(int *x,int *y);
// int main(){
//     int a = 10;
//     int b = 20;

//     swap(&a,&b);
//     printf("Value of a is %d , b is %d", a, b);
// }


// int swap(int *x, int *y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//

// #include<stdio.h>
// int main(){
//     int a = 10;
//     int b = 20;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf("%d  %d", a, b);
// }

// #include<stdio.h>
// int main(){
//     int num,i=0;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     while(i*i<num){
//         i++;
//     }
//     printf("%d", i-1);
// }

// #include<stdio.h>
// int main(){
//     int x,i=7;

//     while(i>0){
//         printf("Type: ");
//         scanf("%d", &i);
//         printf("x%d\n", i);
//         i--;
//     }

// }

// #include<stdio.h>
// int main()
// {
//  int A,B;
//      printf("Enter Operands: \n");
//      scanf("%d",&A);
//      scanf("%d",&B);
//     printf("A and B is %d\n", A&&B);
//     printf("A or B is %d\n", A||B);
//     printf("not A is %d\n", !A);
 
//  return 0;
//  }

// #include<stdio.h>
// int main(){
// int a,b;
//     printf("Enter Operands: ");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     printf("a<b is ");
//     printf("%d\n",a<b);
//     printf("a<=b is ");
//     printf("%d\n",a<=b);
//     printf("a>b is ");
//     printf("%d\n",a>=b);
//     printf("a>=b is ");
//     printf("%d\n",a>=b);
//     printf("a==b is ");
//     printf("%d\n",a==b);
//     printf("a!=b is ");
//     printf("%d\n",a!=b);
// return 0; 
// }

// #include<stdio.h>
// int main(){
// int a,b,x;
// printf("Enter the value of a: ");
// scanf("%d", &a);
// printf("Enter the value of b: ");
// scanf("%d", &b);
// x= a+b;
// printf("The value of a+b is: %d\n",x);
// x= a-b;
// printf("The value of a-b is: %d\n",x);
// x= a*b;
// printf("The value of a*b is: %d\n",x);
// x= a/b;
// printf("The value of a/b is: %d\n",x);
// x= a%b;
// printf("The value of a%b is: %d\n",x);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a,b;
//     printf("Enter Operands: \n");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     printf("A & B is %d\n", a&b);
//     printf("A | B is %d\n", a|b);
//     printf("A << B is %d\n", a<<b);
//     printf("A >> B is %d\n", a>>b);
//     printf("~A is %d\n", ~a);
//     printf("A ^ B is %d\n", a^b);
// return 0;
// }

// #include <stdio.h>
// int main()
// {
// int num;
//     printf("Enter the integer: ");
//     scanf("%d", &num);
//     if (num%2==0)
//     printf("It is Even\n");
//     else
//     printf("It is Odd\n"); 
// return 0;
// }

// #include<stdio.h>
// #include<math.h>

// int main(){

//     int a, b, c, d, e, k;

//     printf("Type a five digit number\n");
//     scanf("%d", &k);

//     printf("Reverse of the typed number is\n");
//     printf("%d", k%10);
//     printf("%d", (k%100-k%10)/10);
//     printf("%d", (k%1000-k%100)/100);
//     printf("%d", (k%10000-k%1000)/1000);
//     printf("%d\n", (k%100000-k%10000)/10000);

//     return 0;

// }

// #include<stdio.h>
// int fact(int num);
// int main(){
//  int num;
//  printf("Enter an integer: ");
//  scanf("%d",&num);
//  printf("Factorial of the given number is: %d", fact(num));
//  return 0;
// }
// int fact(int num){
//  if(num>=1)
//  return num*fact(num-1);
//  else
//  return 1;
// }

// #include<stdio.h> 
// int factorial (int n); 
// int main(){
// int n;
// printf("Enter number of elements: "); 
// scanf("%d", &n);

// int *p= &new;
// int [n];
// for(int i=0;i<=n-1; i++)
// {
// printf("p[%d] :", i);
// scanf("%d", & p[i]);
// }

// int item;
// printf("Enter the item to be searched");
// scanf("%d", &item);
// for (int i=0; i<=n; i++){ if (p[i]==item)
// printf("It is found at index %d", i);
// }

// }

// #include<stdio.h>
// int fact(int n);
// int main(){
//  int n;
//  printf("Enter number of elements: ");
//  scanf("%d", &n);
//  int arr[n];
//  for(int i=0;i<=n-1; i++)
//  {
//  printf("arr[%d] :", i);
//  scanf("%d", &arr[i]);
//  }
//  int item;
//  printf("Enter the item to be searched: ");
//  scanf("%d", &item);
//  for (int i=0; i<=n; i++){
//  if (arr[i]==item)
//  printf("It is found at index %d", i);
//  } 
//  }

// #include<stdio.h>
// int main()
// {
//  int num, result;
//  printf("Enter number of elements: ");
//  scanf("%d", &num);
//  int arr[num];
//  for(int i=0;i<=num-1; i++)
//  {
//  printf("arr[%d]:", i);
//  scanf("%d", &arr[i]);
//  }
//  int item;
//  printf("Enter the item to be searched: ");
//  scanf("%d", &item);
 
//  int low=0;
//  int high=num-1;
//  while(low<=high)
//  {
//  int mid=(low+high)/2;
//  if (item>arr[mid])
//  low=mid+1;
//  else if (item<arr[mid])
//  high=mid-1;
//  else{
//  result=mid;
//  break;
//  }
//  }
//  printf("%d is present at %d index", item, result);
// }

// #include<stdio.h>
// int main(){

//  int num, res;
//     printf("Enter number of elements: ");
//     scanf("%d", &num);
//  int arr[num];
//  for(int i=0;i<=num-1; i++)
//  {
//     printf("arr[%d] :", i);
//     scanf("%d", &arr[i]);
//  }
 
//  for (int count=0; count<=num-2; count++){
//       for (int j=0; j<=count; j++){
//           if(arr[j]>arr[j+1]) {
//  int temp=arr[j];
//  arr[j]=arr[j+1];
//  arr[j+1]=temp;
//         }
//     }
//  } 
//     printf("Sorted array is [");
//  for(int i=0;i<=num-1; i++){
//     printf("%d, ", arr[i]);
//     }
//     printf("]");
    
//  return 0;   
// }

// #include<stdio.h>
// int main()
// {
//  int num;
//     printf("Enter number of elements in the array: ");
//     scanf("%d", &num);
//  int arr[num];
//  for(int i=0;i<=num-1; i++){
//     printf("arr[%d] :", i);
//     scanf("%d", &arr[i]);
// }

//  for(int count=0; count<=num-2; count++ ){
//     int minival=count;
//     for(int j=count+1;j<num-1;j++){
//         if(arr[j]<arr[minival]){
//             minival=j;
//         }
//     }
//     int temp=arr[count];
//     arr[count]=arr[minival];
//     arr[minival]=temp;
//  }

//     printf("Sorted array is [");
//  for(int i=0;i<=num-1; i++){
//     printf("%d, ", arr[i]);
// }
//     printf("]");
    
//  return 0;
// }

// #include<stdio.h>
// int main(){
//     int num;
//         printf("Enter number of elements: ");
//         scanf("%d", &num);
//     int arr[num];
//     for(int i=0;i<=num-1; i++){
//         printf("arr[%d] :", i);
//     scanf("%d", &arr[i]);
// }
 
//  for(int count=1; count<=num-1; count++){
//     int item=arr[count];
//     int j=count-1;
//  while(j>=0 && arr[j]>item){
//     arr[j+1]=arr[j];
//     j-- ;
//     }
//  arr[j+1]=item;
//  }

//     printf("Sorted array is [");
//  for(int i=0;i<=num-1; i++){
//     printf("%d, ", arr[i]);
//  }
//     printf("]");

// return 0;
// }

// #include<stdio.h>
// int main(){
//    int n ,i=0;
//    printf("Type the number of elements in the array : ");
//    scanf("%d", &n);
//       int arr[n], sum = 0;

//    while(i<n){
//       printf("arr[%d] = ", i);
//       scanf("%d", &arr[i]);
//       //sum = sum + arr[i];
//       i++;
//    }
//    //printf("Sum is %d", sum);
//    int j = 0;
//    int k = 0;
//    while(j<n && k<n){
//    if(arr[j]>=arr[k]){
//       k++;
//    }
//    else{
//       int k = 0;
//       j++;
//       //break;
//       }
//    }
//    //printf("%d\n", j);
//    printf("largest number is %d", arr[j]);
// }

// #include<stdio.h>
// int main(){
//    int n , search;
//    printf("Type the number of elements in the array : ");
//    scanf("%d", &n);
//       int arr[n], sum = 0;

//    for(int i = 0; i < n ; i++){
//       printf("arr[%d] = ", i);
//       scanf("%d", &arr[i]);
//    }
//    printf("Type the number to be searched : ");
//    scanf("%d", &search);

//    for(int j=0; j<n; j++){
//    if(search==arr[j]){
//       printf("The number is present at index %d", j);
//       break;
//       }
//    }
// }

// #include<stdio.h>
// int main(){
//     int x;
    
//     printf("Type the number of elements in the array : ");
//     scanf("%d", &x);
//     int arr[x];

//     for(int i = 0; i < x ; i++){
//        printf("arr[%d] = ", i);
//        scanf("%d", &arr[i]);
//    }

//    for(int j = 0 ; j < x/2 ; j++){
//        int temp;
//        temp = arr[x-j-1];
//        arr[x-j-1] = arr[j];
//        arr[j] = temp; 
//    }

//     for(int k = 0 ; k < x ; k++){
//         printf(" hello arr[%d] : %d\n", k, arr[k]);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){

// int a = 5 ;
// int b = 8 ;
// int c = -10 ;
// if(a = a > b < c)
// {
// printf("If : %d %d %d\n", a, b , c) ;
// if(b = a -= b += c)
// {
// printf("IfIf : %d %d %d\n", a, b , c) ;
// }
// else
// {
// printf("IfElse : %d %d %d\n", a, b , c) ;
// }
// }
// else
// {
// printf("Else : %d %d %d\n", a, b , c) ;
// if(b = b += c -= a)
// {
// printf("ElseIF : %d %d %d\n", a, b , c) ;
// }
// else
// {
// printf("ElseElse : %d %d %d\n", a, b , c) ;
// }
// }

// }


// #include<stdio.h>
// int main(){
//     int i=0;
//     char word[100];
//     printf("Enter a word : ");
//     scanf("%s", word);
//     while (word[i] !='\0'){
//         i++;
//     }
//     printf("The length of the word is : %d", i);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     int k=0;
//     char str[100];
//     char vowel[]={'a', 'e', 'i', 'o', 'u'};
//     printf("Enter a string : ");
//     scanf("%s", str);
//     int n=strlen(str);
//     for (int i=0; i<n; i++){
//         for (int j=0; j<5; j++){
//             if (str[i]==vowel[j]){
//                 k++;
//             }
//         }
//     }

//     printf("Number of vowels are : %d", k);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     int r = 0;
//     char str[100];
//     printf("Enter a string : ");
//     scanf("%s", str);
//     int n = strlen(str);
//     char arr[n];
//     printf("The reversed string is : ");
    
//     for (int i = n; i > 0; i--){
//         arr[n - i] = str[i-1];
//         printf("%c", arr[n-i]);
//     }

//     printf("\n");
//     for (int i = 0; i < n; i++){
//         if (arr[i] != str[i]){
//             r = -1;
//             break;
//         }
//     }
//     if (r == -1){
//         printf("String is not a palindrome.");
//     }
//     else{
//         printf("String is a palindrome.");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[100], str2[100]; 
//     printf("Enter a string : ");
//     scanf("%s", str1);
//     printf("Enter another string : ");
//     scanf("%s", str2);
//     strcat(str1, str2);
//     printf("Concatenated string : %s", str1);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char s1[100], s2[100]; 
//     printf("Enter a string : ");
//     scanf("%s", s1);
//     printf("Enter another string : ");
//     scanf("%s", s2);
//     int a=strcmp(s1, s2);
//     if(a==0){
//         printf("Same string");
//     }
//     else{
//         printf("Different string");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100]; 
//     printf("Enter a string : ");
//     scanf("%s", str);
//     strrev(str);
//     printf("Reversed string : %s", str);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s[100];
//     printf("Enter a string : ");
//     scanf("%s", s);
//     int n=strlen(s);
//     for (int i=0; i<n; i++){
//         if (s[i]>='a' && s[i]<='z'){
//             s[i]= s[i]-32;
//         }
//         else if (s[i]>='A' && s[i]<='Z'){
//             s[i]= s[i]+32;
//         }
//     }
//     printf("The string after conversion is : %s", s);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[3][3];
//     int arr1[3][3];
//     int arr2[3][3];
//     printf("Enter the elements in the first matrix : \n");
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("Index %d%d : ", i+1, j+1);
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     printf("\n\n");
//     printf("Enter the elements in the second matrix : \n");
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("Index %d%d : ", i+1, j+1);
//             scanf("%d", &arr2[i][j]);
//         }
//     }
    
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             arr[i][j]= arr1[i][j] + arr2[i][j];
//         }
//     }

//     printf("\n\n");
//     printf("Sum of two matrices is : \n");
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0; 
// }

// #include<stdio.h>
// int main(){
//     int arr[3][3]={};
//     int arr1[3][3];
//     int arr2[3][3];
//     printf("Enter the elements of the first matrix : \n");
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("Index %d%d : ", i+1, j+1);
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     printf("\n\n");

//     printf("Enter the elements of the second matrix : \n");
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("Index %d%d : ", i+1, j+1);
//             scanf("%d", &arr2[i][j]);
//         }
//     }

//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             for (int k=0; k<3; k++){
//                 arr[i][j] += ((arr1[i][k])*(arr2[k][j]));
//             }
//         }
//     }    

//     printf("\n\n");
//     printf("Product of two matrices is : \n");
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3; j++){
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }

    
//     return 0; 
// }

// #include <stdio.h>
// void swap();
// int main(){
//     int a, b;
//     printf("Enter 2 numbers : \n");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     printf("Numbers before swap : %d %d\n", a, b);
//     swap(&a, &b);
//     printf("Numbers after swap  : %d %d", a, b);
//     return 0;
// }

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

#include<stdio.h>
int main(){

    int a , b ;

    printf("Type 1st number");
    scanf("%d", &a);
    printf("Type 2nd number");
    scanf("%d", &b);

    if(a > b){
        printf("1st");
    }
    else if(a < b){
        printf("Type 2nd number");
    }

}
