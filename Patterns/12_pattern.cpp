#include <iostream>
using namespace std;

// 1     1
// 12   21
// 123 321
// 1234321

// [numbers, space, numbers]
// [1,6,1]
// [2,4,2]
// [3,2,3]
// [4,0,4]

void printPattern(int n){
    for(int i=0;i<n;i++){
        // numbers
        for(int j=0;j<=i;j++){
            cout << j+1 ;
        }
        // space 
        for(int j=0;j<2*(n-i-1);j++){
            cout << " ";
        }
        // numbers
        for(int j=i;j>=0;j--){
            cout << j+1 ;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >>n;
    printPattern(n);
    return 0;
}