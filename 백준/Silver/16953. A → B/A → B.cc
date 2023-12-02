#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a, b, res;
void func(int num, int step) {
	if (a == num) {
		res = step;
		return;
	}
	else if (a > num || num == 1) {
		res = -1;
		return;
	}
	else if (num % 10 == 1) func(num / 10, ++step);
	else if(num % 2 == 0) func(num / 2, ++step);
	else {
		res = -1;
			return;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>> a >> b;
	func(b, 1);
	cout << res;
}