#include<cstring>
#include <iostream>
using namespace std;

char a[3];
char c[5] = "abcd";
//char d[3] = "abcd";
char h[] = "abcd";

void print(char a[]) {
    for (int i = 0; i < strlen(a); i++) {
        cout << a[i];
    }
    cout << endl;
}
int main()
{
    char b[3];
    char e[5] = "abcd";
    //char f[3] = "abcd";
    char g[] = "abcd";
    print(a);
    print(b);
    print(c);
    print(e);
    print(g);
    print(h);
}