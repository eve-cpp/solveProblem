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
        if (cnt % 15 == E-1 && cnt % 28 == S-1 && cnt % 19 == M-1){ 
            // 다음과 같이 -1을 해 주어 (15, 28, 19)을 입력 받는 경우도 처리하도록 함
            // E의 경우 15로 나눈 나머지는 항상 0~14인데,
            //해당 문제는 항상 1 - 15 를 출력하기 때문에 값만 하나씩 당겨줌
          answer = cnt+1;
          break;
         }
        else
            cnt++;
    }
    cout << answer;
}
