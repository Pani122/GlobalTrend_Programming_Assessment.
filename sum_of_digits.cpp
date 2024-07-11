#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <cmath>

int sum_of_digits(int n)
{
    if(n / 10 == 0) return n;   // if n is single digit sum is itself
    return (n % 10) + sum_of_digits(n / 10);    // add sum of each digit recursively
}
