/*라이브러리의 사용*/
#include <stdio.h>
#include <string.h> //문자열 라이브러리

int main(){
    char str1[20] = {"hi"};
    char str2[20] = {"hello every1"};
    char str3[20] = {"hi"};

    strcpy(str1, str2); //문자열을 복사하는 함수

    printf("str1: %s\n\n", str1);
    //strcmp(parameter1, parameter2): 두 문자열을 비교하여 동일하면 0을, 다르면 1을 출력하는 함수
    if(!strcmp(str1, str2)) printf("%s and %s is equal\n",str1, str2); 
    else printf("%s and %s is not equal\n",str1, str2);

    if(!strcmp(str1, str3)) printf("%s and %s is equal\n",str1, str3);
    else printf("%s and %s is not equal\n",str1, str3);

    return 0;
}