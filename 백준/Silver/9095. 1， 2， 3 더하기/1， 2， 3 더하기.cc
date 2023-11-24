#include <iostream>
#include<algorithm>
#include<stack>

using namespace std;

int dp[12] = { 0, };

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N, cnt;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	cin >> cnt; //케이스 개수
	int *res= new int[cnt]; //정답 배열
	
	for (int j = 0; j < cnt; j++) {
		cin >> N;
		for (int i = 4; i <= N; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		res[j]=dp[N];
	}
	for (int i = 0; i < cnt; i++) {
		cout << res[i] << endl;
	}
	
}