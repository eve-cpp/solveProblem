#include <iostream>
#include <math.h>
#include <string>
using namespace std; 

int main(void)
{
    int i, temp, flag, N;
    int cnt = 1;

    cin>> N;
    if (N == 1)
    {
        cout << 666;
        return 0;
    }
    for (i = 667;; i++)
    {
        temp = i;
        flag = 0;
        while (temp){
            if (temp % 1000 == 666){
                flag = 1;
            }
            temp /= 10;
        }
        if (flag){
            cnt++;
            if (cnt == N)
            {
                break;
            }
        }
    }
    cout << i << endl;
}