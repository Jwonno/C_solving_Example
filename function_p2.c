#include<stdio.h>
//1 ���� n ������ ���� ���ϴ� �Լ��� �ۼ��غ�����.(for ������ �ۼ�)

int Sum_function(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf( "%d",&n);
    printf("Sum is %d",Sum_function(n));
    return 0;
}