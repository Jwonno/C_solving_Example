#include <stdio.h>
//�� 10 ���� ���ҵ� �� �ִ밪 ���ϴ� �Լ��� �̿��Ͽ�, 10 ���� ���Ҹ� �Է� �ް� �� ���Ҹ� ū ������ ����ϴ� �Լ��� ��������.

void sort(int ele[]){
    int temp;
    for(int i=1;i<10;i++){
        for(int k=0;k<i;k++){
            if(ele[k]>ele[i]){
                temp=ele[i];
                ele[i]=ele[k];
                ele[k]=temp;
            }
        }
    }
}

int main(){
    int ele[10];
    for(int i=0;i<10;i++){
        printf("Enter the element_%d ",i);
        scanf("%d",ele+i);
    }
    sort(ele);
    printf("The result of sorting: ");
    for(int i=0;i<10;i++){
        printf("%d ",ele[i]);
    }
    return 0;
}