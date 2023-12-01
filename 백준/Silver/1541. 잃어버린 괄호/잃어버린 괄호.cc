#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>

using namespace std;

int len, tmp;
int sum = 0;
bool flag; 
char str[51];

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> str;
	len = strlen(str);

	for (int i = 0; i <= len; i++)
	{
		if (str[i] == '+' || str[i] == '-' || i == len)
		{
			if (flag == false) 
			{
				sum += tmp;
				tmp = 0;
			}
			else 
			{
				sum -= tmp;
				tmp = 0;
			}

			if (str[i] == '-') flag = true; 

		}
		else 
		{
			tmp *= 10;
			tmp += str[i] - '0'; 
		}
	}

	cout << sum;
}
