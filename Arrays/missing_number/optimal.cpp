// Problem: Find the Missing Number
// Problem Statement: Given an array of size n-1 containing distinct numbers from 1 to n,
// find the missing number.

// Example
// Input:  [1, 2, 3, 5]
// Output: 4

// Optimal Approach: Using the formula for the sum of first n natural numbers
// Time complexity = O(n) where n is the size of the input array        
// Space complexity = O(1) as we are using only constant extra space


#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {
    int total_sum = n * (n + 1) / 2;
    int arr_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        arr_sum += arr[i];
    }

    return total_sum - arr_sum;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]) + 1;
    cout << "Missing number is: " << missingNumber(arr, n) << endl;
    return 0;
}
