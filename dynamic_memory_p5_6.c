//'이 노드를 가리키는 노드'를 알 수 있게 Node 구조체에 이전 노드를 가리키는 prevNode 멤버를 추가하여 앞서 구현하였던 함수를 모두 구현하세요.
//그리고 head 가 맨 마지막 노드인 tail 을 prevNode 로 가리키는 원형의 노드를 만들어보세요.
#include <stdio.h>
#include <stdlib.h>

struct Node* InsertNode(struct Node *head, struct Node *current, int data);
void DestroyNode(struct Node *destroy, struct Node *head);
struct Node *CreateNode(int data);
void PrintNodeFrom(struct Node *head, struct Node *from);


int main(){
    struct Node *Node1 = CreateNode(100);
    struct Node *head = Node1;
    struct Node *Node2 = InsertNode(head, Node1, 200);
    struct Node *Node3 = InsertNode(head, Node2, 300);
    struct Node *Node4 = InsertNode(head, Node2, 400);
    PrintNodeFrom(head, Node1);
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

struct Node *InsertNode(struct Node *head, struct Node *current, int data){
    
    struct Node *after = current->nextNode;
   
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));   

    newNode->data = data;
    newNode->prevNode = current;
    if(after==NULL) {
        newNode->nextNode = head;
        head->prevNode = newNode;
    }
    else {
        newNode->nextNode = after;
        after->prevNode = newNode;
    }
    current->nextNode = newNode;
    return newNode;
}

void DestroyNode(struct Node *destroy, struct Node *head){ 

    struct Node *next = head;
    
    if(destroy==head){
        (head->nextNode)->prevNode = head->prevNode;
        free(destroy);
        return; 
    }

    while(next!=head){
        if(next->nextNode == destroy){
            next->nextNode = destroy->nextNode;
            (destroy->nextNode)->prevNode = next;
        }
        next = next->nextNode;
    }
    free(destroy);
}

void PrintNodeFrom(struct Node *head, struct Node *from){
   
    do{
        printf("Data of Node: %d\n",from->data);
        from = from->nextNode;
    }while(from!=head);
    
}