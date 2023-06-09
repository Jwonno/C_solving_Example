#include <stdio.h>

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