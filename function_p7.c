#include <stdio.h>
//����ڷ� ���� 5 ���� �л��� ����, ����, ���� ������ �Է� �޾Ƽ� ����� ���� ���� ��� ���� ����� ���� ���� ������� ���ĵǾ� ����ϵ��� �ϼ���. 
//Ư��, ����� �������� ��� �̻��� ��� ������ '�հ�', �ƴ� ����� '���հ�' �� ����ϰ� �غ�����.
int main(){
    int arr[5][3];
    double avg[5];
    double student[5];
    for(int i=0;i<5;i++){
        printf("student%d�� ����, ����, ���� ����\n",i+1);
        for(int k=0;k<3;k++){
            scanf("%d",&arr[i][k]);
        } 
        printf("\n");
    }
    double sum=0;
   for(int i=0;i<5;i++){
    avg[i]=(arr[i][0]+arr[i][1]+arr[i][2])/3.0;
    student[i]=avg[i];
    sum+=avg[i];
   }
   //sort
   for(int i=0;i<5;i++){
    for(int k=0;k<i;k++){
        if(avg[k]<avg[i]){
            double temp;
            temp=avg[i];
            avg[i]=avg[k];
            avg[k]=temp;
        }
    }
   }
   //print
   for(int i=0;i<5;i++){
    for(int k=0;k<5;k++){
        if(avg[i]==student[k]){
            if(avg[i]>=sum/5) printf("student%d (�հ�)",k+1);
            else printf("student%d (���հ�)",k+1);
        }
    }
    printf("\n");
   }
    return 0;
}