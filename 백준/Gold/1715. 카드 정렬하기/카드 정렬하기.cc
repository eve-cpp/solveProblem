#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(int a, int b) { return a > b; }

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long n, v[100000], ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    make_heap(v, v + n, cmp);
    int s;
    while (n > 1)
    {
        s = 0;
        pop_heap(v, v + n, cmp); 
        s += v[--n];
        pop_heap(v, v + n, cmp); 
        s += v[--n];
        ans += s;
        v[n++] = s; 
        push_heap(v, v + n, cmp);
    }
    cout << ans;
}