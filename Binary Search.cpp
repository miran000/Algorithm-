

#include <iostream>
using namespace std;

// Binary search function
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;


        if (arr[mid] == target)
            return mid;


        if (arr[mid] < target)
            left = mid + 1;


        else
            right = mid - 1;
    }


    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 10;
    int result = binarySearch(arr, 0, size - 1, target);

    if (result == -1)
        cout << "Element not found in the array." << endl;
    else
        cout << "Element found at index " << result << " " << endl;

    return 0;
}

