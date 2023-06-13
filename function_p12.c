#include <stdio.h>
/*1000 �ڸ��� ������ ����, ����, ����, �������� �����ϴ� ���α׷��� ��������. 
�������� ��� �Ҽ� �κ����߶��������. 
����, �Ҽ� �ε� 1000 �ڸ��� �����ص� �˴ϴ�. 
1000 �ڸ� ������ ���� ���� �ð��� 1 �� �̸��̿����մϴ�.*/

//���� �Լ�
void adder(char Num1[], char Num2[],char sum[],int N){
    int carry = 0;
    for(int i=0;i<N-1;i++){
            sum[i]=Num1[i]+Num2[i]+carry;
            if(sum[i]>=10){
                carry=1;
                sum[i]-=10;
            }
    }
    sum[N-1]=Num1[N-1]+Num2[N-1]+carry;
    //��� ���
    printf("[Sum]\n");
    for(int i=N-1;i>=0;i--){
        printf("%c",sum[i]+48);
    }
    printf("\n\n");
}
//���� �Լ�
void subtractor(char Num1[], char Num2[], char sub[], int N){
    int borrow = 0;
    for(int i=0;i<N;i++){
        if(Num1[i]-borrow<Num2[i]){
            sub[i]=10+Num1[i]-Num2[i]-borrow;
            borrow = 1;
        }
       else {
        sub[i]=Num1[i]-Num2[i]-borrow;
        borrow = 0;
        }
    }
    if(borrow==1) sub[N-1]-=10;
    //��� ���
    printf("[Subtraction]\n");
    for(int i=N-1;i>=0;i--){
        printf("%c",sub[i]+48);
    }
    printf("\n\n");
}
//���� �Լ�
/*void multiplication(char Num1[], char Num2[], char mul[], int N){
    int i=0;
        for(int i=0,j=0;j<N;j++,i++){
            for(int k=1;k<N;k++,i++){
                mul[i]=(Num1[k]*Num2[i]+(Num1[k-1]*Num1[i])/10)%10;
            }
            i--;
        }
    //��� ���
    printf("[Multiplication]\n");
    for(int i=N*N-1;i>=0;i--){
        printf("%c",mul[i]+48);
    }
    printf("\n\n");
}*/
int main(){
    
    int place_N;
    char Num1[1000]={0};
    char Num2[1000]={0};
    char sum[1000]={0};
    char sub[1000]={0};
    char mul[1000]={0};
    printf("Enter the place number(MAX_1000): ");
    scanf("%d",&place_N);
    printf("\nEnter the NUM_1(���� �ڸ������� �Է�): ");
    for(int i=place_N-1;i>=0;i--){
        scanf(" %c",&Num1[i]);
        Num1[i]-=48;
    }
    printf("\nEnter the NUM_2(���� �ڸ������� �Է�): ");
    for(int i=place_N-1;i>=0;i--){
        scanf(" %c",&Num2[i]);
        Num2[i]-=48;
    }
    printf("\ncaculating.....\n");
    //���� Num1+Num2
    adder(Num1, Num2, sum,place_N);
    
    //���� Num1-Num2
    subtractor(Num1, Num2, sub,place_N);

    //���� Num1*Num2
    //multiplication(Num1, Num2, mul, place_N);

return 0;
}