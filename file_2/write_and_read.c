/* fopen() �Լ��� "+r" ���� �̿��ϱ� */
/*#include <stdio.h>
int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","r+");
    //"r+" �� ������ �б� �� ���� �������� ���ڴٴ� �ǹ��ε�
    // ������ �������� �ʴ´ٸ� ������ �ʰڴٴ� �ǹ̴�.
    // ���� ������ �����Ѵٸ� ������ ������ '������ �ʴ´�.'
    // �ݸ鿡 "w+" �� ������ �������� �ʴ´ٸ� ������ ���� �����
    // ���� ������ �����Ѵٸ� ������ ������ ��� '����������.'

    char data[100];

    fgets(data, 100, fp);
    // �ִ� 100����Ʈ���� ������ ������ ������ 100����Ʈ ���� �����Ƿ� ������ ������ ��� �о��ٰ� �� �� �ִ�.
    // �̿� �Բ� ���� ��ġ �����ڵ� ������ �� �������� ����Ű�� �ִ�.
    printf("Current content in this file: '%s'\n",data);

    fseek(fp, 5, SEEK_SET);

    fputs("is nothing on this file",fp);

    fclose(fp);
}*/
/* ������ �빮�ڸ� �ҹ��ڷ�, �ҹ��ڸ� �빮�ڷ� �ٲٴ� ���α׷�(�߸��� �ڵ�) */
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
// ���� ���� �ڵ带 �״�� �����ϸ� ������ ����ġ ���� ���·� ���ϰ� �ȴ�.
// ���� �۾� �� �ٽ� �б� �۾� (while ������ fputc �� ���� �б� �۾��� ����ȴ�) �� �� �� 
// fflush �� fseek �Լ��� ȣ������� �Ѵ�.*/
/* ������ �빮�ڸ� �ҹ��ڷ�, �ҹ��ڸ� �빮�ڷ� �ٲٴ� ���α׷�(��ģ �ڵ�) */
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
            //���� - �б� ��� ��ȯ�� ���ؼ��� ������
            //fseek �Լ��� ���� ���� ��ġ ������ ���� �Լ����� ȣ���ؾ� �Ѵ�.
            fseek(fp, 0, SEEK_CUR);     
            //���� ��ġ �������� ��ġ�� �����ϱ� ������ �ƴ� ��� ��ȯ�� ���� fseek() �Լ�
            //fflush(fp); �ε� �����ϴ�.
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
