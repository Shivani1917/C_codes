#include<stdio.h>
#include<conio.h>
int main(){
    int i;
    printf("The value of i:");
    scanf("%d",&i);
    printf("The Address of i is %u\n",&i);
    printf("The value of i is %d",*(&i));

return 0;
}


/*#include<stdio.h>  //By Harry Sir

int main(){
    int a=6;
    int *ptr;
    ptr = &a;
    printf("The value of variable a is %d\n", a);
    printf("The address of variable a is %u\n", ptr);
    printf("The value of variable a is %d\n", *ptr);
    return 0;
}*/