//���±��� ���Ͽ��� �Է��� ���� �� ������ ������ ���� �κп��� �� �κ����� �Է��� �� �޾� ������.
//�� ������ �Է¹޾Ҵ� �����ʹ� �ٽ� �Է¹��� �ʾҴµ� �̰��� ������ ������ ���� ��ġ ������ �����̴�.
/*#include <stdio.h>
int main(){
    //Alphabet.txt�� abcdefg �� ����ִ� �ؽ�Ʈ �����̴�.
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\Alphabet.txt","r");
    fgetc(fp);      //a �Է�
    fgetc(fp);      //b �Է�
    fgetc(fp);      //c �Է�
    fgetc(fp);      //d �Է�
    //d ���� �Է��� �޾����� ���� ��ġ �����ڴ� ���� e�� ����Ű�� �ִ�.
    fseek(fp, 0, SEEK_SET);
    //fseek() �Լ��� ù��° ������ fp�� 
    //����° ������ 'SEEK_SET'���κ��� 
    //�ι�° ������ '0'��ŭ ������ ������ ���� ��ġ �����ڸ� �缳���Ѵ�.
    //'SEEK_SET' �� ������ �� ó���� ���´� ��ũ�� ����̴�.
    //'SEEK_SET' ���� ������ ��ġ�� ǥ���ϴ� 'SEEK_CUR', ������ �� �������� ǥ���ϴ� 'SEEK_END' �� �ִ�.
    printf("Back to first position of file: %c\n",fgetc(fp));
    fclose(fp);
    return 0;
}*/
/*��� ��Ʈ���� ��������*/
#include <stdio.h>
int main(){
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\a.txt","w");
    fputs("Won Ho is an excellent C programmer",fp);
    fseek(fp, 0, SEEK_SET);     //���� ��ġ �����ڸ� ������ �� ó������ �缳��
    fputs("is Won Ho",fp);      //"Won Ho is"�� "is Won Ho"�� �����.
    fclose(fp);
    return 0;
}