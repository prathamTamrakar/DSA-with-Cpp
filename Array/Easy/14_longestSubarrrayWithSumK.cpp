#include <iostream>
using namespace std;

int longestSubarray(int n, int arr[],int k){
    int maxLength = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currentSum = 0;
            for(int k=i;k<=j;k++){
                currentSum+=arr[i];
            }
            if(currentSum==k){
                maxLength = max(maxLength,j-i+1);
            }
        }
    }
    return maxLength;
}

int main()
{
    int n;
    cin >> n;
    int k ;
    cin >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << longestSubarray(n,arr,k);
    return 0;
}