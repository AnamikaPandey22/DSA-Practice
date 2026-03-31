// Problem: Left Rotate Array by K Steps
// Given an array, rotate it to the left by k positions (in-place)

// Example:
// Input:  [1, 2, 3, 4, 5], k = 2  
// Output: [3, 4, 5, 1, 2]

// Approach: Reverse Method (Optimal)
// Instead of rotating k times, we use reversal to achieve rotation in O(n)

// Steps:
// 1. Reverse the first k elements
// 2. Reverse the remaining (n-k) elements
// 3. Reverse the entire array

// Time Complexity: O(n)
// Space Complexity: O(1) (in-place)

#include <bits/stdc++.h>
using namespace std;

void leftRotateByk(int arr[], int n, int k) {
    if (n == 0) return; // Edge case: empty array

    k = k % n; // Handle cases where k > n

    // Step 1: Reverse first k elements (0 to k-1)
    int start = 0;
    int end = k - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Step 2: Reverse remaining elements (k to n-1)
    start = k;
    end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Step 3: Reverse the whole array (0 to n-1)
    start = 0;
    end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Perform left rotation
    leftRotateByk(arr, n, k);

    // Output rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}