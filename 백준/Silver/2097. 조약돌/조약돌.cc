#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, root;
	cin >> n;
	if (n < 5)
		cout << 4;
	else {
		root = round(sqrt(n));
		if (root * root >= n) // 딱 떨어질 때
			 cout << (root - 1) * 4;
		else
			 cout << ((root - 1) * 2) + ((root) * 2);
	}


}