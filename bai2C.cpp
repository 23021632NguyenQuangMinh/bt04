
#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    bool check = true;
    char a[101];
    cin >> a;
    for (int i = 0; i < strlen(a)/2; ++i) {
        if (a[i] != a[strlen(a) - i -1]) {
            cout << "NO";
            check = false;
            break;
        }
    }
    if (check) {
        cout << "YES";
    }
}
