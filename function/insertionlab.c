// taking input for delition of element in array 

#include <stdio.h>

int main() {
    int array[100], position, i, n, value;
    //array[100] = {1,2,3,45,6,7,7,8....};

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for (i = n - 1; i >= position - 1; i--) {
        array[i + 1] = array[i];
    }

    array[position - 1] = value;
    n++; // Increase the number of elements

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
