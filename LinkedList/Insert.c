#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void Traverse(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct Node *InsertAtFirst(struct Node *head,int element){
    struct Node *newhead=(struct Node*)malloc(sizeof(struct Node));
    newhead->data=1000;
    newhead->next=head;
    return newhead;
}
struct Node *InsertAtindex()
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
    Traverse(head);
    
    return 0;
}