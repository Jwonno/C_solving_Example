/* ���Ͽ��� ���ڸ� �ϳ��� �Է� �޴� ���� */
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

/* fseek() �Լ� ���� */
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
    //'\n' �� ���� �� ���� �Է��� �ްų� (�ι�° ������ ũ��-1) ��ŭ �Է��� �޴´�.
    //-1�� ���ִ� ������ ���ڿ��� �� �ڿ��� �׻� NULL �� ���� �ϱ� �����̴�.
    printf("data(entered): '%s'\n",data);

    c = fgetc(fp);
    printf("Next charcter: '%c'\n", c);

    fseek(fp, -1, SEEK_CUR);

    c = fgetc(fp);
    printf("What character is printed?: '%c'\n",c);

    fclose(fp);
    return 0;
}*/