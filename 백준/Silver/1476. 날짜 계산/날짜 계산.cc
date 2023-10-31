#include <iostream>
#include <math.h>
using namespace std; 

int main() {
    int E, S, M;
    cin >> E >> S >> M;

    int cnt = 1; 
    int answer;
    bool val = true;
    if (E == 1 && S == 1 && M == 1) {
        answer=1; val = false;
    }

    while (val) {
        if (cnt % 15 == E-1 && cnt % 28 == S-1 && cnt % 19 == M-1) {
          answer = cnt+1;
          break;
         }
        else
            cnt++;
    }
    cout << answer;
}