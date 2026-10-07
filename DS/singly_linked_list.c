// Program to do Sinly Linked List operations
#include <stdio.h>
#include <stdlib.h>
int data, counter = 0;

struct Node{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void insert_0();
void insert();
void insert_end();
void update();

void insert_0(){
    struct Node* new_node;
    new_node = malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &data);
    new_node -> data = data;
    new_node -> next = NULL;
    head = new_node;
    counter+=1;
}

void insert(){
    printf("%d", head->data);
    struct Node* new_node;
    new_node = malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &data);
    new_node -> data = data;
    new_node -> next = head;
    head = new_node;
    counter+=1;
}

void insert_end(){
    struct Node* new_node;
    new_node = malloc(sizeof(struct Node));
    struct Node *temp;
    temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    printf("Enter data: ");
    scanf("%d", &data);
    new_node ->data = data;
    new_node ->next = NULL;
    temp -> next = new_node;
    counter+=1;
}

void update(){
    int i =1;
    int position;
    if(head == NULL){
        printf("No nodes!!!");
    }else{
        printf("Enter the position: ");
        scanf("%d", &position);
        if(position > counter || position < 1){
            printf("Can't update: ");
        }else{
            struct Node *update;
            update = head;
            printf("Enter new element: ");
            scanf("%d", &data);
            while(i<position){
                update = update->next;
                i++;
            }
            update -> data = data;
            printf("Ater update: ");
            display();
        }
    }
    
}

void display(){
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
}

void delete(){
    if(head == NULL){
        printf("No nodes");
    }else{
        struct Node* new_node;
        new_node = head;
        struct Node* node;
        node = head;
        int i = 1, position;
        printf("Enter position: ");
        scanf("%d", &position);
        if(position > counter || position < 1){
            printf("Can't update: ");
        }else{
            while (i<position-1){
                new_node = new_node->next;
                i++;
            }
            while (i<position+2){
                node = node->next;
                i++;
            }
            new_node -> next = node;
        }

    }
}


int main(){
    int choice;
    while(1){
        printf("\n---Singly Linked List---\n");
        printf("1.Insert\n2.Update\n3.Delete\n4.Display\n5.Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                // Insert
                printf("\n1.Begining\n2.End");
                printf("Enter Choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    if(head == NULL){
                       insert_0(); 
                    }else{
                        insert();
                    }
                    break;
                    
                    case 2:
                        if(head == NULL){
                            insert_0(); 
                        }else{
                            insert_end();
                        }
                        break;
                default:
                    printf("Invalid choice!!!");
                    break;
                }
                break;

            case 2:
               // Update
                update();

            case 3:
                // Delete;
                delete();

            case 4:
                // Display
                display();
            
        default:
            break;
        }   
    }   
}