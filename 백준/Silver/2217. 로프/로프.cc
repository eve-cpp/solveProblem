#include <iostream>
#include<algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long k, w;
    cin >> k;
    long long* arr = new long long[k];

    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+k);

    long long ans = 0;
    long long tmp = 0;
    for (int i = 0; i < k; i++){
        tmp = arr[i]*(k-i);
        ans = max(ans, tmp);
    }
    cout << ans << '\n';
    return 0;
}