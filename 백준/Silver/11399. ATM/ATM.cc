#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, time;
    cin >> N;
    vector <int> pi;
    for (int i = 0; i < N; i++) {
        cin >> time;
        pi.push_back(time);
    }
    sort(pi.begin(), pi.end());

    int sum=0, res = 0;
	for (int i = 0; i < N; i++) {
		sum = sum + pi[i];
        res += sum;
	}
    cout << res;
}
