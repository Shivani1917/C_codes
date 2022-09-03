#include<stdio.h>

int main(){
    // char str[] = {'S', 'h', 'i' , 'v', 'a', 'n', 'i' , '\0'};
    char str[] = "Shivani";
    char *ptr=str;
    for(int i=0;i<8;i++){
       printf("%c",str[i]);
    }

    return 0;
}