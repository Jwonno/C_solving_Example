#include <stdio.h>
//Ư���� �� N �� �Է¹޾Ƽ� N �� ���μ������� ����� ��µǰ� �غ�����

void factorize(int N){
    printf("N = %d, %d = 1",N,N);
    for(int i=2;i<=N;i++){
        if(N%i==0){
            printf("*%d",i);
            N=N/i;
            i=2;
        }
        
    }
}

int main(){
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);
    factorize(N);
}