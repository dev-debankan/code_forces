#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the integer n for each test case
		long long count_of_3 = 0; // Initialize counter for divisions by 3
		long long count_of_2 = 0; // Initialize counter for divisions by 2

		// Count how many times n can be divided by 3
		while (n > 0 && n % 3 == 0) // log3(n)
		{
			count_of_3++;
			n /= 3;
		}

		// Count how many times n can be divided by 2
		while (n > 0 && n % 2 == 0) // log2(n)
		{
			count_of_2++;
			n /= 2;
		}

		// If n is not reduced to 1 or if there are more divisions by 2 than by 3, it's impossible
		if (n > 1 || count_of_2 > count_of_3)
			cout << -1 << endl; // Output -1 if it's impossible
		else
			// Output the total number of moves needed
			cout << count_of_3 + (count_of_3 - count_of_2) << endl;
	}
	return 0;
}

// Time Complexity (TC): O(log2(n)) = O(30)
// Space Complexity (SC): O(1)
