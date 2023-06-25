//'�� ��带 ����Ű�� ���'�� �� �� �ְ� Node ����ü�� ���� ��带 ����Ű�� prevNode ����� �߰��Ͽ� �ռ� �����Ͽ��� �Լ��� ��� �����ϼ���.
//�׸��� head �� �� ������ ����� tail �� prevNode �� ����Ű�� ������ ��带 ��������.
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