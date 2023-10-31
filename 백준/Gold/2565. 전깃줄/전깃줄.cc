#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include<utility>
#include <algorithm>
#include <cstring>
#include <vector>

int arr1[500];
int arr2[500];
int dp[500] = {1,};
bool compare(pair<int, int>a, pair<int, int>b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	else {
		return a.first < b.first;
	}
}

int main() {
	int n;
	int x, y;
	vector<pair<int, int>> v;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin>> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), compare);


	int maxVal = -100;
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (v[i].second > v[j].second)
				dp[i] = max(dp[i], dp[j] + 1);
				maxVal = max(maxVal, dp[i]);
		}
	}

	cout<< n - maxVal;


}