#include <stdio.h>
#define MAX_SIZE 100
int binarySearch(int array[], int size, int key) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] == key) return mid;
        else if (array[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main() {
    int array[MAX_SIZE], size, key,i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in sorted order: ");
    for ( i = 0; i < size; i++){
	 scanf("%d", &array[i]);
}
    printf("Enter key to search: ");
    scanf("%d", &key);
    int result = binarySearch(array, size, key);
    printf(result != -1 ? "Element %d found at index %d\n" : "Element %d not found\n", key, result);
    return 0;
}

