#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, start, end;
    cin >> N;
    vector<pair<int, int>> arr;
    for (int i = 0; i < N; i++) {
        cin >> start >> end;
        arr.push_back(make_pair(end, start)); 
    }
    sort(arr.begin(), arr.end());//끝나는 시간으로 정렬
    int time = arr[0].first; //time = 끝나는 시간
    int cnt = 1;
    for (int i = 1; i < N; i++) {
        if (time <= arr[i].second) {
            cnt++;
            time = arr[i].first;
        }
    }
    cout << cnt;
    	
}
   