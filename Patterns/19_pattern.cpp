#include <iostream>
using namespace std;

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

// [stars,space,stars]
// 0 [5,0,5]
// 1 [4,2,4]
// 2 [3,4,3]
// 3 [2,6,2]
// 4 [1,8,1]
// [n-i,differnce of 2,n-i]

void printPattern(int n)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < num; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "*";
        }
        
        num += 2;
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2*(n-i-1); j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}