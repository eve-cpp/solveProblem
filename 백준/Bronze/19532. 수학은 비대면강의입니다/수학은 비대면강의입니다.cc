#include <iostream>
using namespace std;

void solve(int a, int b, int c, int d, int e, int f) {
    int x, y;
    for (int i = -999; i < 1000; i++) {
        for (int j = -999; j < 1000; j++) {
            if (a * i + b * j == c && d * i + e * j == f) {
                    cout << i <<" " << j;
                    break;
            }
        }
    }
}
int main() {
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    solve(a, b, c, d, e, f);
}


