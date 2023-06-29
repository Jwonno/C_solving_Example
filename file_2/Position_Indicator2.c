/* 파일에서 문자를 하나씩 입력 받는 예제 */
/*#include <stdio.h>

int main(){
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt", "r");
    char c;

    if(fp == NULL){
        printf("READ ERROR!!!\n");
        return 0;
    }

    while((c=fgetc(fp))!=EOF){
        printf("%c",c);
    }

    fclose(fp);
    return 0;
}*/

/* fseek() 함수 예제 */
/*#include <stdio.h>
int main(){
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt", "r");
    char data[10];
    char c;

    if(fp==NULL){
        printf("READ ERROR!!");
        return 0;
    }

    fgets(data, 5, fp);     
    //'\n' 이 나올 때 까지 입력을 받거나 (두번째 인자의 크기-1) 만큼 입력을 받는다.
    //-1을 해주는 이유는 문자열의 맨 뒤에는 항상 NULL 이 들어가야 하기 때문이다.
    printf("data(entered): '%s'\n",data);

    c = fgetc(fp);
    printf("Next charcter: '%c'\n", c);

    fseek(fp, -1, SEEK_CUR);

    c = fgetc(fp);
    printf("What character is printed?: '%c'\n",c);

    fclose(fp);
    return 0;
}*/