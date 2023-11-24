#include <iostream>
#include<algorithm>
#include<stack>

using namespace std;
int flag0[41] = { 0, };
int flag1[41] = { 0, };

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
   
    flag0[0] = 1;
    flag1[1] = 1;

	int test_case, N;
	cin >> test_case;
    int* res = new int[test_case];
    int past = 2;
	for (int i = 0; i < test_case; i++) {
		cin >> N;
        if (N < past) {
            res[i] = N;
            continue;
        }
       for (int j = 2; j <= N; j++) {
            flag0[j] = flag0[j - 1] + flag0[j - 2];
            flag1[j] = flag1[j - 1] + flag1[j - 2];
       }
       
    res[i] = N;
    past = max(N, past);
	}
    for (int i = 0; i < test_case; i++) {
        cout<< flag0[res[i]] <<" "<< flag1[res[i]] << endl;
    }
	
}