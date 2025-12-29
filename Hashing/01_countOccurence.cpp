#include <iostream>
using namespace std;

int count_occurence(int target,int arr[],int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << count_occurence(2,arr,n);

    return 0;
}