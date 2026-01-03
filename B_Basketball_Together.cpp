#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Read the number of players (n) and the power of the enemy team (d)
	long long n, d;
	cin >> n >> d;

	// Create a vector to store the power of each player
	vector<long long> a(n);
	// Read the power of each player
	for (int i = 0; i < n; i++) // O(n)
		cin >> a[i];

	// Sort the player powers in non-decreasing order
	sort(a.begin(), a.end()); // O(nlogn)

	// Initialize pointers and counters
	long long left = -1; // Pointer to track the leftmost player in the current team
	long long right = n - 1; // Pointer to track the rightmost player in the current team
	long long team_size = 1; // Current size of the team being formed
	long long teams = 0; // Count of teams that can win

	// Iterate until all players are considered
	while (left < right) // O(n)
	{
		// Check if the current team can defeat the enemy team
		if ((a[right] * team_size) <= d && left < right)
		{
			// If not, increase the team size by including more players from the left
			left++;
			team_size++;
		}
		else
		{
			// If the team can defeat the enemy, count this team as a win
			teams++;
			// Move the right pointer to form a new team
			right--;
			// Reset the team size for the new team
			team_size = 1;
		}
	}

	// Output the maximum number of winning teams
	cout << teams << endl;
	return 0;
}

// Time Complexity (TC): O(nlogn) = O(10^5*log2(10^5)) = O(10^6)
// Space Complexity (SC): O(n)
