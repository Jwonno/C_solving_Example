#include<stdio.h>
//N ���� �Է� �޾Ƽ� 1 ���� N ������ �Ҽ��� ������ ����ϴ� �Լ��� �����غ�����. 

int primecheck(int Num){
    for(int i=2;i<=Num/2;i++){
        if(Num%i==0){
            return 0;
        }
    }
    if(Num==1) return 0;
    return 1;
}

int primeNum(int N){
    int Num=0;
    for(int i=1;i<=N;i++){
        if(primecheck(i)==1) Num++; 
    }
    return Num;
}

int main(){
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);
    printf("The number of prime number is %d",primeNum(N));
    return 0;
}