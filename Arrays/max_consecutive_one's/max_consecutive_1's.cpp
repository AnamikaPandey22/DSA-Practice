// Problem: Count Maximum Consecutive 1's
// Problem Statement:
// Given a binary array containing only 0s and 1s,
// return the maximum number of consecutive 1's.

// Example:
// Input:  [1, 1, 0, 1, 1, 1]
// Output: 3

// Optimal Approach: Linear Traversal
// Idea:
// Traverse the array once.
// - If the current element is 1, increase the current count.
// - Update the maximum count.
// - If the current element is 0, reset the current count.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int n){
    int maxCount = 0;
    int currentCount = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            currentCount++;
            maxCount = max(maxCount, currentCount);
        }
        else{
            currentCount = 0;
        }
    }
    
    return maxCount;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int result = findMaxConsecutiveOnes(arr, n);
    cout << result << endl;
    
    return 0;
}
