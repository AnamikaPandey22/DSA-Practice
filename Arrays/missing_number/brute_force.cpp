// Problem: Find the Missing Number
// Problem Statement: Given an array of size n-1 containing distinct numbers from 1 to n,
// find the missing number.

// Example
// Input:  [1, 2, 3, 5]
// Output: 4

//Brute Force Approach
// Time complexity = O(n^2) where n is the size of the input array
// Space complexity = O(1) as we are using only constant extra space

#include <bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n) {
    for (int i = 1; i <= n; i++) {

        bool found = false;

        for (int j = 0; j < n - 1; j++) {

            if (arr[j] == i) {
                found = true;
                break;
            }
        }

        if (!found) {
            return i;
        }
    }

    return -1;
}
int main() {
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]) + 1;
    cout << "Missing number is: " << missingNumber(arr, n) << endl;
    return 0;
}