#include <stdio.h>
//�����佺�׳׽��� ü�� �̿��ؼ� 1 ���� N ������ �Ҽ��� ���ϴ� ���α׷��� ��������. 

int main(){
    int N;
    int arr[10001];
    //�迭 �ʱ�ȭ
    for(int i=2;i<=10000;i++){
        arr[i]=i;
    }
    printf("Enter the number: ");
    scanf("%d",&N);
   //�Ҽ��� �ƴ� �� �Ÿ���
    for(int i=2;i<=N;i++){
       if(arr[i]==0) continue;
       for(int j=i*2;j<=N;j+=i){
        arr[j]=0;
       }
    }
    //�Ҽ� ���
    printf("The list of prime numbers is");
    for(int i=2;i<=N;i++){
        if(arr[i]!=0){
            printf("\t%d",arr[i]);
        }    
    }
}