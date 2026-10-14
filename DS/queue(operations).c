#include <stdio.h>
#include <stdlib.h>
int choice,data;
struct Node{
    int data;
    struct Node *next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue();
void dequeue();
void display();
void peek();
void isEmpty();

int main(){
    while(1){
        printf("\n---Queue Operations---");
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.isEmpty\n5.Display\n6.Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                enqueue(); 
                break;
            
            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;
            
            case 4:
                isEmpty();
                break;

            case 5:
                display();
                break;
            
            case 6:
                return 0;

            default:
                printf("Invalid Choice!!!");
                break;
        }
    }
    return 0;
}

void enqueue(){
    struct Node* new_node;
    new_node = malloc(sizeof(struct Node));
    if(front == NULL){
        front = new_node;
    }else{
        struct Node* temp;
        temp = rear;
        temp->next = new_node;
    }
    printf("Enter data: ");
    scanf("%d", &data);
    new_node->data = data;
    new_node->next = NULL;
    rear = new_node;
    printf("After Enqueue: ");
    display();
}

void dequeue(){
    if(front == NULL && rear == NULL){
        printf("Queue is empty!!!");
    }else if(front == rear){
        front = NULL;
        rear = NULL;
    }else{
        struct Node* temp;
        struct Node* rmnode;
        temp = front;
        rmnode = front;
        temp = temp->next;
        front = temp;
        free(rmnode);
        printf("After Enqueue: ");
        display();
    }
}

void display(){
    struct Node* temp;
    temp = front;
    if(front == NULL && rear == NULL){
        printf("Queue is empty!!!");
    }else{
        while(temp!=NULL){
            printf("%d \t", temp->data);
            temp=temp->next;
        }
    }
}

void peek(){
    if(front==NULL){
        printf("Queue is empty");
    }else{
        struct Node* temp;
        temp = front;
        printf("%d", temp->data);
    }
}

void isEmpty(){
    if(front == NULL && rear == NULL){
        printf("Queue is empty!!!");
    }else{
        printf("Queue is not empty!!!");
    }
}