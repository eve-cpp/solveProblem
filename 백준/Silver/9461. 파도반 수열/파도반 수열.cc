#include <iostream>
#include <algorithm>

using namespace std;

long long dp[101] = { 0, };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int caseNum, n;
	cin >> caseNum;
	long long* res = new long long[caseNum];
	int newStart = 3;
	dp[0] = dp[1] = dp[2] = 1;
	for (int i = 0; i < caseNum; i++) {
		cin >> n;
		if (n < newStart) {
			res[i] = dp[n-1]; 
			continue;
		}
		for (int i = newStart; i < n; i++) {
			dp[i] = dp[i - 2] + dp[i - 3];
		}
		res[i] = dp[n-1];
		newStart = n-1;
	}
	for (int i = 0; i < caseNum; i++) {
		cout << res[i] << endl;
	}
}
   