#include <stdio.h>
//자기 자신을 호출하는 함수를 이용해서 1 부터 특정한 수까지의 곱을 구하는 프로그램을 만들어보세요.

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