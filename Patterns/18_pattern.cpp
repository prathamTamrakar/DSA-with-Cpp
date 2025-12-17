#include <iostream>
using namespace std;

// E
// D E
// C D E 
// B C D E
// A B C D E

void printPattern(int n){
    for(int i=0;i<n;i++){
    //    for(char ch='A'+n-1-i;ch<='A'+n-1;ch++){
    //         cout << ch << " ";
    //    }
    //    cout << endl;

    for(char ch='E'-i;ch<='E';ch++){
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