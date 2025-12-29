#include <iostream>
using namespace std;

int maximumConsecutiveOnes(int n, int arr[]){
    // cout << *(arr+2)<< " ";
    // cout << arr+2;
    // return 1;
    int maxCount = 0;
    int currMax = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            currMax++;
            maxCount = max(maxCount,currMax);
        } else {
            currMax = 0 ;
        }
    }
    return maxCount;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << maximumConsecutiveOnes(n,arr);

    return 0;
}