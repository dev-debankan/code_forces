#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; // Number of test cases
	cin >> t;
	while (t--)
	{
		long long start, jumps; // 'start' is the initial position, 'jumps' is the number of jumps
		cin >> start >> jumps;

		long long final_pos; // Variable to store the final position after all jumps

		// Determine the effect of the number of jumps on the position
		if (jumps % 4 == 1)
			final_pos = -jumps; // If jumps % 4 == 1, move left by 'jumps'
		else if (jumps % 4 == 2)
			final_pos = 1; // If jumps % 4 == 2, move right by 1
		else if (jumps % 4 == 3)
			final_pos = jumps + 1; // If jumps % 4 == 3, move right by 'jumps + 1'
		else if (jumps % 4 == 0)
			final_pos = 0; // If jumps % 4 == 0, no net movement

		// Adjust the final position based on the parity of the starting position
		if (start % 2 == 0)
			final_pos = start + final_pos; // If starting position is even, add the calculated position
		else
			final_pos = start - final_pos; // If starting position is odd, subtract the calculated position

		cout << final_pos << endl; // Output the final position
	}
	return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)
