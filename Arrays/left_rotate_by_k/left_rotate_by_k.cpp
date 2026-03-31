// Left Rotate Array by K Steps
// Problem:
// Given an array, rotate it to the left by k positions

// Example:
// Input:  [1, 2, 3, 4, 5], k = 2  
// Output: [3, 4, 5, 1, 2]
// Approach: Brute Force (Repeated Single Rotations)
// Idea: Perform left rotation by one position k times.
// Time Complexity: O(n*k)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void leftRotateByK(int arr[], int n, int k) {
    k = k % n;

    for (int t = 0; t < k; t++) {

        int temp = arr[0];   // store first element

        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];   // shift
        }

        arr[n - 1] = temp;   // place at end
    }
}

int main() {
    int n, k;
    cin>> n >> k;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    leftRotateByK(arr, n, k);
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
