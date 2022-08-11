#include<stdio.h>
int main(){
   int n , search;
   printf("Type the number of elements in the array : ");
   scanf("%d", &n);
      int arr[n], sum = 0;

   for(int i = 0; i < n ; i++){
      printf("arr[%d] = ", i);
      scanf("%d", &arr[i]);
   }
   printf("Type the number to be searched : ");
   scanf("%d", &search);

   for(int j=0; j<n; j++){
   if(search==arr[j]){
      printf("The number is present at index %d", j);
      break;
      }
   }
}