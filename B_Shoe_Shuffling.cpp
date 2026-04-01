#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n;
		cin >> n; 
		vector<long long> sizes(n);
		for (int i = 0; i < n; i++) 
			cin >> sizes[i];

		map<long long, long long> freq; 
		for (int i = 0; i < n; i++) 
			freq[sizes[i]]++;

		long long flag = 0; 
		for (auto i : freq)
		{
			if (i.second == 1)
			{
				flag = 1;
				break;
			}
		}

		if (flag)
		{
			cout << -1 << endl;
			continue;
		}

		vector<long long> students(n); 
		for (int i = 0; i < n; i++) 
			students[i] = i + 1;

		long long l = 0, r = 0;
		while (r < n) 
		{
			if (sizes[l] == sizes[r])
				r++;
			else
			{
				// Rotate the segment of students to ensure no student gets their own shoes
				rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);
				l = r;
			}
		}
		// Rotate the last segment
		rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);

		for (auto i : students) {
			cout << i << " ";
		cout << endl;
	}
	return 0;
}
}

