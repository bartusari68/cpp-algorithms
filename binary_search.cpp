#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = (int)arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> numbers = {2, 5, 8, 12, 16, 23, 38, 56, 72};
    int target = 23;

    int index = binarySearch(numbers, target);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}
