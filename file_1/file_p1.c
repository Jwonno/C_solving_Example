//����ڷ� ���� ��θ� �Է� �޾Ƽ� �� ���� ������ �����ϰ� a �� �Է��س��� ���α׷��� ��������
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