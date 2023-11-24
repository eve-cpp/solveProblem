#include <iostream>
#include<algorithm>
#include<stack>

using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
   
	int stair_size, score;
	int stair_score[301]{ 0, };
	int dp[301] = { 0, };

	cin >> stair_size;
	for (int i = 1; i <= stair_size; i++) { //계단 점수
		cin >> score;
		stair_score[i] = score;
	}

	dp[1] = stair_score[1];
	dp[2] = stair_score[1]+ stair_score[2];
	dp[3] = max(stair_score[1] + stair_score[3], stair_score[2] + stair_score[3]);

	for (int i = 4; i <= stair_size; i++) {
		dp[i] = max(stair_score[i - 1] + dp[i - 3] + stair_score[i], dp[i - 2] + stair_score[i]);
	}

	cout << dp[stair_size] << endl;
}