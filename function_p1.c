#include<stdio.h>
//�� ���� �Է¹޾� �ִ��� ��ȯ�ϴ� �Լ��� ����ÿ�.

int Max(int Num1, int Num2){
    if(Num1>Num2) return Num1;
    else return Num2;
}
int main(){
   int Num1, Num2;
   printf("Enter two numbers: ");
   scanf("%d%d",&Num1,&Num2);
   printf("The Max value is %d",Max(Num1, Num2));
    return 0;
}