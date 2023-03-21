// #include <stdio.h>
// #include <stdlib.h>

// struct stack{
//     int top;
//     int items[100];
// };
// void createEmptystack(struct stack *s){
//     s->top=-1;
// }
// int isFull(struct stack *s){
//     if(s->top==99){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int isEmpty(struct stack *s){
//     if(s->top==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// void push(struct stack *s, int val){
//     if(isFull(s)){
//         printf("Stack Full!");
//     }
//     else{
//         s->top++;
//         s->items[s->top]=val;
//     }
// }
// void pop(struct stack *s){
//     if(isEmpty(s)){
//         printf("Stack Underflow!");
//     }
//     else{
//         printf("%d is popped out",s->items[s->top]);
//         s->top--;
//     }
// }
// void display(struct stack *s){
//     for(int i=0;i<=s->top;i++){
//         printf("%d ",s->items[i]);
//     }
//     printf("\n");
// }

// int main(){
//     int ch;
//     struct stack *s=(struct stack *)malloc(sizeof(struct stack));
//     createEmptystack(s);
//     push(s,1);
//     push(s,10);
//     display(s);
//     push(s,100);
//     push(s,1000);
//     display(s);
//     push(s,10000);
//     pop(s);
//     display(s);
//     push(s,20);
//     display(s);
// return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// struct queue
// {
//     int front,rear;
//     int item[6];
// };

// void createEmptyqueue(struct queue *q){
//     q->front=q->rear=-1;
// }

// int isFull(struct queue *q){
//     if(q->rear==5){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int isEmpty(struct queue *q){
//     if(q->front==-1 && q->rear==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }


// void push(struct queue *q,int val){
//     if(isFull(q)){
//         printf("Queue is full\n");
//     }
//     else{
//         q->front=0;
//         q->rear++;
//         q->item[q->rear]=val;
//     }
// }
// void pop(struct queue *q){
//     if(isEmpty(q)){
//         printf("Queue is Underflow\n");
//     }
//     else{
//         printf("%d is popped out\n",q->item[q->front]);
//         q->front++;
//         if(q->front==q->rear+1){
//             q->front=q->rear=-1;
//         }
//     }
// }
// void display(struct queue *q){
//     for(int i=q->front;i<=q->rear;i++){
//         printf("%d ",q->item[i]);
//     }
//     printf("\n");
// }

// int main(){
//     struct queue *q=(struct queue *)malloc(sizeof(struct queue));
//     createEmptyqueue(q);
//     push(q,1);
//     push(q,2);
//     push(q,3);
//     push(q,4);
//     push(q,5);
//     display(q);
//     pop(q);
//     display(q);
//     push(q,7);
//     display(q);
//     pop(q);
//     pop(q);
//     pop(q);
//     pop(q);
//     pop(q);
//     pop(q);
//     pop(q);
//     display(q);
//     display(q);
// return 0;
// }

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *front;
struct node *rear;
void insert();  
void delete();  
void display();  
void main ()  
{  
    int choice=0;   
    printf("\n*************************Main Menu*****************************\n");  
    printf("\n=================================================================\n");  
    printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        
    while(choice != 4){     
    printf("\nEnter your choice ?");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  

void insert(){
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Overflow");
    }    
    else{
        printf("Enter value");
        scanf("%d",&item);
        ptr->data=item;
        if(front==NULL){
            front=ptr;
            rear=ptr;
            front->next=NULL;
            rear->next=NULL;
        }
        else{
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
    }
}
void delete(){
    struct node *ptr;
    int x;
    // ptr=(struct node *)malloc(sizeof(struct node));
    if(front==NULL){
        printf("Underflow");
    }
    else{
        ptr=front;
        x=ptr->data;
        printf("%d is popped out\n",x);
        front = front->next;
        free(ptr);
    }
}
void display(){
    struct node *ptr;
    ptr=front;
    if(front==NULL){
        printf("Queue is empty");
    }
    else{
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}

