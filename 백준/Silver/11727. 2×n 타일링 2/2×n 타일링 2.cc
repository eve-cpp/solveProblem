#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

		int dp[1001];
		dp[1] = 1, dp[2] = 3, dp[3] = 5, dp[4] = 11;
		int N;
		cin >> N;
		for (int i = 5; i <= N; i++) {
			dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
		}
		cout << dp[N] << endl;
	}
   