#include <iostream>
using namespace std;

// https://takeuforward.org/data-structure/move-all-zeros-to-the-end-of-the-array
// https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
// https://leetcode.com/problems/move-zeroes/description/

// BruteForce Approach
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

void moveZeros2(int n, int arr[]){
    int temp[n] = {0};
    int j = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[j] = arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}

// Optimal Approach
void moveZeros3(int n, int arr[]){
    int j = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    if (j == -1) return;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
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
    moveZeros3(n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}