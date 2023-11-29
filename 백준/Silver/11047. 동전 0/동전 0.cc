------------------------------------------------------------------------------------------------------------- sol 1
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

------------------------------------------------------------------------------------------------------------- sol 2
// 더 보기 좋지만 하나하나 카운트하는 방법

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	int n;
	long long k, ans = 0;
	cin >> n >> k;
	vector<long long> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < n; i++) {
		while (k - v[i] >= 0) { //더 간단하지만 하나하나 카운트
			ans++;
			k -= v[i];
		}
	}
	cout << ans << '\n';
}




