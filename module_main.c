#include <stdio.h>
#include "module_str.h"

int main(){
    char str1[20];
    char str2[20];

    scanf("%s",str1);
    scanf("%s",str2);

    if(compare(str1, str2)){
        printf("%s 와 %s 는 같은 문장입니다. \n", str1, str2);
    }
    else {
        printf("%s 와 %s 는 다른 문장입니다. \n", str1, str2);
    }
    return 0;
}

/*
1. gcc .\module_func.c -c, gcc .\module_main.c -c 를 입력하면 module_func.o, module_main.o 파일이 생성된다.

2. gcc .\module_func.o .\module_main.o -o module_compile 를 입력하면 
    module_compile.exe 파일이 생성되고 빌드가 완료된다. 

3. .\module_compile.exe 를 입력하면 완성된 파일을 실행시킬 수 있다.
*/