#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <cmath>

int max_difference(vector<int>& arr) {
    int min_element = arr[0];   // keep track of minimmum element in the array
    int max_element = arr[0];   // keep track of maximmum element in the array

    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max_element) {
            max_element = arr[i];   // update the current element as max element
        }
        else if (arr[i] < min_element) {
            min_element = arr[i];   // update the current element as min element
        }
    }

    return max_element - min_element;   // return the difference between max and min elements of array
}
