// array operations
#include <stdio.h>
int choice;
int array[100];
int size = 0;
int element;
void insert_beginning();
void display();
void insert_pos(int pos);
void insert_end();
void delete_beginning();
void delete_pos(int pos);
void delete_end();
void modify(int pos);
int main(){
    while(1){
        printf("\n---Array_operation---\n");
        printf("1.Insert\n2.Delete\n3.Modify\n4.Display\n5.Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("---Insert---\n");
                printf("1.Beginning\n2.Any pos\n3.End\n");
                printf("Enter the choice: ");
                scanf("%d", &choice);
                switch(choice){
                    case 1:
                        insert_beginning();
                        break;

                    case 2:
                        int pos;
                        printf("Enter the position: ");
                        scanf("%d", &pos);
                        insert_pos(pos-1);
                        break;
                    case 3:
                        insert_end();
                        break;
                    default:
                        printf("Enter the correct choice!!!");
                }
                break;

            case 2:
                printf("---Delete---\n");
                printf("1.Beginning\n2.Any pos\n3.End\n");
                printf("Enter the choice: ");
                scanf("%d", &choice);
                switch(choice){
                    case 1:
                        delete_beginning();
                        break;
                    case 2:
                        int pos;
                        printf("Enter the position: ");
                        scanf("%d", &pos);
                        delete_pos(pos);
                        break;
                    case 3:
                        delete_end();
                        break;
                    default:
                        printf("Enter a valid choice!!!");
                }
                break;
            case 3:
                int pos;
                printf("---Modify---");
                printf("\nPosition to modify: ");
                scanf("%d", &pos);
                modify(pos);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting....");
                return 0;
            default:
                printf("Enter the correct choice!!!");
        }
    }

    return 0;

}

void modify(int pos){
    if(pos > size || pos < 1){
        printf("Enter the valid position!!!");
    }else{
        printf("Enter new element: ");
        scanf("%d", &element);
        array[pos-1] = element;
        printf("Array after modify: ");
        display();
    }
}

void delete_end(){
    if(size==0){
        printf("Array is Empty!!!");
    }else{
        size--;
        printf("Array after delete: ");
        display();
    }
}

void delete_pos(int pos){
    if(pos>size || pos < 1){
        printf("Invalid position");
    }else{
        int temp = pos-1;
        while(temp<size-1){
            array[temp] = array[temp+1];
            temp++;
        }
        size--;
        printf("Array after delete: ");
        display();
    }
}

void delete_beginning(){
    if(size == 0){
        printf("Array is empty!!!");
    } else{
        int temp = 0;
        while(temp < size-1){
            array[temp] = array[temp+1];
            temp++;
        }
        size--;
        printf("Array after delete: ");
        display();
    }
}

void insert_end(){
    printf("Enter the element: ");
    scanf("%d", &element);
    array[size] = element;
    size++;
    printf("Array after insert: ");
    display();
}

void insert_pos(int pos){
    if(pos>size){
        printf("Enter the position less than array size!!!");
    } else{
        printf("Enter the element: ");
        scanf("%d", &element);
        int temp = size;
        while(temp>pos){
            array[temp] = array[temp-1];
            temp--;
        }
        array[pos] = element;
        size++;
        printf("Array after insert: ");
        display();
    }
}

void insert_beginning(){
     if(size == 0){
        printf("Enter the element: ");
        scanf("%d", &element);
        array[0] = element;
     }
     else{
        printf("Enter the element: ");
        scanf("%d", &element);
        int temp = 0;
        temp = size-1;
        while(temp >= 0){
            array[temp+1] = array[temp];
            temp--;
        }
        array[0] = element;
     }
     size++;
     printf("Array after insert: ");
     display();
}

void display(){
    for (int i = 0; i<size; i++){
        printf("%d \t", array[i]);
    }
}