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
            break;
        
        default:
            break;
        }   
    }   
}