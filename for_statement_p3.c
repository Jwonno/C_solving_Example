#include<stdio.h>

int main(){
    int sum=0;
    for(int i=0;i<=1000;i++){
        if(i%3==0||i%5==0){
            sum = sum + i;
        }
    }
    printf("1000 이하의 3의 배수 또는 5의 배수인 자연수들의 합은 %d 입니다.\n", sum);
    return 0;
}