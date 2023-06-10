#include<stdio.h>
//두 수를 입력받아 최댓값을 반환하는 함수를 만드시오.

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