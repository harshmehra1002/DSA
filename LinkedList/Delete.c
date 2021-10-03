#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void Traverse(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *DeleteAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
void *DeleteAtMiddle(struct Node *head, int index)
{
    struct Node *ptr, *ptr1;
    ptr = head;
    int i = 0;
    while (i != (index - 1))
    {
        ptr = ptr->next;
        i++;
    }
    ptr1 = ptr->next;
    ptr->next = ptr1->next;
    free(ptr1);
}
void *DeleteAtLast(struct Node *head)
{
    struct Node *p,*q;
    p=head;
    q=head->next;
    int i = 0;
    while (q->next != NULL)
    {
       q=q->next;
       p=p->next;
    }
    p->next=NULL;
    free(q);
}

void *DeleteAfterNode(struct Node *head,int index){
        struct Node *p,*q;
        p=head;
        int i=0;
        while(i!=index){
            p=p->next;
            i++;
        }
        q=p->next;
        p->next=q->next;
        free(q);
    
}

int main()
{
    struct Node *head, *second, *third, *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 100;
    fourth->next = NULL;
    //head=DeleteAtFirst(head);
    //DeleteAtMiddle(head,2);
   // DeleteAtLast(head);
    DeleteAfterNode(head,1);
    Traverse(head);
    return 0;
}