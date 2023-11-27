#include <iostream>
#include <algorithm>
using namespace std;


int arr[15][15] = { 0 };
int pastK, pastN, K, N; //층 호수
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int caseNum; 
    cin >> caseNum;
    int* res = new int[caseNum];
    for (int i = 0; i < caseNum; i++) {
        cin >> K;
        cin >> N;
        
        if (pastK >= K && pastN >= N) {
            res[i] = arr[K][N];
            continue;
        }
        for (int zeroK = 1; zeroK <= N; zeroK++) { // 0층 처리
            arr[0][zeroK] = zeroK;
        }
        for (int N1 = 1; N1 <= K; N1++) { // 1호 처리
            arr[N1][1] = 1;
        }

        for (int cntK = 1; cntK <= K; cntK++) {
            for (int cntN = 1; cntN <= N; cntN++) {
                arr[cntK][cntN] = arr[cntK - 1][cntN]+ arr[cntK][cntN -1];
            }
        }
        res[i] =arr[K][N];
    }
    for (int i = 0; i < caseNum; i++) {
        cout << res[i] << endl;
    }
    pastK = K;
    pastN = N;

}