/* fopen() 함수에 "+r" 인자 이용하기 */
/*#include <stdio.h>
int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","r+");
    //"r+" 는 파일을 읽기 및 쓰기 형식으로 열겠다는 의미인데
    // 파일이 존재하지 않는다면 열지도 않겠다는 의미다.
    // 만약 파일이 존재한다면 파일의 내용을 '지우지 않는다.'
    // 반면에 "w+" 는 파일이 존재하지 않는다면 파일을 새로 만들고
    // 만약 파일이 존재한다면 파일의 내용을 모두 '지워버린다.'

    char data[100];

    fgets(data, 100, fp);
    // 최대 100바이트까지 읽지만 파일의 내용은 100바이트 보다 작으므로 파일의 내용을 모두 읽었다고 할 수 있다.
    // 이와 함께 파일 위치 지정자도 파일의 맨 마지막을 가리키고 있다.
    printf("Current content in this file: '%s'\n",data);

    fseek(fp, 5, SEEK_SET);

    fputs("is nothing on this file",fp);

    fclose(fp);
}*/
/* 파일의 대문자를 소문자로, 소문자를 대문자로 바꾸는 프로그램(잘못된 코드) */
/*#include <stdio.h>
int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","r+");
    char c;

    if(fp == NULL){
        printf("failed to open...\n");
        return 0;
    }

    while((c=fgetc(fp))!=EOF){
        if(65<=c&&c<=90){
            c+=32;
            fseek(fp, -1, SEEK_CUR);
            fputc(c,fp);
        }
        else if(97<=c&&c<=122){
            c-=32;
            fseek(fp, -1, SEEK_CUR);
            fputc(c,fp);
        }
    }

    fclose(fp);
    return 0;
}
// 위와 같은 코드를 그대로 실행하면 파일이 예상치 못한 상태로 변하게 된다.
// 쓰기 작업 후 다시 읽기 작업 (while 문에서 fputc 를 통해 읽기 작업이 수행된다) 을 할 때 
// fflush 나 fseek 함수를 호출해줘야 한다.*/
/* 파일의 대문자를 소문자로, 소문자를 대문자로 바꾸는 프로그램(고친 코드) */
/*#include <stdio.h>
 int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","r+");
    char c;

    if(fp==NULL){
        printf("failed to open...\n");
        return 0;
    }

    while((c=fgetc(fp))!=EOF){
        if(65<=c&&c<=90){
            fseek(fp, -1, SEEK_CUR);
            fputc(c+32,fp);
            //쓰기 - 읽기 모드 전환을 위해서는 무조건
            //fseek 함수와 같은 파일 위치 지정자 설정 함수들을 호출해야 한다.
            fseek(fp, 0, SEEK_CUR);     
            //파일 위치 지정자의 위치를 설정하기 위함이 아닌 모드 전환을 위한 fseek() 함수
            //fflush(fp); 로도 가능하다.
        }
        else if(97<=c&&c<=122){
            fseek(fp, -1, SEEK_CUR);
            fputc(c-32,fp);
            fseek(fp, 0, SEEK_CUR);
        }
    }

    fclose(fp);
    return 0;
 }*/
