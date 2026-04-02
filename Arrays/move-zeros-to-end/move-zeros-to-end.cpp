// Problem: Move Zeroes to End
// Move all zeroes to end while maintaining order of non-zero elements

// Approach: Two Pointer (Swap)
// i -> scans array
// j -> position to place next non-zero

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = 0; // position for next non-zero

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
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
    moveZeroes(arr, n);

    // Output
    cout << "After moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
