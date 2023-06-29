/*fopen() �Լ��� 'append' ��� ��� */
/*#include <stdio.h>
int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","a");
    // "a" �� �����̱�(append) �������� ������ ���ٴ� �ǹ��̴�.
    // ������ "w" �� ������ ������ ��� �������� ��ſ� �� �տ������� ������ �������µ�
    // �����̱� ������ ��� ���� ������ ������ ��ȣ�Ͽ� �ǵڿ������� ������ ����.
    char c;
    if(fp==NULL){
        printf("failed to open...\n");
        return 0;
    }
    fputs("IS added something",fp);
    fclose(fp);
    return 0;
}
// "a+" �� "w+", "r+" �� ���������� �����̱�� �бⰡ ��� �����ϴ�.*/

/* fscanf() �Լ� */
/*#include <stdio.h>

int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","r");
    char data[100];

    if(fp==NULL){
        printf("failed to open...\n");
        return 0;
    }

    printf("----Received inputs words----\n");

    while(fscanf(fp,"%s",data)!=EOF){
        // fscanf() �Լ��� ù��° ���ڷ� �Է��� ���� ��Ʈ���� ���ְ�
        // ������ �� ���ڴ� scanf() �Լ��� �����ϴ�.
        // �� fscanf(stdin, "%s", data); ��
        // scanf("%s",data); �� ��Ȯ�� ��ġ�ϴ� �����̴�.
        // ���� fscanf() �Լ��� scanf() �Լ� ���� �Ϲ�ȭ�� �Լ���� �� �� �ִ�.

        // fgets() �Լ��� '\n' �� ���� �� ���� �ϳ��� ���ڿ��� ���� �޾Ƶ�������
        // fscanf() �Լ��� ���⳪ �� ���� �� �� ��� �ϳ��� ���� �� ���� �Է� �����Ƿ�
        // ���Ͽ����� �� �ܾ���� �ϳ��� �о���̰� �ȴ�.
        //�� ���Ͽ� 
        // abc def ghijk
        // ��� ������ �ؽ�Ʈ ������ ������ 
        // ���ڿ� data���� abc �� ������ �ǰ� while() ���� ���� ������ def, �� ������ ghijk �� ������ �ȴ�.
        // ���� fscanf() �� ���̻� ���ο� �����͸� �Է¹��� �� ���� ��,
        // �� ������ ���� �����ϸ� EOF �� �����Ѵ�.
        printf("%s\n",data);
    }
    fclose(fp);
    return 0;
}*/

/* ���Ͽ��� 'this' �� 'that' ���� �ٲٱ� */
/*#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","r+");
    char data[100];

    if(fp == NULL){
        printf("failed to open...\n");
        return 0;
    }

    while(fscanf(fp, "%s", data)!=EOF){
        if(strcmp(data, "this")==0){
            fseek(fp, -(long)strlen("this"), SEEK_CUR);     
            //strlen() �Լ��� unsigend long �� ��ȯ�ϴµ� fseek() �Լ��� size_t, �� long int �� ���ڷ� �޴´�. 
            //���� ��������� ĳ����(����ȯ)���� ������ �����Ϸ� ������ �߻��Ѵ�.   
            fputs("that",fp);
            fflush(fp);
        }
    }

    fclose(fp);
    return 0;
}*/
