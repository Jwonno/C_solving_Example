#include <stdio.h>
//�Է¹޴� �л����� ������ ���� ������ �����Ͽ� ����׷����� ��Ÿ��������

int main(){
    int student[5]={0};
    int temp[5]={0};
    printf("�л����� ������ �Է����ּ���(10�� ����): ");
    for(int i=0;i<5;i++){
        scanf("%d",&student[i]);
    }
    printf("[���� �׷���]\n");
    for(int i=0;i<5;i++){
        printf("%d��° �л�: ",i+1);
        for(int k=0;k<student[i];k++){
            printf("*");
        }
        printf("\n");
    }
   
    return 0;
}