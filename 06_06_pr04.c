#include<stdio.h>
void sum(int a,int b);
void avg(int *sum);

void main(){
    int a,b;
    printf("Values:");
    scanf("%d\t%d",&a,&b);
    sum(a,b,sum);
    printf("sum is %d",sum);
    avg(&sum);
    printf("Average is %d",avg);

}
void sum(int a, int b){
    int *sum;
    int*sum=a+b;
}
void avg(int*s){
    int avg;
    avg==(*sum)/2;

}
/*void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a +b;
    *avg = (float)(*sum)/2;
}

int main(){
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %f \n", avg);
    
    return 0;
}*/