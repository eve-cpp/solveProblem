#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int>arr;
	int sum = 0;

	string N;
	cin >> N;
	for (int i = 0; i < N.size(); i++) {
		arr.push_back(N[i] - '0');
	}
	
	sort(arr.rbegin(), arr.rend());
	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
	}

	if (sum % 3 != 0) {
		cout << -1;
	}
	else if (arr[arr.size() - 1] != 0) {
		cout << -1;
	}
	else{
		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i];
		}
	}
	
}