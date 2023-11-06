#include <iostream>
#include <vector>
#include<algorithm>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int len = 0;
	cin >> N;
	string name;
	set<string>nameList;
	for (int i = 1; i <= N; i++) {
		cin >> name;
		if (name == "ENTER") {
			nameList.insert(name);
			len += nameList.size()-1;
			nameList.clear();
		}
		else { nameList.insert(name); }
	}
	cout << len+nameList.size();
}
