#include<stdio.h>

void change(int *i);
int main(){
    int i;
    printf("Enter a value:");
    scanf("%d",&i);
    change(&i);
    printf("Value of i is %d\n",i);
    return 0;
}
void change(int *i)
{
    int a;
    a=10*(*i);
    //*i=a;
}

/*void main(){
  int i=1,j;
  int temp;
  j=*(&i);
  temp=10*j;
  printf("The value of i before changing is %d\n",i);
  printf("The value of i after changing is %d",temp);

getch();
}*/