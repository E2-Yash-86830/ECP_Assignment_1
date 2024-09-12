#include <stdio.h>

int findMaximum(int arr[], int n) {
    int max = arr[0]; // Initialize max with the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {10, 5, 20, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maximum = findMaximum(arr, n);
    printf("The maximum element is: %d\n", maximum);

    return 0;
}
