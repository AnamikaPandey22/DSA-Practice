// Problem: Find the Missing Number
// Problem Statement: Given an array of size n-1 containing distinct numbers from 1 to n,
// find the missing number.

// Example
// Input:  [1, 2, 3, 5]
// Output: 4

// Better Approach: Hashing using unordered_set
// Time complexity = O(n) where n is the size of the input array    
// Space complexity = O(n) for the hash set

#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {
    unordered_set<int> hashSet;

    for (int i = 0; i < n - 1; i++) {
        hashSet.insert(arr[i]);
    }

    for (int i = 1; i <= n; i++) {
        if (hashSet.find(i) == hashSet.end()) {
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
