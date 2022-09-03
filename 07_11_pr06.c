// #include<stdio.h>
// int main(){
//     int a[6]={-3,3,-2,2,-1,1};   //Well Done!!!!!
//     int temp=0;
//     for(int i=0;i<6;i++)
//     {
//      if(a[i]>temp){
//         printf("Positive no.\n");
//         }
//     else{
//         printf("Negative no.\n");
//         }
//     }

// return 0;
// }

#include<stdio.h>

void count(int[]);

int main(){

    int arr[5];
    printf("Enter 5 no.\n");
    
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    count(arr);

return 0;
}

void count(int arr[]){

    int c1=0,c2=0;
    for(int i=0;i<5;i++){
        if(arr[i]>0){
            c1++;
            printf("Positive\n");
        }
        else{
            printf("Negative\n");
            c2++;
        }
    }

    printf("\n positive=%d\n negative=%d",c1,c2);
}