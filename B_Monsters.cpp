#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n, k;
		cin >> n >> k; // Read the number of monsters and the damage value

		// Vector to store pairs of health points and their respective indices
		vector<pair<long long, long long>> health_points(n);
		for (long long i = 0; i < n; i++) // Loop through each monster
		{
			long long x;
			cin >> x; // Read the initial health points of each monster
			// Store the health points and index (1-based) as a pair
			health_points[i] = {x, i + 1};
		}

		// Adjust the health points to determine the effective health after damage
		for (long long i = 0; i < n; i++)
		{
			// Calculate the remainder of health points when divided by k
			health_points[i].first = health_points[i].first % k;
			// If the remainder is 0, set it to k to handle full damage cases
			if (health_points[i].first == 0)
				health_points[i].first = k;
		}

		// Sort the monsters based on effective health and index
		// Sort in descending order of effective health, and ascending order of index if health is the same
		sort(health_points.begin(), health_points.end(), [&](pair<long long, long long> a, pair<long long, long long> b) {
			if (a.first != b.first)
				return a.first > b.first;
			return a.second < b.second;
		});

		// Output the indices of monsters in the order they die
		for (auto it : health_points)
			cout << it.second << " ";
		cout << endl;
	}
	return 0;
}

// Time Complexity (TC): O(nlogn) = O(3*10^5log(3*10^5)) = O(10^6)
// Space Complexity (SC): O(n)
