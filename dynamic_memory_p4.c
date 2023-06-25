//head 와 원하는 노드가 주어질 때 특정 data 를 가지는 노드가 존재하는지 확인하는 bool HasNode(Node* head) 함수를 작성하세요.
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
    if(HasNode(Node1, Data)==true) printf("원하시는 데이터와 일치하는 데이터를 가진 노드가 존재합니다.\n");
    else printf("원하시는 데이터와 일치하는 데이터를 가진 노드가 존재하지 않습니다.\n");
    
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
