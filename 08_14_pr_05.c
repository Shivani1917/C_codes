#include<stdio.h>
#include<string.h>

int cpy(char *st2 ,char *st1);

int main(){
     char st1[20] = "Beautyfool";
     char st2[20]= "You";
     char a = strcpy(st2 ,st1);
     printf("String2 is %s",st2);
return 0;
}

char cpy1(char *st2 ,char *st1){
     int *ptr = st1;
     strcpy(st2,st1);
     return st2;

}