#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        } else if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {10, 5, 20, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maximum, minimum;

    findMaxMin(arr, n, &maximum, &minimum);

    printf("The maximum element is: %d\n", maximum);
    printf("The minimum element is: %d\n", minimum);

    return 0;
}
