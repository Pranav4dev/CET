// Program to do Sinly Linked List operations
#include <stdio.h>
#include <stdlib.h>

int main(){
    int choice;
    struct Node{
        int data;
        struct Node *next;
    };
    struct Node *head = NULL;
    while(1){
        printf("\n---Singly Linked List---\n");
        printf("1.Insert\n2.Update\n3.Delete\n4.Display\n5.Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            // Insert
            struct Node* new_node;
            new_node = malloc(sizeof(struct Node));
            if(head==NULL){
                new_node -> data = 10;
                new_node -> next = NULL;
                head = new_node;
            }else{
                struct Node *temp;
                temp = head;
                while(temp->next!=NULL){
                    temp = temp->next;
                }
                new_node ->data = 11;
                new_node ->next = NULL;
                temp -> next = new_node;
            }
            break;

            case 4:
                // Display
                if(head == NULL){
                    printf("There are no elements to display: ");
                }else{
                    struct Node *temp;
                    temp = head;
                    while(temp!= NULL){
                        printf("%d", temp->data);
                        temp = temp->next;
                    }
                }
            
        default:
            break;
        }   
    }   
}