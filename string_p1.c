#include <stdio.h>
//�� ���� ���ڿ��� ���ϴ� �Լ��� ���� ������ 1, �ٸ��� 0 �� �����ϰ� �غ�����.
int comp(char *str_a, char *str_b){
    for(int i=0;i<3;i++){
        if(str_a[i]!=str_b[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str_a[4]="abc";
    char str_b[4]="abc";
    printf("%d",comp(str_a, str_b));
    return 0;
}