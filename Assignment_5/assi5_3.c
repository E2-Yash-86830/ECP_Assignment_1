#include<stdio.h>

void reverse(int arr[], int size)
{
    int revarr[size];
    for (int i = 0; i < size; i++) {
        revarr[i] = arr[size - i - 1];
    }

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", revarr[i]);
    }
    printf("\n");
}

int main()
{
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int oriarr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &oriarr[i]);
    }

    reverse(oriarr, size);

    return 0;
}

