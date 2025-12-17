#include <iostream>
using namespace std;

// A
// A B
// A B C
// A B C D
// A B C D E



void printPattern(int n){
    // char num = 65;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout << num << " ";
    //         num+=1;
    //     }
    //     num = 65;
    //     cout << endl;
    // }

    for(int i=0;i<n;i++){
       for(char ch='A';ch<='A'+ i;ch++){
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