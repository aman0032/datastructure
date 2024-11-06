#include <stdio.h>

void findUnion(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0;

    printf("Union of two arrays: ");
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            printf("%d ", arr1[i++]);
        else if (arr2[j] < arr1[i])
            printf("%d ", arr2[j++]);
        else {
            printf("%d ", arr2[j++]);
            i++;
        }
    }

    while (i < n1)
        printf("%d ", arr1[i++]);

    while (j < n2)
        printf("%d ", arr2[j++]);
}

int main() {
    int n1, n2;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    findUnion(arr1, arr2, n1, n2);

    return 0;
}
