#include <bits/stdc++.h>
using namespace std;

// This program calculates the longest interval of divisors for a given number n.
// The interval [1, k] is such that n is a multiple of every integer i in the interval.

int main()
{
    // Read the number of test cases
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long a = 1;
        int k = 1;
        for (int i = 2; i <= 50; ++i)
        {
            a = lcm(a, i); // lcm of previous a and current i
            if (n % a == 0)
                k = i;
            else
                break;
        }
        cout << k << endl;
    }
    return 0;
}

// Time Complexity (TC): O(50) per test case
// Space Complexity (SC): O(1)