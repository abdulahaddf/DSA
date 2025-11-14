#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == element) {
            return mid;
        }
        if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 20, 30, 40, 60, 65};
    int size = 18;
    int element = 30;

    int indexOfBinarySearch = binarySearch(arr, size, element);

    if (indexOfBinarySearch != -1)
        cout << "The element " << element << " is found at index " << indexOfBinarySearch << endl;
    else
        cout << "Element not found!" << endl;
}
