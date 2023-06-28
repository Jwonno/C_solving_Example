//사용자로 부터 경로를 입력 받아서 그 곳에 파일을 생성하고 a 를 입력해놓는 프로그램을 만들어보세요
#include <stdio.h>
#define MAX 100
int main(){
    char path[MAX];
    printf("Enter the Path: ");
    scanf("%s",path);
    FILE*fp = fopen(path,"w");
    if(fp == NULL){
        printf("Write ERROR!!\n");
        return 0;
    }
    fputs("a",fp);
    fclose(fp);
    return 0;
}