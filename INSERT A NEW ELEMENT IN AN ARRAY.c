#include <stdio.h>
#define MAX_SIZE 100
void insertElement(int array[], int *size, int position, int newValue) {
	int i;
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }
    for ( i = *size; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = newValue;
    (*size)++;
}
int main() {
    int array[MAX_SIZE];
    int size, position, newValue,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size!\n");
        return 1;
    }
    printf("Enter the elements of the array: ");
    for ( i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &position);
    printf("Enter the new value: ");
    scanf("%d", &newValue);
    insertElement(array, &size, position, newValue);
    printf("Array after insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

