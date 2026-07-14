// Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.
// Example 1: Input Format: arr[] = {2,2,1} Result: 1 Explanation: In this array, only the element 1 appear once and so it is the answer.
// Brute force approach: Use two loops to check for each element if it appears only once in the array. If it does, return that element.
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int singleNumber(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            return arr[i];
        }
    }
    return -1; // In case no unique element is found
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
    if (result != -1) {
        cout << "The single number is: " << result << endl;
    } else {
        cout << "No unique element found." << endl;
    }

    return 0;
}

