// Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.
// Example 1: Input Format: arr[] = {2,2,1} Result: 1 Explanation: In this array, only the element 1 appear once and so it is the answer.
// Approach: XOR operation
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int singleNumber(int arr[], int n) {
    int result = 0;

    // XOR all elements
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    // Input
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Function call
    int result = singleNumber(arr, n);

    // Output
    cout << "The single number is: " << result << endl;

    return 0;
}