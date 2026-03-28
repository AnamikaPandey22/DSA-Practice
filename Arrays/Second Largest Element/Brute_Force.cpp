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


// Approach: Brute Force
// 1. Sort the array in descending order
// 2. Traverse the sorted array and return the first element that is smaller than the largest element
// Time Complexity: O(n log n) due to sorting

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int secondlargest(int arr[], int n) {
    sort(arr, arr + n, greater<int>());
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[0]) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 4, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << secondlargest(arr, n);
    return 0;
}