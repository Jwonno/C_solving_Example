/*���Ͽ��� �Է¹ޱ� (fgets �� a.txt ���� ������ �Է� �޴´�.)*/
/*#include <stdio.h>
int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\a.txt","r");
    //"r" �� �ǹ̴� �б� �������� ������ ���ڴٴ� �ǹ��̴�.
    char buf[20];       //������ �Է¹��� ��
    if(fp == NULL){
        printf("READ ERROR!!\n");
        return 0;
    }
    fgets(buf,20,fp);
    //fgets �� ù��° ���ڿ��� ��� �Է��� �������� �����ϰ�
    //�ι�° ���ڿ��� �Է¹��� ����Ʈ ���� �����ϰ�
    //����° ���ڿ��� � ��Ʈ���� ���� �Է¹������� �����Ѵ�.
    //fgets �� �������� �Է¹޴� ���� ������ �� �ֱ⿡ �����÷ο츦 ������ �� �ִٴ� ���̴�.  
    printf("�Է¹޴� ����: %s \n",buf);
    fclose(fp);
    return 0;
}*/
/* �� ���ھ� �Է¹ޱ� */
/*#include <stdio.h>

int main(){
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\a.txt","r");
    char c;

    while((c = fgetc(fp)) != EOF){      //fgetc �� fp ���� ���� �ϳ��� ���´�. 
        //�� �� ���ھ� �о���̴µ�, ȣ���� ������ ���� ���ڷ� �Ѿ��.
        //���ڿ� �� �������� NULL ���ڷ� ���Ḧ ��Ÿ���� ��ó��
        //������ �� ���������� EOF��� End Of File �� ��Ÿ���� ���� -1 �� �� �ִ�.
        //������ EOF�� ������ ã�ƺ��� -1 �� ����Ǿ��ִ�.
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}*/

/*EOF �� fgetc �� �̿��Ͽ� ������ ũ�� �˾Ƴ���*/
#include <stdio.h>

int main(){
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\a.txt","r");
    int size=0;
    while(fgetc(fp)!=EOF) {size++;}
    printf("The size of this file: %d bytes\n",size);
    fclose(fp);
    return 0;
}