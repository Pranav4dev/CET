#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert_beginning();
void insert_end();
void display();

int choice, data;

int main(){
    while(1){
        printf("\n---Linked List---\n");
        printf("1.Insert\n2.Delete\n3.Modify\n4.Display\n5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n---Insert---\n");
            printf("1.Beginning\n2.At any pos\n3.End\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                insert_beginning();
                break;
            case 3:
                insert_end();
                break;
            
            default:
                break;
            }
            break;
        case 4:
            display();
            break;
        default:
            break;
        }
    }
}

void insert_end(){
    
}

void insert_beginning(){
    if(head == NULL){
        struct Node *new;
        new = malloc(sizeof(struct Node));
        head = new;
        printf("Enter element: ");
        scanf("%d", &data);
        new->data = data;
        new->next = NULL;
    } else{
        struct Node *new;
        new = malloc(sizeof(struct Node));
        printf("Enter element: ");
        scanf("%d", &data);
        new->data = data;
        new->next = head;
        head = new;
    }
}

void display(){
    if(head == NULL){
        printf("Empty!!!");
    } else{
        struct Node *temp;
        temp = head;
        while(temp != NULL){
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}