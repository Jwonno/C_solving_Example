#include<stdio.h>
//N 값을 입력 받아서 1 부터 N 까지의 소수의 개수를 출력하는 함수를 제작해보세요. 

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