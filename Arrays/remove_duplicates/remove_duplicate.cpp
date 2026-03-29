// Problem Statement:
// You are given a sorted array.
// Remove duplicates in-place & Return the number of unique elements

// Example:
// Input:  [1, 1, 2, 2, 3]
// Output: 3

// Modified array: [1, 2, 3, _, _]
// Approach 1: Two Pointers
// Idea:
// Since array is already sorted:
// Duplicates will always be next to each other

// One pointer - to track unique elements
// One pointer - to scan the array

// If arr[j] != arr[i]
// means new unique element found

// move i forward
// copy arr[j] there

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n==0) return 0;
    int i = 0; // unique tracker
    for (int j = 1; j < n; j++) { // scanner
        if (arr[j] != arr[i]) { // new unique element found
            i++; // move unique tracker forward
            arr[i] = arr[j]; // copy new unique element there
        }
    }
    return i + 1; // return number of unique elements
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int uniqueCount = removeDuplicates(arr, n);
    cout << "Number of unique elements: " << uniqueCount << endl;
    cout << "Modified array with unique elements: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}