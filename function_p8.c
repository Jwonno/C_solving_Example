#include <stdio.h>
//유클리도 호제법을 이용해서 N 개의 수들의 최대공약수를 구하는 함수를 만들어보세요. 

int gcd(int num1, int num2){
    int r;
    while(num2){
        r=num1%num2;
        num1=num2;
        num2=r;
    }
    return num1;
}

int main(){
    int arr[5];
    printf("5개의 정수를 입력하세요\n");
    for(int i=0;i<5;i++){
        scanf("%d",arr+i);
    }
    for(int i=0;i<4;i++){
        arr[i+1] = gcd(arr[i],arr[i+1]);
    }
    printf("\n최대공약수는 %d 이다.\n", arr[4]);
    return 0;
}