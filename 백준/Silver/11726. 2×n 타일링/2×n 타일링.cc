#include <iostream>
#include <algorithm>
using namespace std;

int D[1001] = { 0, };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	cin >> n;
	D[1] = 1, D[2] = 2;
	for (int i = 3; i <= n; i++) {	
		D[i] = D[i - 1] + D[i - 2];
		D[i] %= 10007;
	}
	cout << D[n];
}