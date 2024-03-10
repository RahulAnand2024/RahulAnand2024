#include<iostream>
using namespace std;
int check_char(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 0;
	else if (c >= 'a'&&c <= 'z')
		return 1;
	else
		return -1;
}

int main() {
	int t = 1;
	int T;
	char c; 
	cin >> c;
	cout << check_char(c) << endl;
	return 0;
}
