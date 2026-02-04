#include <iostream>
using namespace std;

auto twoSum(int n, int arr[],int k){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==k){
                return [i,j];
            }
        }
    }
}

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    auto result = twoSum(n,arr,k);
    return 0;
}