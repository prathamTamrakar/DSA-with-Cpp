#include <iostream>
using namespace std;

//  *********
//   *******
//    *****
//     ***
//      *

// [Space,Star,Space]
// [0,9,0]
// [1,7,9]
// [2,5,0]
// [3,3,3]
// [4,1,4]
// [i, 2*n-(2*i+1), i]

void printPattern(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<i;j++){
            cout << " ";
        }
        // star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        // space
        for(int j=0;j<i;j++){
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