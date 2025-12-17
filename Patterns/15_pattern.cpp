#include <iostream>
using namespace std;

// A B C D E
// A B C D
// A B C
// A B
// A



void printPattern(int n){

    for(int i=0;i<n;i++){
       for(char ch='A';ch<'A' + n - i;ch++){
            cout << ch << " ";
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