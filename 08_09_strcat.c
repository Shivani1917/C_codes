// #include<stdio.h>
// #include <string.h>

// int main(){
//     char st1[45] = "Hello\t";
//     char *st2 = "Harry";
//     strcat(st1, st2);
//     printf("Now the st1 is %s", st1);
//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main(){
    char a[20] = "Hello\n";
    char *b = "Baby";
    strcat(a, b);
    printf("string 1 is \n%s",a);

return 0;
}