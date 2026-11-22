// stack operaions
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;
struct Node *head = NULL;

int push();
void display();
void pop();
void peak();

int choice, data;

int main(){
    while(1){
        printf("\n---Stack Operation---\n");
        printf("1.Push\n2.Pop\n3.Peak\n4.Display\n5.Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peak();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

void peak(){
    if(top == NULL){
        printf("No element!!!");
    } else{
        printf("%d", top->data);
    }
}

void pop(){
    if(top == NULL){
        printf("Underflow!!!");
    } else{
        if(top == head){
            top = NULL;
            head = NULL;
            printf("Stack after Pop: ");
            display();
            printf("\n");
        } else{
            struct Node *temp;
            temp = head;
            while(temp->next != top){
                temp = temp->next;
            }
            free(top);
            top = temp;
            top->next = NULL;
            printf("Stack after Pop: ");
            display();
            printf("\n");
        }
    }
}
int push(){
    if(top == NULL){
        struct Node *node;
        node = malloc(sizeof(struct Node));
        top = node;
        head = node;
        printf("Enter the element: ");
        scanf("%d", &data);
        node->data = data;
        node->next = NULL;
        printf("Stack after push: ");
        display();
        printf("\n");
    }else{
        struct Node *node;
        node = malloc(sizeof(struct Node));
        top->next = node;
        top = node;
        printf("Enter the element: ");
        scanf("%d", &data);
        node->data = data;
        node->next = NULL;
        printf("Stack after push: ");
        display();
        printf("\n");
    }
    return 0;
}

void display(){
    if(top == NULL){
        printf("Empty stack!!!");
    } else{
        struct Node *temp;
        temp = head;
        while(temp != NULL){
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}