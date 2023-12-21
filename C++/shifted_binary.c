#include <stdio.h>

int search_rotated_array(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        // Check if the target is found
        if (arr[mid] == target) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[left] <= arr[mid]) {
            // Check if the target is in the left half
            if (arr[left] <= target && target <= arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            // Check if the target is in the right half
            if (arr[mid] <= target && target <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    // Target not found
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 8, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int result = search_rotated_array(arr, n, target);

    if (result != -1) {
        printf("Target %d found at index %d\n", target, result);
    } else {
        printf("Target %d not found in the array\n", target);
    }

    return 0;
}
