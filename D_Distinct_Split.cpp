#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the length of the string
		string s;
		cin >> s; // Read the string

		unordered_set<char> st; // Set to store distinct characters
		vector<long long> prefix_unique_count(n + 1, 0); // Vector to store the count of unique characters in prefix
		vector<long long> suffix_unique_count(n + 1, 0); // Vector to store the count of unique characters in suffix

		// Calculate the number of distinct characters in the prefix for each position
		for (long long i = 1; i <= n; i++) // Iterate over the string
		{
			st.insert(s[i - 1]); // Insert character into set
			prefix_unique_count[i] = st.size(); // Store the size of the set (number of distinct characters)
		}

		st.clear(); // Clear the set for reuse

		// Calculate the number of distinct characters in the suffix for each position
		for (long long i = n; i >= 1; i--) // Iterate over the string in reverse
		{
			st.insert(s[i - 1]); // Insert character into set
			suffix_unique_count[i] = st.size(); // Store the size of the set (number of distinct characters)
		}

		long long ans = 0; // Variable to store the maximum possible value of f(a) + f(b)
		// Find the maximum value of f(a) + f(b) by iterating over possible split points
		for (long long i = 0; i < n; i++) // Iterate over possible split points
			ans = max(ans, prefix_unique_count[i] + suffix_unique_count[i + 1]); // Update the maximum value
		cout << ans << endl; // Output the result for the current test case
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(2*10^5)
// Space Complexity (SC): O(n) = O(2*10^5)
