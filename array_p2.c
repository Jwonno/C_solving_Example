#include <stdio.h>
//�Է¹޴� �л����� ������ ���� ������ �����Ͽ� ����׷����� ��Ÿ��������

int main(){
    int student[5]={0};
    int temp[5]={0};
    printf("�л����� ������ �Է����ּ���: ");
    for(int i=0;i<5;i++){
        scanf("%d",&student[i]);
        printf("%d��° �л��� ������ %d �Դϴ�.",i,student[i]);
        temp[i]=student[i];
        for(int k=0;k<i;k++){
            if(student[k]>student[i]){
                int temp;
                temp = student[i];
                student[i] = student[k];
                student[k] = temp;
            }
        }
    }
   
    return 0;
}