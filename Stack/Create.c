#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(struct stack *s,int element){
    if(isFull(s)){
        printf("Stack is Full");
    }
    else{
        s->top++;
        s->arr[s->top]=element;
       int val= s->arr[s->top];
        
        return val;
    }    
    
}

int pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack is underflow");
    }
    else{
       int element=s->arr[s->top];
        s->top--;
         return element;
    }
}
int main()
{
    /*  struct stack s;
      s.size = 80;
       s.top = -1;
       s.arr = (int *) malloc(s.size * sizeof(int));*/
 
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size = 3;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    
    //s->arr[0]=5;
    //s->top++;
     push(s,10);
     push(s,5000);
     //push(s,5000);
    
   // Pop(s);
   // printf("Pop = %d ",pop(s));
    printf("Push = %d \n",push(s,30));
    printf("pop = %d\n",pop(s));

    return 0;
}
