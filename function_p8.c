#include <stdio.h>
//��Ŭ���� ȣ������ �̿��ؼ� N ���� ������ �ִ������� ���ϴ� �Լ��� ��������. 

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
    printf("5���� ������ �Է��ϼ���\n");
    for(int i=0;i<5;i++){
        scanf("%d",arr+i);
    }
    for(int i=0;i<4;i++){
        arr[i+1] = gcd(arr[i],arr[i+1]);
    }
    printf("\n�ִ������� %d �̴�.\n", arr[4]);
    return 0;
}