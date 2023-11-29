using namespace std;
#include <iostream>
#include <memory>

long long dp[102][12];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	dp[1][10] = 9;
	dp[1][0] = 0;

	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i < 9; i++) {
		dp[2][i] = 2;
	}

	dp[2][0] = dp[2][1] = dp[2][9] = 1;
	dp[2][10] = 17;

	for (int i = 3; i <= n; i++) {
		dp[i][0] = dp[i - 1][1];
		dp[i][9] = dp[i - 1][8];
		dp[i][10] =(dp[i][0] + dp[i][9])% 1000000000;
		for (int j = 1; j < 9; j++) {	
			dp[i][j] = (dp[i - 1][j-1]+ dp[i - 1][j+1])% 1000000000;
			dp[i][10] += dp[i][j];
			dp[i][10] %= 1000000000;
		}
	}
	
	cout << dp[n][10] << endl;
}