#include<stdio.h>
#include<conio.h>
void func(int a);

int main(){
    int i;
    printf("The value of i:");
    scanf("%d",&i);
    printf("The Address of i is %u \n",&i);
    func(i);
    
return 0;
}
void func(int a){
    printf("The Address of i is %u",&a);
  
}




/*#include<stdio.h>     //By Harry Sir

void printAdd(int a){
    printf("The address of variable a is %u\n", &a);
}

int main(){
    int i = 4;
    printf("The value of variable i is %d\n", i);
    printAdd(i);
    printf("The address of variable i is %u\n", &i);
    return 0;
}*/