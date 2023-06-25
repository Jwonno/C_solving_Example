//'이 노드를 가리키는 노드'를 알 수 있게 Node 구조체에 이전 노드를 가리키는 prevNode 멤버를 추가하여 앞서 구현하였던 함수를 모두 구현하세요.
#include <stdio.h>
#include <stdlib.h>

struct Node* InsertNode(struct Node *current, int data);
void DestroyNode(struct Node *destroy, struct Node *head);
struct Node *CreateNode(int data);
void PrintNodeFrom(struct Node *from);


int main(){
    struct Node *Node1 = CreateNode(100);
    struct Node *Node2 = InsertNode(Node1, 200);
    struct Node *Node3 = InsertNode(Node2, 300);
    struct Node *Node4 = InsertNode(Node2, 400);
    PrintNodeFrom(Node1);
    return 0;
}


struct Node{
    int data;             
    struct Node*nextNode; 
    struct Node*prevNode;
};

struct Node* CreateNode(int data){ 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->nextNode = NULL;
    newNode->prevNode = NULL; 

    return newNode;
}

struct Node *InsertNode(struct Node *current, int data){
    
    struct Node *after = current->nextNode;
   
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->nextNode = after;
    newNode->prevNode = current;
    current->nextNode = newNode;
    
    if(after!=NULL) after->prevNode = newNode;

    return newNode;
}

void DestroyNode(struct Node *destroy, struct Node *head){ 

    struct Node *next = head;
    
    if(destroy==head){
        (head->nextNode)->prevNode = NULL;
        free(destroy);
        return; 
    }

    while(next){
        if(next->nextNode == destroy){
            next->nextNode = destroy->nextNode;
            (destroy->nextNode)->prevNode = next;
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