#include<stdio.h>
void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d is :\n", num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%dX%d = %d\n", num, i+1, mulTable[i]);
    }
    printf("******************************************************\n\n");
}

int main(){
    int mulTable[3][10];
    int x,y,z;
    printf("the x,y,z is: ");
    scanf("%d\t%d\t%d\n",&x,&y,&z);
    printTable(mulTable[0], x,10);
    printTable(mulTable[1], y,10);
    printTable(mulTable[2], z,10);
    return 0;
}