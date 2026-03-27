// Given an array of integers nums, return the value of the largest element in the array
// Example
// Input: nums = [3, 3, 6, 1]
// Output: 6
// Explanation: The largest element in array is
// Approach: Linear scan
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3, 3, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << largest << endl;
    return 0;
}