#include <stdio.h>
#include <stdlib.h>
/*//����ü�� ���� �Ҵ�
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

/*//���
struct Node* InsertNode(struct Node *current, int data);
void DestroyNode(struct Node *destroy, struct Node *head);
struct Node *CreateNode(int data);
void PrintNodeFrom(struct Node *from);
//����� �⺻ ����
struct Node{
    int data;             //������
    struct Node*nextNode; //���� ��带 ����Ű�� �κ�
};
//�� ��带 ����� �Լ�
struct Node* CreateNode(int data){ 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->nextNode = NULL; //ù��° ��带 ����� ���Ҹ� �ϹǷ� nextNode�� NULL�� �����Ѵ�.

    return newNode;
}
//��带 �����ϱ⸸ �� �� ���������� ���Ѵ�.

//current ��� ��� �ڿ� ��带 ���� ����� �ִ� �Լ�
struct Node *InsertNode(struct Node *current, int data){
    
    //current ��尡 ����Ű�� �ִ� ���� ��尡 after�̴�.
    struct Node *after = current->nextNode;
   
    //���ο� ��带 �����Ѵ�.
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    //�� ��忡 ���� �־��ش�.
    newNode->data = data;
    newNode->nextNode = after;

    current->nextNode = newNode;

    return newNode;
}
//�� current ���� ������ current ��尡 ����Ű�� �ִ� �����̿� ���ο� ��带 �������� ���̴�. 

//������ ��带 �ı��ϴ� �Լ�
void DestroyNode(struct Node *destroy, struct Node *head){ //�ı��� ��带 destroy, �� ó�� ��带 head ���ڷ� �޴´�.
    //���� ��带 ����ų ������
    struct Node *next = head;

    //head�� �ı��Ϸ� �Ѵٸ�
    if(destroy==head){
        free(destroy);
        return; //�Լ��� ����� ���� ��
    }

    //���� next�� NULL �̸� ����
    while(next){
        //���� next ���� ��尡 destroy ��� destroy �� ������ ����̹Ƿ�
        if(next->nextNode == destroy){
            //next�� ���� ��带 destroy�� �ƴ϶� destroy�� ���� ���� ������ش�
            next->nextNode = destroy->nextNode;
        }
        //next �� ����ؼ� ���� ��带 ����Ų��.
        next = next->nextNode;
    }
    free(destroy);
}
//�� ��带 �ı��ϴ� ���� free(destroy)�� �ſ� �����ϰ� ����������,
//���� ���� ���� ������ ���迡 ������ ���踦 �ٽ� ������������Ѵ�.

void PrintNodeFrom(struct Node *from){
    //from �� NULL �� �� �� ����, �� �� �κп� ������ �� ���� ���
    while(from){
        printf("Data of Node: %d\n",from->data);
        from = from->nextNode;
    }
}

int main(){
    struct Node *Node1 = CreateNode(100);
    struct Node *Node2 = InsertNode(Node1, 200);
    struct Node *Node3 = InsertNode(Node2, 300);
    //Node 2 �ڿ� Node 4 �ֱ�
    struct Node *Node4 = InsertNode(Node2, 400);

    PrintNodeFrom(Node1);
    return 0;
}*/

//�޸� ���� �Լ� (memcpy(), memmove(), memcmp())
#include <string.h>
/*//memcpy() �Լ�
int main(){
    char str[50] = "I love Chewing C hahaha";
    char str2[50];
    char str3[50];
    //strlen �� ���ڿ��� ���̸� �������ִ� �Լ�
    //�������� NULL ���ڴ� ���̿� ���Խ�Ű�� �����Ƿ� �Լ� strlen �ڿ� 1�� �����ش�
    memcpy(str2, str, strlen(str)+1); //str�� ���� strlen(str)+1 ��ŭ�� ���ڸ� str2�� ����
    memcpy(str3, "hello", 6); //hello�� �� 5�����̰� ������ NULL ���ڸ� �����ϸ� 6���� �̹Ƿ� ������ ���ڴ� 6�̴�.

    printf("%s \n",str);
    printf("%s \n",str2);
    printf("%s \n",str3);

    return 0;
}*/

/*//memmove() �Լ�
int main(){
    char str[50] = "I love Chewing C hahaha";

    printf("%s\n",str);
    printf("memmove ���� \n");
    memmove(str+23,str+17,6); //str+17 ���� 6���� ���ڸ� str+23 �� �ű�
    printf("%s",str);

    return 0;
}
//memcpy() �Լ��� �޸� �޸� ������ ���ĵ� �����ϴ�. 
//���� ��쵵 �����ϴ� �κ��� ��ġ�� �Ǿ����� ���α׷��� �۵���*/

/*//memcmp() �Լ�
int main(){
    int arr[10] = {1, 2, 3, 4, 5};
    int arr2[20] = {1, 2, 3, 4, 5};
    //�� ���� arr, arr2 �� ���ؼ� ó�� 5 ���� ����Ʈ�� ������ 0�� ��ȯ��
    if(memcmp(arr, arr2, 5)==0){ 
    printf("arr �� arr2 �� ��ġ!\n");
    }
    else{
        printf("arr �� arr2 �� ����ġ\n");
    }
    return 0;
}*/
