
#include <iostream>
using namespace std;
void print(char daytab [][12]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    char daytab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    
    char daytab2[2][12] = {
      31,28,31,30,31,30,31,31,30,31,30,31,
      31,29,31,30,31,30,31,31,30,31,30,31
    };
    char daytab3[2][12] = {
  {28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    char daytab4[2][12] = {
      28,31,30,31,30,31,31,30,31,30,31,
      31,29,31,30,31,30,31,31,30,31,30,31
    };
    print(daytab1);
    print(daytab2);
    print(daytab3);
    print(daytab4);
    //char a[][]={1,2,3,4}
    char a[][4] = { {1,2,3,4 }, { 1,2,3 } };
    //char a[2][] = { {2,3,2}, {3,2,2} };
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
