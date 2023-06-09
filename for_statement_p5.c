#include <stdio.h>
//사용자로 부터 N 값을 입력 받고 1 부터 N 까지의 곱을 출력한다.
int main(){
    int N,sum=1;
    printf("Enter the number: ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        sum=sum*i;
    }
    printf("Factorial of the number is %d", sum);
    return 0;
}