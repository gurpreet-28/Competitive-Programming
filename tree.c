#include <stdio.h>
struct node{
    struct node *left,*right;
    int data;
}*root=NULL;
struct Queue{
    int size,front,rear;
    struct node **q;
};
void create(struct Queue *Q,int size){
    Q->size=size;
    Q->front=Q->rear=0;
    Q->q=(struct node **)malloc(q->size*sizeof(struct node *));
}

void enqueue(struct Queue *Q,struct Node *x){
    if((Q->rear+1)%Q->size==Q->front){
        printf("Queue is Full");
    }
    else{
        Q->rear=(Q->rear+1)%Q->size;
        Q->q[q->rear]=x;
    }
}

struct Node * dequeue(struct Queue *Q)
{
struct Node* x=NULL;
if(Q->front==Q->rear)
printf("Queue is Empty\n");
else
{
Q->front=(Q->front+1)%Q->size;
x=Q->q[Q->front];
}
return x;
}
int isEmpty(struct Queue Q)
{
return Q.front==Q.rear;
}


void Treecreate(){

    struct node *p=NULL,*t=NULL;
    int x;
    struct Queue q;
    create(&q,100);
    // enter root node
    scanf("%d",&x);
    root=(struct node*)malloc(sizeof(struct node));
    root->data=x;
    root->left=root->right=NULL;
    enqueue(&q,root);
    while(!isempty(q)){
        p=dequeue(&q);
        // enter p left
        scanf("%d",&x);
        if(x!=-1){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->left=t->right=NULL;
        p->left=t;
        enqueue(&q,t);
        }
        scanf("%d",&x);
        if(x!=-1){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->left=t->right=NULL;
        p->right=t;
        enqueue(&q,t);
        }
    }
}
void Inorder(struct Node *p)
{
if(p)
{
Inorder(p->lchild);
printf("%d ",p->data);
Inorder(p->rchild);
}
}
int main(){
Treecreate();
printf("\nInorder ");
Inorder(root);
return 0;
}
/*
step1 : Insert root node x
step2 : Enqueue(x);

step3 : p=dequeue(&q);
*/
