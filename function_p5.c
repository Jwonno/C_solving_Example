#include <stdio.h>
//위 10 개의 원소들 중 최대값 구하는 함수를 이용하여, 10 개의 원소를 입력 받고 그 원소를 큰 순으로 출력하는 함수를 만들어보세요.

void sort(int ele[]){
    int temp;
    for(int i=1;i<10;i++){
        for(int k=0;k<i;k++){
            if(ele[k]>ele[i]){
                temp=ele[i];
                ele[i]=ele[k];
                ele[k]=temp;
            }
        }
    }
}

int main(){
    int ele[10];
    for(int i=0;i<10;i++){
        printf("Enter the element_%d ",i);
        scanf("%d",ele+i);
    }
    sort(ele);
    printf("The result of sorting: ");
    for(int i=0;i<10;i++){
        printf("%d ",ele[i]);
    }
    return 0;
}