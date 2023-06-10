#include<stdio.h>
//1 부터 n 까지의 합을 구하는 함수를 작성해보세요.(for 문으로 작성)

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