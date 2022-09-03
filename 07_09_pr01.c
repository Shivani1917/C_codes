#include<stdio.h>

int main(){    //we have to check ki ptr+2==array ka 3rd element
    int arr[10];
    // int *ptr = &arr[0];
    int *ptr = arr;   //int = 4bytes
    ptr = ptr+2;
    if(ptr==&arr[2]){
        printf("These point to the same location in memory\n");
    }
    else{
        printf("These do not point to the same location in memory\n");
    }

    return 0;
}