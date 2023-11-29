#include <iostream>
#include<algorithm>
#include<stack>

using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    int dp[91] = { 0,1,1,2 };
    cin >> N;

    long long out[91][2];
    out[0][0] = 0;
    out[0][1] = 1;
    double output;
    for (int i = 1; i < N; i++)
    {
        out[i][0] = out[i - 1][0] + out[i - 1][1];
        out[i][1] = out[i - 1][0];
    }
   cout << out[N - 1][0] + out[N - 1][1] << endl;
}
