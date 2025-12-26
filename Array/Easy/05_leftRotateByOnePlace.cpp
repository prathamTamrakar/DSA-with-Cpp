#include <iostream>
using namespace std;

// https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
// https://takeuforward.org/data-structure/left-rotate-the-array-by-one

void rotateArray(int n,int arr[]){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    rotateArray(n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}