#include <iostream>
using namespace std;

//      *
//     ***
//    *****
//   *******
//  *********
//  *********
//   *******
//    *****
//     ***
//      *

// [Space,Star,Space]
// [4,1,4]
// [3,3,3]
// [2,5,0]
// [1,7,9]
// [0,9,0]
// [n-i-1, 2*i-1, n-i-1]

void printPattern(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        // star
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        // space
        for(int j=0;j<n-i-1;j++){
            cout<< " ";
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