#include <stdio.h>

#define MAX_SIZE 100

int linearSearch(int array[], int size, int key) {
	int i;
    for ( i = 0; i < size; i++) if (array[i] == key) return i;
    return -1;
}

int main() {
    int array[MAX_SIZE], size, key,i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of the array: ");
    for ( i = 0; i < size; i++){
	scanf("%d", &array[i]);
}
    printf("Enter key to search: ");
    scanf("%d", &key);
    int result = linearSearch(array, size, key);
    printf(result != -1 ? "Element %d found at index %d\n" : "Element %d not found\n", key, result);
    return 0;
}

