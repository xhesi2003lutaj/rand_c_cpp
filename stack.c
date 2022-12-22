#include<stdio.h>
#include<stdlib.h>

struct Stack{
  int top;
  unsigned capacity;
  int *arr;
}; typedef struct Stack STACK;

STACK *initialize(kapacitet){
  
  STACK *newstack=malloc(sizeof(STACK));
  newstack->capacity=kapacitet;
  newstack->top=-1;
  newstack->arr=malloc(sizeof(int)*newstack->capacity);
  return newstack;
}
void push(STACK *f,int item){
  if(f->top==f->capacity-1){
    printf("full\n");
    return;
  }
  else{
    f->arr[++f->top]=item;
    printf("pushed %d ",item);
  }

}
int pop(STACK *f){
  if(f->top==-1){
    printf("already empty\n");
    return -1;
  }
  else{
   return f->arr[f->top--];
   
  }
}
int is_empty(STACK *f){
  return f->top==-1;

}
int is_full(STACK *f){
  return f->top=f->capacity-1;

}
void empty(STACK *f){
  while (!is_empty(f)){
    printf("empting %d ",pop(f));
  }
}
int main(){
  STACK *satck=initialize(100);
  push(satck,20);
  push(satck,30);
  push(satck,10);
  printf(" popooing %d\n",pop(satck));
  empty(satck);
 
  return 0;
}