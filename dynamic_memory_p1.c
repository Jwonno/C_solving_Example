//���� ���α׷��� �����Ͽ� �л��� ����� ���� �л��� ����� ����ϴ� ���α׷��� �������� 
#include <stdio.h>
#include <stdlib.h>

void print_rank(int student, int*sum, int*rank);
int main(){
    int subject, student;
    printf("The number of subject: ");
    scanf("%d",&subject);
    printf("The number of student: ");
    scanf("%d",&student);

    int *rank=(int*)malloc(student*sizeof(int));
    int *sum=(int*)malloc(student*sizeof(int));
    for(int i=0;i<student;i++){sum[i]=0;}
    int(*arr)[student] = (int(*)[student])malloc(subject*student*sizeof(int));

    for(int i=0;i<subject;i++){
        printf("[Subject_%d]\n",i+1);
        for(int j=0;j<student;j++){
            printf("Student_%d: ",j+1);
            scanf("%d",&arr[i][j]);
            sum[j]+=arr[i][j];
            rank[j]=sum[j];
        }
    }
    print_rank(student, sum, rank);
    return 0;
}

void print_rank(int student, int*sum, int*rank){
    //sort
    for(int i=0;i<student;i++){
        for(int j=0;j<i;j++){
            if(sum[i]>sum[j]){
                int temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
            }
        }
    }
    //print
    for(int i=0;i<student;i++){
        for(int j=0;j<student;j++){
            if(sum[i]==rank[j]) printf("%d��: Student_%d\n",i+1,j+1);
        }
    }
}