#include <stdio.h>
#include <stdlib.h>


/*���� �Ҵ��� Ȱ��*/

/*//�⺻���� Ȱ��
int main(int argc, char **argv){
   int student; //�Է¹ް����ϴ� �л����� ��
   int *score; //�л����� ��������
   int sum = 0; //����

   printf("Enter the number of student: ");
   scanf("%d",&student);

   score = (int*)malloc(student*sizeof(int));
   for(int i=0;i<student;i++){
    printf("Score of student_%d: ",i+1);
    scanf("%d",score+i);

    sum+=score[i];
   }

   printf("Average of all scores of students: %.2f\n",1.0*sum/student);
    free(score);
    return 0;
}*/

/*//������ �迭�� �̿��ؼ� 2���� �迭 �Ҵ��ϱ�
int main(){
    int i;
    int x, y;
    int **arr;

    printf("arr[x][y] �� ���� ���Դϴ�.\n");
    scanf("%d%d",&x,&y);

    arr = (int**)malloc(sizeof(int*)*x);
    //int* ���� ���Ҹ� x�� ������ 1���� �迭 ����

    for(int i = 0;i<x;i++){
        arr[i] = (int*)malloc(sizeof(int)*y);
    }
    //�� arr[]�� int ���� ���Ҹ� y�� ������ 1���� �迭 ����

    printf("���� �Ϸ�\n");
    //�� �̰��� ������ 2���� �迭�� �ƴ� 1���� ������ �迭�̴�.
    //�׷��⿡ �Լ��� ���ڷ� ����ϱ⿡�� �����ϴ�. ex) int function(int **arr);


    //free �Լ��� malloc �Լ��� ȣ���� ���� ���������� 2�� ȣ���ϴµ� 
    //�Ҵ� ������ �ݴ� ������ �����Ѵ�.
    for(i=0;i<x;i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}*/

//������ �迭�� �̿��� 2���� �迭 �Ҵ��ϱ��� Ȱ��
int main(int argc, char **argv){
    int sum = 0;
    int subject, students;
    int **arr;
    //arr[subject][students]�� ���� ���̴�.
    printf("Enter the number of subject: ");
    scanf("%d",&subject);
    printf("Enter the number of student: ");
    scanf("%d",&students);

    arr = (int**)malloc(subject*sizeof(int*));

    for(int i=0;i<subject;i++){
        arr[i] = (int*)malloc(students*sizeof(int));
    }

    for(int i=0;i<subject;i++){
        printf("Subject_%d---------------\n",i+1);
        for(int j=0;j<students;j++){
            printf("Score of student_%d: ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<subject;i++){
        for(int j=0;j<students;j++){
            sum+=arr[i][j];
        }
        printf("Average of subject_%d: %d\n",i+1,sum/students);
        sum = 0;
    }
    for(int i=0;i<subject;i++){
        free(arr[i]);
    }
    free(arr);
}