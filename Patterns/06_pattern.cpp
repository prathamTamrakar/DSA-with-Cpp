#include <iostream>
using namespace std;

//  1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1

void printPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout << j+1 << " ";
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