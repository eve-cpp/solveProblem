#include <iostream>
#include <math.h>
#include <string>
using namespace std; 

int main(void)
{
	int H, M, spend;
	cin >> H >> M;
	cin >> spend;
	int temp = M + spend;
	if (temp < 60) {
		cout << H << " " << temp;
	}
	else{
		H += temp / 60;
		temp = temp % 60;

		cout << H%24 << " " << temp;
	}

}