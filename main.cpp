#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	vector<string> input;
	copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(input));

	if (input.empty())
		return 0;

	string curr = input[0];
	for (size_t n = 0; n < input.size() - 1; ++n)
	{
		curr = input[n];
		if (curr.empty())
		{
			cout << endl;
			continue;
		}
		if (n == 0)
		{
			cout << curr << endl;
			continue;
		}
		string next = n == input.size() ? curr : input[n + 1];

		if (next.empty())
		{
			cout << endl;
			continue;
		}

		if (next == curr)
		{
			cout << curr << endl;
			continue;
		}

		int s = 0;
		while (s < curr.size() && s < next.size() && curr[s] == next[s])
		{
			cout << ' ';
			++s;
		}

		cout << next.substr(s) << endl;

		curr = next;
	}

	return 0;
}

