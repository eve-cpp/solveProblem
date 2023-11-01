#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int arr[10001] = { 0 }; 
    
    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        arr[num] ++; //입력값을 저장하는 게 아니라 입력값을 인덱스로 사용
    }
    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i << '\n';
        }
    }

}