#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include<set>
using namespace std;

/*bool compare(pair<int, int>p1, pair<int, int>p2) {
	if (p1.first == p2.first) {
		return p1.second < p2.second;
	}
	return p1.first < p2.first;
}*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,x,y;
	cin >> N;
	vector<pair<int, int>> a;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		a.push_back({ x, y });
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < N; i++) {
		cout << a[i].first <<" " << a[i].second << '\n';
	}
}
