#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <cmath>

void rotate_array_by_Ksteps(vector<int>& arr, int k) {
    k = k % arr.size();

    reverse(arr.begin(), arr.begin() + (arr.size() - k));   // reversing first n-k elements
    reverse(arr.begin() + (arr.size() - k), arr.end());     // reversing last k elements

    reverse(arr.begin(), arr.end());                        // reversing whole array
}
