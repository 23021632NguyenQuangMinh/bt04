#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n] = {};
    int i = 0;
    int j = n / 2;
    a[i][j] = 1;
    for (int x = 2; x <= n * n; x++) {
        if (a[(i - 1 + n) % n][(j + 1) % n] == 0) {
            a[(i - 1 + n) % n][(j + 1) % n] = x;
            i = (i - 1 + n) % n;
            j = (j + 1) % n;
        }
        else {
            a[(i + 1) % n][j] = x;
            i = (i + 1) % n;
        }


    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}