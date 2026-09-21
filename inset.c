// Insert an element in an array at a given position.



#include <stdio.h>

int main() {
    int array[100];
    int i, size, pos, value;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    
    printf("Enter the position (1-%d) where you want to insert: ", size + 1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

   
    for (i = size - 1; i >= pos - 1; i--) {
        array[i + 1] = array[i];
    }

    
    array[pos - 1] = value;

    
    size++;


    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}   