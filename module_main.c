#include <stdio.h>
#include "module_str.h"

int main(){
    char str1[20];
    char str2[20];

    scanf("%s",str1);
    scanf("%s",str2);

    if(compare(str1, str2)){
        printf("%s �� %s �� ���� �����Դϴ�. \n", str1, str2);
    }
    else {
        printf("%s �� %s �� �ٸ� �����Դϴ�. \n", str1, str2);
    }
    return 0;
}

/*
1. gcc .\module_func.c -c, gcc .\module_main.c -c �� �Է��ϸ� module_func.o, module_main.o ������ �����ȴ�.

2. gcc .\module_func.o .\module_main.o -o module_compile �� �Է��ϸ� 
    module_compile.exe ������ �����ǰ� ���尡 �Ϸ�ȴ�. 

3. .\module_compile.exe �� �Է��ϸ� �ϼ��� ������ �����ų �� �ִ�.
*/