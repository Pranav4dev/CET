// array merge
#include <stdio.h>

int main(){
    int array_size3, array_size1, array_size2,array3[100], array1[100], array2[100], element;
    printf("---Array One---\n");
    printf("Enter the size: ");
    scanf("%d", &array_size1);
    for(int i = 0; i<array_size1; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &element);
        array1[i] = element;
        printf("\n");
    }
    printf("\nArray1 after insert: ");
    for(int i = 0; i<array_size1; i++){
        printf("%d\t", array1[i]);
    }
    printf("\n---Array Two---\n");
    printf("Enter the size: ");
    scanf("%d", &array_size2);
    for(int i = 0; i<array_size2; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &element);
        array2[i] = element;
        printf("\n");
    }
    printf("\nArray2 after insert: ");
    for(int i = 0; i<array_size2; i++){
        printf("%d\t", array2[i]);
    }

    printf("\n---After merge---\n");
    array_size3 = array_size1+array_size2;
    int i = 0;
    for(i ; i < array_size1; i++){
        array3[i] = array1[i];
    }

    int k = 0;

    for (int j = i; j<array_size3; j++){
        array3[j] = array2[k];
        k++;
    }

    for(int i = 0; i < array_size3; i++){
        printf("%d\t", array3[i]);
    }
    return 0;
}