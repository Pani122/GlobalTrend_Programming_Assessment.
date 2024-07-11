#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <cmath>

int findGCD(int a, int b) {
    if (a < b) {    // ensure that a is greater than equal to b
        int temp = a;   // if not swap
        a = b;
        b = temp;
    }
    while (b != 0) {    
        int remainder = a % b;  // find gcd based on Euclidean Algorithm
        a = b;
        b = remainder;
    }

    return a;
}
