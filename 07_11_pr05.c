#include<stdio.h>
void reverse(int *arr, int n){
    int temp;
    for(int i=0; i<(n/2); i++){           //n/2 sirf adhe k liy kyuki tbtk array ulti hogyi hogiiiii...7,6,5,4,3,2,1...
        temp = arr[i];                   //eg.....n=7,i=0
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr,7);
    for(int i=0; i<7; i++){
         printf("The value of %d element is: %d\n", i, arr[i]);
    }
    return 0;
}