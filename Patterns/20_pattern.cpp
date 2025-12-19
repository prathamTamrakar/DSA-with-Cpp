#include <iostream>
using namespace std;

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// [space,star,space]
// 0 [1,8,1]
// 1 [2,6,2]
// 2 [3,4,3]
// 3 [4,2,4]
// 4 [5,0,5]



void printPattern(int n){
    int spaces = 2*n-2;
    for(int i=0;i<2*n-1;i++){
        int stars = i;
        if(i+1>n) stars = 2*n-i-2;
        for(int j=0;j<=stars;j++){
            cout << "*";
        }
        for(int j=0;j<spaces;j++){
            cout << " ";
        }
        for(int j=0;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
        if(i+1<n) spaces-=2;
        else spaces+=2;
    }
}


int main()
{
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}