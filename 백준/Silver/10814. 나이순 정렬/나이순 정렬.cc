#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
using namespace std;
bool compare(pair <int, string > p1, pair<int, string>p2) {
	return p1.first < p2.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, age;
	string name;
	cin >> N;
	vector<pair<int, string>> v;
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		v.push_back({age, name});
	}
	stable_sort(v.begin(), v.end(), compare);
	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << '\n';
	}
	
}
