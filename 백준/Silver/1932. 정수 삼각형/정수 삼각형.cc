#include <iostream>
#include <algorithm>
using namespace std;

int arr[501][501] = { 0, };
int dp[501][501] = { 0, };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, maxVal;
    maxVal = 0;
    cin >> n; //삼각형 크기
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) { 
            cin >>arr[i][j];
        }
    }
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) { //층 
            dp[i][j] =  max(dp[i-1][j], dp[i-1][j-1])+arr[i][j];
        }
    }
 
    for (int i = 1; i <= n; i++)
    {
        maxVal = max(maxVal, dp[n][i]);
    }
    cout << maxVal;
}