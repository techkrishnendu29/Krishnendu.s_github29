#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE], size,i,j, trace = 0;
    printf("Enter size of the square matrix: ");
    scanf("%d", &size);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < size; i++){
	
	 for ( j = 0; j < size; j++){
	  scanf("%d", &matrix[i][j]);
	  }
}
    for (i = 0; i < size; i++){
	trace += matrix[i][i];
}
    printf("Trace of the matrix is: %d\n", trace);
    return 0;
}

