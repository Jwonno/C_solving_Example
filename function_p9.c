#include <stdio.h>
//�ڱ� �ڽ��� ȣ���ϴ� �Լ��� �̿��ؼ� 1 ���� Ư���� �������� ���� ���ϴ� ���α׷��� ��������.

int fac(int n){
    if(n!=1){
        return n*fac(n-1);    
    }
    return 1;
}

int main(){
    int n;
    printf("Enter the natural number: ");
    scanf("%d", &n);
    printf("The factorial of the natural number is %d",fac(n));
    return 0;
}