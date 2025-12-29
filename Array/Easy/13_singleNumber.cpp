#include <bits/stdc++.h>
using namespace std;

// bruteforce method
int singleNumber(int n,int arr[]){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count==1) return arr[i];
    }
    return -1;
}

// better approach
int singleNumberProbWithHashing(int n, int arr[]){
    int maxEle = arr[0];
    for(int i=0;i<n;i++){
        maxEle = max(maxEle,arr[i]);
    }
    int hash[maxEle] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
    return -1;
}


// O(nlogn) - first n is size of the array and second n is size of map
// unordered map might take O(n^2)
// Time Complexity = O(nlogM + ((n/2)+1)) where M is (n/2)+1
// Space Complexity is O((n/2)+1)
int singleNumberWithMap(int n,int arr[]){
    map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
    return -1;
}

// Optimal approach
int findSingleNumber(int n,int arr[]){
    int XOR = 0;
    for(int i=0;i<n;i++){
        XOR = XOR^arr[i];
    }
    return XOR;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // cout << singleNumber(n,arr);
    // cout << singleNumberProbWithHashing(n,arr);
    // cout << singleNumberWithMap(n,arr);
    cout << findSingleNumber(n,arr);

    return 0;
}