#include <stdio.h>
//�Է¹޴� �л����� ������ ���� ������ �����ϴ� ���α׷��� ����� ������.

int main(){
    int student[5]={0};
    printf("�л����� ������ �Է����ּ���: ");
    for(int i=0;i<5;i++){
        scanf("%d",&student[i]);
        for(int k=0;k<i;k++){
            if(student[k]>student[i]){
                int temp;
                temp = student[i];
                student[i] = student[k];
                student[k] = temp;
            }
        }
    }
    printf("\n[��������]\n\n");
    for(int i=0;i<5;i++){
        printf("%d\n",student[i]);
    }

    return 0;
}