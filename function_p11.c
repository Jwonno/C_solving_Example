#include <stdio.h>
//에라토스테네스의 체를 이용해서 1 부터 N 까지의 소수를 구하는 프로그램을 만들어보세요. 

int main(){
    int N;
    int arr[10001];
    //배열 초기화
    for(int i=2;i<=10000;i++){
        arr[i]=i;
    }
    printf("Enter the number: ");
    scanf("%d",&N);
   //소수가 아닌 수 거르기
    for(int i=2;i<=N;i++){
       if(arr[i]==0) continue;
       for(int j=i*2;j<=N;j+=i){
        arr[j]=0;
       }
    }
    //소수 출력
    printf("The list of prime numbers is");
    for(int i=2;i<=N;i++){
        if(arr[i]!=0){
            printf("\t%d",arr[i]);
        }    
    }
}