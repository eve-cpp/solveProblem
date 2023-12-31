#include <iostream>
#include <climits>
using namespace std;


int main() {
    long long result = 0, overflow = 0;
    int n;

    for (int dataset = 0; dataset < 3; dataset++) {
        cin >> n;

        result = 0;
        overflow = 0;

        for (int i = 0; i < n; i++) {
            long long tmp;
            cin >> tmp;

            if (result > 0 and tmp > 0 and tmp > LLONG_MAX - result) {
                //result = result + tmp - LLONG_MIN;
                overflow += 1;
            }

            if (result < 0 and tmp < 0 and tmp < LONG_MIN - result) {
                //result = result + tmp - LLONG_MAX;
                overflow -= 1;
            }

            result += tmp;
        }

        if (overflow < 0) {
           cout << "-\n";
        }
        else if (overflow > 0) {
            cout << "+\n";
        }
        else if (result == 0) {
            cout << "0\n";
        }
        else if (result < 0) {
            cout << "-\n";
        }
        else if (result > 0) {
            cout << "+\n";
        }
    }

}

// 오버플로우/언더플로우 발생을 카운트하여 수행
