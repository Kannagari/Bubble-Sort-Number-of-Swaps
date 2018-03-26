#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	int n;
	int numSwaps = 0;
	cin >> n;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}

	//For loops, to compare the indices for bubble sort
	for (int i = 0; i<n; i++)
	{

		for (int j = 0; j <n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				//Using the swap function and incrementing the number of swaps required
				swap(a[j], a[j + 1]);
				numSwaps++;

			}

		}


	}

	cout << "Array is sorted in " << numSwaps << " swaps." << endl;
	cout << "First element: " << a[0] << endl;
	cout << "Last Element: " << a[n - 1] << endl;

	return 0;
}
