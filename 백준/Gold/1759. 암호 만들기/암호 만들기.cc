#include <iostream>
#include <vector>
#include<algorithm>
#include <set>
#include <string>
using namespace std;

int L, C;
int moCnt, jaCnt; 
char alphaArr[20];
char ansArr[20];

void func(int depth, int start, int moCnt, int jaCnt) {
	if (depth == L) {
		if (moCnt >= 1 && jaCnt >= 2) {
			for (int i = 0; i < L; i++) {
				cout << ansArr[i];
			}
			cout << "\n";
			return;
		}
	}

	for (int i = start; i < C; i++) {
		ansArr[depth] = alphaArr[i];

		if (alphaArr[i] == 'a' || alphaArr[i] == 'e' || alphaArr[i] == 'i' || alphaArr[i] == 'o' || alphaArr[i] == 'u') {
			func(depth + 1, i + 1, moCnt + 1, jaCnt);
		}
		else {
			func(depth + 1, i + 1, moCnt, jaCnt + 1);
		}

	}

}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		cin >> alphaArr[i];
	}

	sort(alphaArr, alphaArr + C);
	func(0, 0, 0, 0);

}