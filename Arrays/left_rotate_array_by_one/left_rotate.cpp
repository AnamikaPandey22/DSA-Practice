// Problem: Left Rotate Array by One
// Goal:
// [1, 2, 3, 4, 5] -> [2, 3, 4, 5, 1]
// Approach: Single Pass (Shifting)
// Idea: Store the first element in a temporary variable, shift all elements to the left by one position, and place the stored element at the last position.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int rotateLeftByOne(int arr[], int n) {
    if (n==0) return 0; // edge case: empty array
    int temp = arr[0]; // store the first element
    for (int i=0; i<n-1; i++) {
        arr[i] = arr[i+1]; // shift elements to the left
    }
    arr[n-1] = temp; // place the stored element at the last position
    return 0;
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    rotateLeftByOne(arr, n);
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}