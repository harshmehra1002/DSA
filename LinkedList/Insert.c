#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void Traverse(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
//case 1:
struct Node *InsertAtFirst(struct Node *head,int element){
    struct Node *newhead=(struct Node*)malloc(sizeof(struct Node));
    newhead->data=1000;
    newhead->next=head;
    return newhead;
}
//case 2:
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
//case 3:
struct Node *InsertAtEnd(struct Node *head,int element){
        struct Node *end=(struct Node*)malloc(sizeof(struct Node));
        struct Node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=end;
        end->next=NULL;
        end->data=element;
        return head;
}
//case 4:
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

    second->data=30;
    second->next=third;

    third->data=60;
    third->next=fourth;

    fourth->data=400;
    fourth->next=NULL;

    //Traverse(head);
   head=InsertAtFirst(head,1000);
   head=InsertAtIndex(head,3,8000);
   head=InsertAtEnd(head,4000);
   InsertAfterNode(third,60);
    Traverse(head);
    
    return 0;
}
