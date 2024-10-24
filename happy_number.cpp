// A Happy Number n is defined by the following process. Starting with n, replace it with the sum of the squares of its digits, and repeat the process until n equals 1, or it loops endlessly in a cycle that does not include 1. Those numbers for which this process ends in 1 are Happy Numbers, while those that do not end in 1 are unhappy numbers.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfDigitSquares(int n)
{
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n)
{
    unordered_set<int> seen;

    while (n != 1) {
        if (seen.count(n)) { // Check if n is already in the set
            return false; // If so, we are in a cycle
        }
        seen.insert(n); // Record the number
        n = sumOfDigitSquares(n); // Update n to the sum of squares of its digits
    }

    return true;
}

int main()
{
    int n;
    cin>>n;
    if (isHappy(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
