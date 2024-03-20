
#include <iostream>
#include <string>
using namespace std;
bool doixung(int n) {
	string s = to_string(n);
	for (int i = 0; i < s.length() / 2; ++i) {
		if (s[i] != s[s.length() - i - 1]) {
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin >> t;
	int a, b;
	while (t--) {
		cin >> a >> b;
		int count = 0;
		for (int i = a; i <= b; ++i) {
			if (doixung(i)) {
				count++;
			}
		}
		cout << count << endl;
	}
}

