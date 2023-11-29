#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, des;
    cin >> N >> des;
    vector <long long>a;
    long long K;
    for (int i = 0; i < N; i++) {
        cin >> K;
        a.push_back(K);
    }
    sort(a.rbegin(), a.rend());

    long long sum;
    bool st = false;
	for (int i = 0; i < N; i++) {
        if (a[i] > des) {
            continue;
        }
        else {
            if (des % a[i] == 0) {
                if (st == false){ sum = des / a[i]; cout << sum; return 0;
            }
                else {
                    sum += des / a[i]; cout << sum; return 0;
                }
            }
            else {
                if (st == false) {
                    sum = des / a[i];
                    des = des % a[i];
                    st = true;
                }
                else {
                    sum += des / a[i];
                    des = des % a[i];
                }
            }
        }
	}
}
