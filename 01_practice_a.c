#include<stdio.h>

int main(){
    int length, breadth;
    printf("Length and Breadth:");
    scanf("%d\t%d",&length,&breadth);
    int area = length*breadth;
    printf("The area of this rectangle is %d", area);
    return 0;
}