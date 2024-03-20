
#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    bool f = false;
    int a[10001] = {};
    for (int i = 0; i <= N; ++i) {
        int t;
        cin >> t;
        a[t]++;
    }
    for (int i = 0; i <= N; i++) if (a[i] >= 2) f = true;
    if (f == false) cout << "No";
    else cout << "Yes";
}
