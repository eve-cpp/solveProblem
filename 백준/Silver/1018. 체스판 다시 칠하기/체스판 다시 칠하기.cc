#include <iostream>
using namespace std;
int map[51][51];

int check(int x, int y)
{
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == map[i][j]) cnt1++; // 첫번째 블록이 흰색 일때
			if ((i + j + 1) % 2 == map[i][j]) cnt2++; // 검정색 일때
		}
	}

	return min(cnt1, cnt2); // 둘 중 최소값 반환
}

int main()
{
	int N, M;
	int min = 3000; 
	char c;

	cin >> N >> M;

	//체스판 만들기
	for (int i = 0; i < N; i++) { // B=0,  W=1
		for (int j = 0; j < M; j++) {
			cin >> c;
			if (c == 'B') map[i][j] = 0;
			else map[i][j] = 1;
		}
	}

	for (int i = 0; i <= N - 8; i++) { 
		for (int j = 0; j <= M - 8; j++) {
			if (min > check(i, j)) min = check(i, j); 
		}
	}

	cout << min;
}
