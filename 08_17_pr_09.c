#include<stdio.h>
void present(char *st , char a){
    char *ptr = st;
    if(*ptr=a){
        printf("Present h re baba!");
    }
    else{
        printf("Noi h re baba!!");
    }
    ptr++;
}

int main(){
    char st[20]= "Hello";
    present(st , 'e');     
return 0;
}