#include <stdio.h>
//����ڷ� ���� 5 ���� �л��� ����, ����, ���� ������ �Է� �޾Ƽ� ����� ���� ���� ��� ���� ����� ���� ���� ������� ���ĵǾ� ����ϵ��� �ϼ���. 
//Ư��, ����� �������� ��� �̻��� ��� ������ '�հ�', �ƴ� ����� '���հ�' �� ����ϰ� �غ�����.

void printscore(){}

int main(){
    int arr[5][3];
    float avg[5];
    float student[5];
    for(int i=0;i<5;i++){
        printf("student%d�� ����, ����, ���� ����\n",i+1);
        for(int k=0;k<3;k++){
            scanf("%d",arr[i][k]);
        } 
        printf("\n");
    }
   for(int i=0;i<5;i++){
    avg[i]=(arr[i][0]+arr[i][1]+arr[i][2])/3.0;
    student[i]=avg[i];
   }
   for(int i=0;i<5;i++){
    for(int k=0;k<i;k++){
        
    }
   }
    return 0;
}