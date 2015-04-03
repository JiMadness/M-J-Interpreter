#ifndef ABSTRACT_H_INCLUDED
#define ABSTRACT_H_INCLUDED
#define TYPE int
typedef struct node node;

typedef struct node{
TYPE value;
node* pointer;
}node;

typedef struct{
node *top;
}stack;

typedef struct{
node *front;
node *rear;
}queue;


node* construct_node(TYPE);

void initialize(stack *);

void push(stack *,TYPE);

TYPE pop(stack *);

int isFull(stack *);

int isEmpty(stack *);

void initialize_queue(queue *);

void enque(queue *,TYPE);

TYPE deque(queue *);

int isQfull(queue *);

int isQempty(queue *);
#include "data.c"
#endif // ABSTRACT_H_INCLUDED
