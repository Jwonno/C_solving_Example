//head �� ���ϴ� ��尡 �־��� �� Ư�� data �� ������ ��尡 �����ϴ��� Ȯ���ϴ� bool HasNode(Node* head) �Լ��� �ۼ��ϼ���.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node* InsertNode(struct Node *current, int data);
void DestroyNode(struct Node *destroy, struct Node *head);
struct Node *CreateNode(int data);
void PrintNodeFrom(struct Node *from);
bool HasNode(struct Node*head, int Data);

int main(){
    int Data;
    struct Node *Node1 = CreateNode(100);
    struct Node *Node2 = InsertNode(Node1, 200);
    struct Node *Node3 = InsertNode(Node2, 300);
    struct Node *Node4 = InsertNode(Node2, 400);
    PrintNodeFrom(Node1);
    printf("Enter the Data: ");
    scanf("%d",&Data);
    if(HasNode(Node1, Data)==true) printf("���Ͻô� �����Ϳ� ��ġ�ϴ� �����͸� ���� ��尡 �����մϴ�.\n");
    else printf("���Ͻô� �����Ϳ� ��ġ�ϴ� �����͸� ���� ��尡 �������� �ʽ��ϴ�.\n");
    
    return 0;
}


struct Node{
    int data;             
    struct Node*nextNode; 
};

struct Node* CreateNode(int data){ 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->nextNode = NULL; 

    return newNode;
}

struct Node *InsertNode(struct Node *current, int data){
    
    struct Node *after = current->nextNode;
   
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->nextNode = after;
    current->nextNode = newNode;

    return newNode;
}

void DestroyNode(struct Node *destroy, struct Node *head){ 

    struct Node *next = head;

    if(destroy==head){
        free(destroy);
        return; 
    }

    while(next){
        if(next->nextNode == destroy){
            next->nextNode = destroy->nextNode;
        }
        next = next->nextNode;
    }
    free(destroy);
}

void PrintNodeFrom(struct Node *from){
    while(from){
        printf("Data of Node: %d\n",from->data);
        from = from->nextNode;
    }
}

bool HasNode(struct Node*head, int Data){
    while(head){
        if(head->data==Data) return true; 
        head = head->nextNode;
    }
    return false;
}
