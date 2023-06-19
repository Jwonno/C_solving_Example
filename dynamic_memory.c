#include <stdio.h>
#include <stdlib.h>


/*동적 할당의 활용*/

/*//기본적인 활용
int main(int argc, char **argv){
   int student; //입력받고자하는 학생들의 수
   int *score; //학생들의 시험점수
   int sum = 0; //총점

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

/*//포인터 배열을 이용해서 2차원 배열 할당하기
int main(){
    int i;
    int x, y;
    int **arr;

    printf("arr[x][y] 를 만들 것입니다.\n");
    scanf("%d%d",&x,&y);

    arr = (int**)malloc(sizeof(int*)*x);
    //int* 형의 원소를 x개 가지는 1차원 배열 생성

    for(int i = 0;i<x;i++){
        arr[i] = (int*)malloc(sizeof(int)*y);
    }
    //각 arr[]에 int 형의 원소를 y개 가지는 1차원 배열 생성

    printf("생성 완료\n");
    //즉 이것은 실제로 2차원 배열이 아닌 1차원 포인터 배열이다.
    //그렇기에 함수의 인자로 사용하기에도 용이하다. ex) int function(int **arr);


    //free 함수도 malloc 함수를 호출할 때와 마찬가지로 2번 호출하는데 
    //할당 순서의 반대 순서로 해제한다.
    for(i=0;i<x;i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}*/

//포인터 배열을 이용한 2차원 배열 할당하기의 활용
int main(int argc, char **argv){
    int sum = 0;
    int subject, students;
    int **arr;
    //arr[subject][students]를 만들 것이다.
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