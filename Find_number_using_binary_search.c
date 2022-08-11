#include<stdio.h>
int main(){
    int n = 4, num = 20;
    int arr[n], result = -1, mid;

    for(int i = 0; i < n ; i++){
      printf("arr[%d] = ", i);
      scanf("%d", &arr[i]);
   }

   int lo = 0;
   int hi = n-1;

    while(lo < hi){
            mid  = lo + ( hi - lo )/2;
        if(arr[mid] < num){
            lo = mid + 1;
        }
        else if(arr[mid] > num){
            hi = mid - 1;
        }
        else {
            break;
        }
    }
    printf("index %d", mid);
}