#include <iostream>
#include <set>
using namespace std;


int main() {
	int size, current_num;
	cin >> size;
	set<int> arr;
	for (int i = 0; i < size; i++) {
		cin >> current_num;
		arr.insert(current_num);
	}
	for (set<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << endl;
	}
}

