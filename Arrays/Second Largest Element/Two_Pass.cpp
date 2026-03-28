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

// Approach: Two Pass
// 1. Traverse the array to find the largest element
// 2. Traverse the array again to find the largest element that is smaller than the largest element
// Time Complexity: O(n) + O(n) = O(n)
// Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[], int n) {
    int largest = arr[0];
    
    // Find largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    int second = -1;

    // Find second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] < largest && arr[i] > second) {
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