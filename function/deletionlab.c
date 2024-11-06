// Deletion
#include <stdio.h>

int main() {
    int array[100], position, i, n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position of the element to delete: ");
    scanf("%d", &position);

    if (position >= n+1 || position <= 0) {
        printf("Deletion not possible.\n");
    } else {
        // Shift elements to the left
        for (i = position - 1; i < n - 1; i++) {
            array[i] = array[i + 1];
        }
        n--; 
        // Decrease the number of elements

        printf("Array after deletion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
