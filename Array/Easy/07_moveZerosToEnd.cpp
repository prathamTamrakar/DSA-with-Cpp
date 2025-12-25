#include <iostream>
using namespace std;

// https://takeuforward.org/data-structure/move-all-zeros-to-the-end-of-the-array
// https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1


void moveZeros(int n, int arr[]){
    int p = n-1;
    for(int i=0;i<p;i++){
        if(arr[i]==0){
            for(int j=i+1;j<=p;j++){
                arr[j-1] = arr[j];
            }
            arr[p]=0;
            p--;
            i--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    moveZeros(n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}