#include <stdio.h>
#include <stdlib.h>
/*//구조체의 동적 할당
struct Something{
    int a, b;
};

int main(){
    struct Something *arr;
    int size;

    printf("Enter the size of struct array: ");
    scanf("%d",&size);

    arr = (struct Something*)malloc(sizeof(struct Something)*size);

    for(int i=0;i<size;i++){
        printf("arr[%d].a: ",i);
        scanf("%d",&arr[i].a);
        printf("arr[%d].b: ",i);
        scanf("%d",&arr[i].b);
    }

    for(int i=0;i<size;i++){
        printf("arr[%d].a: %d, arr[%d].b: %d\n",i, arr[i].a, i, arr[i].b);
    }

    free(arr);

    return 0;    
}*/

/*//노드
struct Node* InsertNode(struct Node *current, int data);
void DestroyNode(struct Node *destroy, struct Node *head);
struct Node *CreateNode(int data);
void PrintNodeFrom(struct Node *from);
//노드의 기본 형식
struct Node{
    int data;             //데이터
    struct Node*nextNode; //다음 노드를 가리키는 부분
};
//새 노드를 만드는 함수
struct Node* CreateNode(int data){ 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->nextNode = NULL; //첫번째 노드를 만드는 역할만 하므로 nextNode에 NULL을 대입한다.

    return newNode;
}
//노드를 생성하기만 할 뿐 관계짓지는 못한다.

//current 라는 노드 뒤에 노드를 새로 만들어 넣는 함수
struct Node *InsertNode(struct Node *current, int data){
    
    //current 노드가 가리키고 있던 다음 노드가 after이다.
    struct Node *after = current->nextNode;
   
    //새로운 노드를 생성한다.
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    //새 노드에 값을 넣어준다.
    newNode->data = data;
    newNode->nextNode = after;

    current->nextNode = newNode;

    return newNode;
}
//즉 current 노드와 기존의 current 노드가 가리키고 있는 노드사이에 새로운 노드를 끼워넣은 것이다. 

//선택한 노드를 파괴하는 함수
void DestroyNode(struct Node *destroy, struct Node *head){ //파괴할 노드를 destroy, 맨 처음 노드를 head 인자로 받는다.
    //다음 노드를 가리킬 포인터
    struct Node *next = head;

    //head를 파괴하려 한다면
    if(destroy==head){
        free(destroy);
        return; //함수를 벗어나기 위한 것
    }

    //만일 next가 NULL 이면 종료
    while(next){
        //만일 next 다음 노드가 destroy 라면 destroy 는 삭제될 노드이므로
        if(next->nextNode == destroy){
            //next의 다음 노드를 destroy가 아니라 destroy의 다음 노드로 만들어준다
            next->nextNode = destroy->nextNode;
        }
        //next 는 계속해서 다음 노드를 가리킨다.
        next = next->nextNode;
    }
    free(destroy);
}
//즉 노드를 파괴하는 것은 free(destroy)로 매우 간단하게 가능하지만,
//이전 노드와 다음 노드와의 관계에 때문에 관계를 다시 설정시켜줘야한다.

void PrintNodeFrom(struct Node *from){
    //from 이 NULL 이 될 때 까지, 즉 끝 부분에 도달할 때 까지 출력
    while(from){
        printf("Data of Node: %d\n",from->data);
        from = from->nextNode;
    }
}

int main(){
    struct Node *Node1 = CreateNode(100);
    struct Node *Node2 = InsertNode(Node1, 200);
    struct Node *Node3 = InsertNode(Node2, 300);
    //Node 2 뒤에 Node 4 넣기
    struct Node *Node4 = InsertNode(Node2, 400);

    PrintNodeFrom(Node1);
    return 0;
}*/

//메모리 관련 함수 (memcpy(), memmove(), memcmp())
#include <string.h>
/*//memcpy() 함수
int main(){
    char str[50] = "I love Chewing C hahaha";
    char str2[50];
    char str3[50];
    //strlen 은 문자열의 길이를 리턴해주는 함수
    //마지막의 NULL 문자는 길이에 포함시키지 않으므로 함수 strlen 뒤에 1을 더해준다
    memcpy(str2, str, strlen(str)+1); //str로 부터 strlen(str)+1 만큼의 문자를 str2로 복사
    memcpy(str3, "hello", 6); //hello는 총 5글자이고 마지막 NULL 문자를 포함하면 6글자 이므로 마지막 인자는 6이다.

    printf("%s \n",str);
    printf("%s \n",str2);
    printf("%s \n",str3);

    return 0;
}*/

/*//memmove() 함수
int main(){
    char str[50] = "I love Chewing C hahaha";

    printf("%s\n",str);
    printf("memmove 이후 \n");
    memmove(str+23,str+17,6); //str+17 에서 6개의 문자를 str+23 에 옮김
    printf("%s",str);

    return 0;
}
//memcpy() 함수와 달리 메모리 공간이 겹쳐도 가능하다. 
//위의 경우도 복사하는 부분이 겹치게 되었지만 프로그램이 작동함*/

/*//memcmp() 함수
int main(){
    int arr[10] = {1, 2, 3, 4, 5};
    int arr2[20] = {1, 2, 3, 4, 5};
    //두 인자 arr, arr2 를 비교해서 처음 5 개의 바이트가 같으면 0을 반환함
    if(memcmp(arr, arr2, 5)==0){ 
    printf("arr 과 arr2 는 일치!\n");
    }
    else{
        printf("arr 과 arr2 는 불일치\n");
    }
    return 0;
}*/
