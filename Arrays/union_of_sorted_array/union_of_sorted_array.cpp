// Union of Two Sorted Arrays
// Problem Statement

// Given two sorted arrays arr1 and arr2, return a new array containing the union of both arrays.

// Union = all unique elements from both arrays & Result should also be sorted

// Example
// Input:
// arr1 = [1, 2, 3, 4]
// arr2 = [2, 3, 5, 6]

// Output:
// [1, 2, 3, 4, 5, 6]
// Time complexity = O(n + m) where n and m are sizes of arr1 and arr2 respectively
// Space complexity = O(n + m) for the result array

#include <bits/stdc++.h>
using namespace std;
vector<int> unionArray(int arr1[], int n1, int arr2[], int n2){
    vector<int> new_arr;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (new_arr.empty() || new_arr.back() != arr1[i])
                new_arr.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            if (new_arr.empty() || new_arr.back() != arr2[j])
                new_arr.push_back(arr2[j]);
            j++;
        }
        else {
            if (new_arr.empty() || new_arr.back() != arr1[i])
                new_arr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n1) {
        if (new_arr.empty() || new_arr.back() != arr1[i])
            new_arr.push_back(arr1[i]);
        i++;
    }

    while (j < n2) {
        if (new_arr.empty() || new_arr.back() != arr2[j])
            new_arr.push_back(arr2[j]);
        j++;
    }

    return new_arr;
}