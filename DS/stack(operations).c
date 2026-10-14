#include <stdio.h>
#include <stdlib.h>
int choice, data;

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *top = NULL;

void push();
void pop();
void peek();
void isEmpty();
void display();

int main(){
    while(1){
        printf("\n---Stack Operations---");
        printf("\n1.Push\n2.Pop\n3.Peek\n4.isEmpty\n5.Display\n6.Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                // push
                push();
                break;

            case 2:
                // pop
                pop();
                break;

            case 3:
                // peek
                peek();
                break;

            case 4:
                // isEmpty
                isEmpty();
                break;

            case 5:
                // display
                display();
                break;
            
            case 6: 
                printf("Exiting....");
                return 0;
            
            default:
                printf("Enter a valid choice!!!");
                break;

        }
    }
    return 0;
}

void push(){
        struct Node* new_node;
        new_node = malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &data);
        new_node->data = data;
        new_node->next = top;
        top = new_node;
        printf("After push: ");
        display();
}
void display(){
    struct Node* temp;
    temp = top;
    while(temp!=NULL){
        printf("%d \t", temp->data);
        temp = temp->next;
    }
}
void pop(){
    if(top == NULL){
        printf("Underflow!!!");
    }else{
        struct Node* temp;
        temp = top;
        top = top->next;
        free(temp);
        printf("After Pop: ");
        display();
    }
}

void peek(){
    if(top == NULL){
        printf("Stack is empty");
    }else{
        printf("%d", top->data);
    }
}

void isEmpty(){
    if(top == NULL){
        printf("Stack is empty");
    }else{
        printf("Stack is not empty");
    }
}