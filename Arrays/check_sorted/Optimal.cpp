// Problem Statement:
// Given an array arr of size n, check whether the array is sorted in non-decreasing order or not.

// Non-decreasing means:
// arr[i] <= arr[i+1]
// Examples:
// Input:  [1, 2, 3, 4, 5]
// Output: true

// Input:  [5, 3, 4, 1]
// Output: false 

// Idea:
// Compare every element with all elements after it

// Time Complexity: O(n) (optimal)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

bool check_sorted(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout<<"ENter n "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    if(check_sorted(arr, n)) {
        cout<<"Array is sorted."<<endl;
    } else {
        cout<<"Array is not sorted."<<endl;
    }
    return 0;

}