// 1. Remove duplicate elements in the vector

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<char> v{ 'a', 'b', 'b', 'a', 'e', 'd', 'd', 'b' };

	for (auto i : v) cout << i << " "; cout << endl; // a b b a e d d b

	sort(v.begin(), v.end());
	auto iterator = unique(v.begin(), v.end());
	v.erase(iterator, v.end());


	for (auto i : v)

		cout << i << " ";

	cout << endl; // a b d e

}