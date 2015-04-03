

node* construct_node(TYPE value){
    node *x=malloc(sizeof(node));
    x->value=value;
    x->pointer=NULL;
    return x;
}

void initialize(stack *s){
s->top=NULL;
}

void push(stack *s,TYPE value){
node *x=construct_node(value);
x->pointer=s->top;
s->top=x;
}

TYPE pop(stack *s){
TYPE result = s->top->value;
node *x=s->top;
s->top=x->pointer;
free(x);
return result;
}
int isFull(stack *s){
return 0;
}
int isEmpty(stack *s){
return s->top==NULL?1:0;
}

void initialize_queue(queue *q){
q->front=NULL;
q->rear=NULL;
}
void enque(queue *q,TYPE value){
node *x=construct_node(value);
if(q->rear) q->rear->pointer=x;
else q->front =x;
q->rear=x;
}

TYPE deque(queue *q){
TYPE result = q->front->value;
node *x=q->front;
q->front=x->pointer;
free(x);
return result;
}
int isQfull(queue *q){
return 0;
}
int isQempty(queue *q){
if(q->front==NULL || q->rear==NULL)
    return 1;
return 0;
}
