#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <cmath>

int LongestSubstringLength(string s) {
    int len = s.length();
    unordered_map<char, int> charMap;   // unordered map to store character and its recent index
    int left = 0;
    
    int longestSubstringLength = 0;     // compute max substring length encountered till now
    for (int right = 0; right < len; right++) {
        if (charMap.count(s[right]) == 0 || charMap[s[right]] < left) {  //check if current character is already part of substring
            charMap[s[right]] = right;
            longestSubstringLength = max(longestSubstringLength, right - left + 1);  // update max substring length
        } else {
            left = charMap[s[right]] + 1;   // consider new substring by updating left
            charMap[s[right]] = right;
        }
    }
    
    return longestSubstringLength;
}
