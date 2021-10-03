#include<stdio.h>
#include<stdlib.h>
struct Stack{
     int size;
     int top;
     int *arr;
};
int isEmpty(struct Stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct Stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
} 
void push(struct Stack *ptr,int element){
    if(isFull(ptr)){
        printf("Stack OverFlow\n");
    }
    ptr->top++;
    ptr->arr[ptr->top]=element;
} 
int pop(struct Stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack UnderFLow\n");
    }
    int element=ptr->arr[ptr->top];
    ptr->top--;
    return element;
}
int peek(struct Stack *s,int position){
    int element=s->top-position+1;
    return element;
}
int main(){
    struct Stack *s=(struct Stack*)malloc(sizeof(struct Stack));
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*(sizeof(int)));
    push(s,100);
    push(s,500);
    push(s,400);
    push(s,1000);
    pop(s);
    printf("%d\n",s->arr[s->top]);
    printf("%d\n",s->arr[peek(s,2)]);
    return 0;
}
