
#include <iostream>
using namespace std;

int main()
{
    char a[3]="ab";
    //cout << a[-1];
    //cout << a[3]; stack... truycap
    //cout << a[4];
	char b[3][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; i++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << b[i][j];
		}
	}
}