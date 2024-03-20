
#include <iostream>
using namespace std;

int a[5];
int c[5] = { 1,2,3,4 };
//int d[3] = { 1,2,3,4};
int g[] = { 1,2,3,4 };

void print(int arr[], int arrsize) {
    for (unsigned int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int b[5];
    int e[5] = { 1,2,3,4 };
    //int f[3] = { 1,2,3,4 };
    int h[] = { 1,2,3,4 };
    int sizea = sizeof(a) / sizeof(a[0]);
    int sizeb= sizeof(b) / sizeof(b[0]);
    int sizec= sizeof(c) / sizeof(c[0]);
    int sizee = sizeof(e) / sizeof(e[0]);
    int sizeh = sizeof(h) / sizeof(h[0]);
    int sizeg = sizeof(g) / sizeof(g[0]);
    print(a,sizea);
    print(b,sizeb);
    print(c,sizec);
    print(e,sizee);
    print(g,sizeg);
    print(h,sizeh);
}

