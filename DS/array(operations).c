// Program to do array operation.
#include <stdio.h>
int choice, counter = 0 , position = 0,  arr[100];
void display(){
    for(int i=0; i<counter; i++){
         printf("%d \t", arr[i]);
    }
}
int main(){
      
    while(1){
        printf("\n---Array Operations---");
        printf("\n1.Insert\n2.Delete\n3.Update\n4.Display\n5.Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:     
            // Insert      
            if(counter == 100){
                printf("Array is full can't insert");
                break;
            }else{
                printf("\nPosition to insert the element: ");
                scanf("%d", &position);
                if(position == 0 || position < 0){
                    printf("Cant insert element!!!");
                    break;
                }
                position -= 1;
                if(position > counter){
                    printf("Cant insert the element");
                    if(counter == 0){
                        printf("Array is empty");
                    }
                }else{
                    int data;
                    printf("Enter the element to insert: ");
                    scanf("%d", &data);
                    for(int i=counter-1; i>=position; i--){
                        arr[i+1] = arr[i];
                    }
                    arr[position] = data;
                    counter += 1;
                }
            }
            break;
        case 2:
            // Delete
            if(counter == 0){
                printf("Array is empty");
            }else{
                printf("\nPosition to delete the element: ");
                scanf("%d", &position);
                if(position < 1 || position > counter){
                    printf("Posiotion does not exist!!!");
                    break;
                }else{
                    for(int i=position-1; i<counter-1; i++){
                        arr[i] = arr[i+1];
                    }
                    counter -= 1;
                    printf("After deletion: ");
                    display();
                }

            }
            break;
        case 3:
            // Update
            if(counter == 0){
                printf("Array is empty: ");
            }else{
                int data;
                printf("\nPosition to delete the element: ");
                scanf("%d", &position);
                if(position <= 0|| position > counter){
                    printf("Invalid position!!!");
                    break;
                }else{
                    printf("Enter the element to update: ");
                    scanf("%d", &data);
                    arr[position-1] = data;
                    printf("After the updation: ");
                    display();
                }
            }
            break;
        case 4:
            display();
            break;
        case 5: 
            printf("Exiting....");
            return 0;    
        default:
            printf("\nInvalid choice\n");
            break;
        }
    }
}