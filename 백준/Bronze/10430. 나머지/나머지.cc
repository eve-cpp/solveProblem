#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A,B,C;
	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A*B) % C << endl;
	cout << ((A % C)*(B % C)) % C << endl;


}
