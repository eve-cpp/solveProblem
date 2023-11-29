using namespace std;
#include <iostream>
#include <memory>

int dp[10002] = { 0, };
int arr[10002] = { 0, };


int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);
    for (int i = 3; i <= n; i++) {
        if (arr[i] != 0) {
            dp[i] = max(max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]), dp[i - 1]);
        }
        else {
            dp[i] = dp[i - 1];
        }
          }
    cout << dp[n];

}