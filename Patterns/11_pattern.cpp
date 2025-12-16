#include <iostream>
using namespace std;

// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1 

// if addition of row index and col index will even number then value is 1 unless 0 

void printPattern(int n){
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         if((i+j)%2==0){
    //             cout << "1 ";
    //         } else {
    //             cout << "0 ";
    //         }
    //     }
    //     cout << endl;
    // }

    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    printPattern(n);
}