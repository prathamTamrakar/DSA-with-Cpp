#include <iostream>
using namespace std;

// https://takeuforward.org/data-structure/linear-search-in-c
// https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1

int linearSearch(int n,int arr[],int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int x ;
    cin >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << linearSearch(n,arr,x);
    return 0;
}