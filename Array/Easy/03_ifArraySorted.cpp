#include <iostream>
using namespace std;

// https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
// https://takeuforward.org/data-structure/check-if-an-array-is-sorted

bool findArraySorted(int n, int arr[]){
    if (n <= 1) return true;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout << findArraySorted(n,arr);
    return 0;
}