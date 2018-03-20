#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

typedef vector<char> Input;

int main()
{
	Input input;
	copy(istream_iterator<char>(cin), istream_iterator<char>(), back_inserter(input));

	for (auto line : input)
		cout << line;

	return 0;

}


