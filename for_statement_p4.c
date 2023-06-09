#include <stdio.h>

int main(){
    int sum=0;
    int N_1=1,N_2=1,N_3=2;
    while(N_3<=1000000){
       N_1=N_2+N_3;
       N_2=N_3+N_1;
       N_3=N_1+N_2;
       if(N_1%2==0) sum=sum+N_1;
       if(N_2%2==0) sum=sum+N_2;
       if(N_3%2==0) sum=sum+N_3;
    }
    printf("sum is %d", sum);
    return 0;
}