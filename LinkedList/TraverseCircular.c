#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void Traverse(struct Node *head){
    struct Node *p=head;
    do{
        printf("%d ",p->data);
        p=p->next;
    }
    while(p!=head);
        
}
//In these two cases few minutes changes has been made
struct Node *InsertAtFirst(struct Node *head,int element){
    struct Node *newhead=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    newhead->data=element;
    newhead->next=head;
    while(p->next!=head){
        p=p->next;
    }
    p->next=newhead;
    
    return newhead;
}
struct Node *InsertAtEnd(struct Node *head,int element){
        
        struct Node *end=(struct Node*)malloc(sizeof(struct Node));
        struct Node *p=head;
        while(p->next!=head){
            p=p->next;
        }
        p->next=end;
        end->next=head;
        end->data=element;
        return head;
}
//Here insertion is similar to SLL
struct Node *InsertAtIndex(struct Node *head,int index,int element){
    struct Node *ind=(struct Node*)malloc(sizeof(struct Node));
     struct Node *p=head;
     int i=0;
    while(i!=(index-1)){ 
         p=p->next;
        i++;
    }
    ind->next=p->next;
    p->next=ind;
    ind->data=element;
    return head;
}
void *InsertAfterNode(struct Node *prevNode,int element){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=element;
    ptr->next=prevNode->next;
    prevNode->next=ptr;

}
int main(){
    struct Node *head,*second,*third,*fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=40;
    second->next=third;

    third->data=100;
    third->next=fourth;

    fourth->data=60;
    fourth->next=head;

   // head = InsertAtFirst(head,1000);
    //head=InsertAtIndex(head,2,345);
   // head=InsertAtEnd(head,49);
    InsertAfterNode(second,5);
    Traverse(head);
    return 0;
}
