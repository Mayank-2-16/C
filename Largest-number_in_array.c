#include<stdio.h>
int main(){
   int n ,i=0;
   printf("Type the number of elements in the array : ");
   scanf("%d", &n);
      int arr[n], sum = 0;

   while(i<n){
      printf("arr[%d] = ", i);
      scanf("%d", &arr[i]);
      i++;
   }
   int j = 0;
   int k = 0;
   while(j<n && k<n){
   if(arr[j]>=arr[k]){
      k++;
   }
   else{
      int k = 0;
      j++;
      }
   }
   printf("largest number is %d", arr[j]);
}