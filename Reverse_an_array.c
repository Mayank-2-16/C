#include<stdio.h>
int main(){
    int n;
    //int arr[n];  --> Error!!!!  Only upto arr[2]
    
    printf("Type the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n ; i++){
       printf("arr[%d] = ", i);
       scanf("%d", &arr[i]);
   }

   for(int j = 0 ; j < n/2 ; j++){
       int temp;
       temp = arr[n-j-1];
       arr[n-j-1] = arr[j];
       arr[j] = temp; 
   }

    for(int k = 0 ; k < n ; k++){
        printf(" hello arr[%d] : %d\n", k, arr[k]);
    }

    return 0;
}