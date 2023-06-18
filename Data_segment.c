/*메모리의 배치 모습*/

#include <stdio.h>
int global = 3; 
int main(){
    
    char *str="Hello, Baby";
    int i; //stack에 저장
    char arr[20] = "WHATTHEHECK"; //stack에 저장

    printf("global: %p\n",&global);
    printf("i: %p\n", &i);
    printf("str: %p\n",str);
    printf("arr: %p\n",arr); //i 보다 나중에 추가 된 arr 의 주소값이 더 작다.
}