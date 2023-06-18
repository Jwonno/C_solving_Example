/*메모리의 배치 모습*/

#include <stdio.h>
int global = 3;
int main(){
    
    char *str="Hello, Baby";
    int i;
    char arr[20] = "WHATTHEHECK";

    printf("global: %p\n",&global);
    printf("i: %p\n", &i);
    printf("str: %p\n",str);
    printf("arr: %p\n",arr);
}