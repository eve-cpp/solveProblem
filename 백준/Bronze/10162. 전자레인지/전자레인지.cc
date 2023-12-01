#include <iostream>
#include<algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//int a=300, b=60, c=10;
	int arr[4] = { 300,60,10};
	long long res[4] = { 0, };
	long long t;
	cin >> t;

	for (int i = 0; i < 4;) {
		if (t < arr[i]) {
			i++;
		}
		else if (t == 0) {
			cout << res[0] << " " << res[1] << " " << res[2] << endl;
			return 0;
		}

		else if (t >= arr[i]) {
			res[i]++;
			t -= arr[i];
			if (res[3] >= 1) {
				cout << -1 << endl;
				return 0;
			}
		}
		
		else {
			i++;
		}

	}
}