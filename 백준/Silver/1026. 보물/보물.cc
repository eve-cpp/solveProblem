#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, a;
	cin >> N;
	vector<int> aArr;
	vector<int> bArr;
	int sum = 0;

	for (int i = 0; i < N; i++) {
		cin >> a;
		aArr.push_back(a);
	}
	for (int i = 0; i < N; i++) {
		cin >> a;
		bArr.push_back(a);
	}
	sort(aArr.begin(), aArr.end());
	sort(bArr.rbegin(), bArr.rend());


	for (int i = 0; i < N; i++) {
		sum += aArr[i] * bArr[i];
	}
	cout << sum << endl;
}
