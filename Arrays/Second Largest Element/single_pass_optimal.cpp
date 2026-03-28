// Problem:
// Given an integer array arr of size n, find the second largest element in the array.

// Conditions:
// If the second largest element does not exist, return -1
// Array may contain duplicate elements
// Example:
// Input:  [3, 1, 4, 4, 5]
// Output: 4
// Input: [5, 5, 5]
// Output: -1


// Approach: Single Pass
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[], int n) {
    int largest = -1, second = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Second Largest Element is: " << secondlargest(arr, n) << endl;
}