#include <iostream>
#include <set>
#include <vector>
using namespace std;

// https://leetcode.com/problems/intersection-of-two-arrays/description/
// https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1

vector<int> intersectionArray(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> ans;
    int vis[n2] = {0};
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && vis[j] == 0)
            {
                ans.push_back(arr1[i]);
                vis[j] = 1;
                break;
            }
            if (arr2[j] > arr1[i])
                break;
        }
    }
    return ans;
}

vector<int> findIntersaction(int arr1[], int arr2[], int n1, int n2){
     int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]>arr1[i]){
            j++;
        }else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}



int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }
    // vector<int> uni = intersectionArray(arr1,arr2,n,m);
    vector<int> uni = findIntersaction(arr1,arr2,n,m);
    for(int i=0;i<uni.size();i++){
        cout << uni[i] << " ";
    }
    return 0;
}