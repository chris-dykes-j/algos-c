#include <stdio.h>

int main() {
    int array[] = { 1, 4, 5, 9, 11 };
    printf("Number at index %d\n", binarySearch(array, 4));
    printf("Number at index %d\n", binarySearch(array, 1));
    printf("Number at index %d\n", binarySearch(array, 11));
    printf("Number at index %d\n", binarySearch(array, 12));
}

int binarySearch(int array[], int key) {
    int lo = 0;
    int hi = sizeof(array);
    
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (key == array[mid]) {
            return mid;
        }
        else if (key > array[mid]) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    return -1;
}
