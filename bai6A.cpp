
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void getValue(int a[]) {
    srand(time(NULL));
    for (int i = 0; i < 30; i++) {
        a[i] = rand() % 100 + 1;
    }
}

void print(int a[]) {
    for (int i = 0; i < 30; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int a[]) {
    int temp;
    bool swapped = true;
    for (int k = 29; k > 0 && swapped; k--) {
        swapped = false;
        for (int i = 1; i <= k; i++) {
            if (a[i - 1] > a[i]) {
                temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
                swapped = true;
            }
        }
    }
}
int main()
{
    int a[30];
    getValue(a);
    print(a);
    bubbleSort(a);
    print(a);
}
