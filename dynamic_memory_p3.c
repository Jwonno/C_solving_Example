//head 가 주어질 때 전체 노드의 개수를 세는 int CountNode(Node* head) 함수를 작성하시오
#include <stdio.h>
#include <stdlib.h>

struct Node* InsertNode(struct Node *current, int data);
void DestroyNode(struct Node *destroy, struct Node *head);
struct Node *CreateNode(int data);
void PrintNodeFrom(struct Node *from);
int CountNode(struct Node *head);

int main(){
    struct Node *Node1 = CreateNode(100);
    struct Node *Node2 = InsertNode(Node1, 200);
    struct Node *Node3 = InsertNode(Node2, 300);
    struct Node *Node4 = InsertNode(Node2, 400);
    struct Node *Node5 = InsertNode(Node3, 500);
    PrintNodeFrom(Node1);
    struct Node *head = Node1;
    printf("The number of Node is %d",CountNode(head));
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

int CountNode(struct Node *head){
    int count = 0;
    while(head){
        count++;
        head = head->nextNode;
    }
    return count;
}