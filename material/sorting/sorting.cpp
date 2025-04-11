#include <bits/stdc++.h>
using namespace std;

int main() {

    // ----------------------  Sorting static array --------------------
	int arr[] = {5, 1, 3, 2, 4};
	int N = 5;
	sort(arr, arr + N);
	for (int i = 0; i < N; i++) cout << arr[i] << " ";  // 1 2 3 4 5
	cout << endl;

	int arr2[] = {5, 1, 3, 2, 4};
	sort(arr2 + 1, arr2 + 4);
	for (int i = 0; i < N; i++) cout << arr2[i] << " ";  // 5 1 2 3 4
    cout << endl;

    // ----------------------  Sorting vector --------------------
    vector<int> v{5, 1, 3, 2, 4};
	sort(v.begin(), v.end());
	// Outputs 1 2 3 4 5
	for (int i : v) { cout << i << " "; }
	cout << endl;

	v = {5, 1, 3, 2, 4};
	sort(v.begin() + 1, v.begin() + 4);
	// Outputs 5 1 2 3 4
	for (int i : v) { cout << i << " "; }
	cout << endl;

    // ----------------------  Sorting vector of pairs --------------------
    vector<pair<int, int>> v2{{1, 5}, {2, 3}, {1, 2}};
	sort(v2.begin(), v2.end());

	/*
	 * Outputs:
	 * 1 2
	 * 1 5
	 * 2 3
	 */
	for (pair<int, int> p : v2) { cout << p.first << " " << p.second << endl; }
}