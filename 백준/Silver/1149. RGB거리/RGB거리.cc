#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, r,g,b;
    cin >> N;
    int *arrR=new int[N+1];
    int *arrB=new int[N+1];
    int *arrG=new int[N+1];
    cin >> r >> g >> b;
    arrR[0] = r;
    arrG[0] = g;
    arrB[0] = b;

    for (int i = 1; i < N; i++) {
        cin >> r >> g >> b;
        arrR[i]=min(arrG[i-1],arrB[i-1])+r;
        arrG[i]=min(arrR[i-1],arrB[i-1])+g;
        arrB[i]=min(arrG[i-1],arrR[i-1])+b;
    }
    int res = min(min(arrR[N - 1], arrG[N - 1]), arrB[N - 1]);
    cout << res << endl;
}