#include<stdio.h>
int main(){
 int a[50],i,num;
 printf("Enter the number of elements : ");
 scanf("%d",&num);
 printf("Input the array elements :\n");
 for(i=0;i<num;++i){
 scanf("%d",&a[i]);
 }
 printf("Square of array elements : \n");
 for(i=0;i<num;i++){
 printf("%d",a[i]*a[i]);
 printf("\n");
 }
 return 0;
}
