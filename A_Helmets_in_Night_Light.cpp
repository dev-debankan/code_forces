#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; 
	while (t--)
	{
		long long n, p;
		cin >> n >> p;
		vector<pair<long long, long long>> v(n); 
        	vector<long long> a(n), b(n); 

		
		for (int i = 0; i < n; i++)
			cin >> a[i];

		
		for (int i = 0; i < n; i++)
			cin >> b[i];

		
		for (int i = 0; i < n; i++)
			v[i] = {b[i], a[i]};

		
		sort(v.begin(), v.end());

		long long minimum_cost = p; // Start with the cost of sharing to one resident directly
		long long already_shared = 1; // Start with one resident already informed

		// Iterate over the sorted vector
		for (auto it : v)
		{
			long long can_be_shared = it.second; // Max number of residents this resident can share with
			long long sharing_cost = it.first; // Cost for this resident to share

			// If the sharing cost is greater than or equal to direct sharing cost, break
			if (sharing_cost >= p)
				break;

			// If sharing with all possible residents exceeds total residents, adjust
			if (already_shared + can_be_shared > n)
			{
				minimum_cost += (n - already_shared) * sharing_cost;
				already_shared = n; // All residents are informed
				break;
			}
			else
			{
				minimum_cost += can_be_shared * sharing_cost; // Add cost for sharing
				already_shared += can_be_shared; // Update the count of informed residents
			}
		}

		// Add the cost for the remaining residents to be informed directly
		minimum_cost += (n - already_shared) * p;
		cout << minimum_cost << endl; // Output the minimum cost for this test case
	}
	return 0;
}


