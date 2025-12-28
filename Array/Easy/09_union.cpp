#include <iostream>
#include <set>
#include <vector>
using namespace std;

// https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
// https://takeuforward.org/data-structure/union-of-two-sorted-arrays

vector<int> findUnionBySet(int n, int arr1[],int m,int arr2[]){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }
    vector<int> unions;
    for(auto it : st){
        unions.push_back(it);
    }
    return unions;
}

vector<int> findUnion(int n, int arr1[],int m,int arr2[]){
    vector<int> unions;
    int i = 0;
    int j = 0;
    while (i<n&&j<m){
        if(arr1[i]<=arr2[j]){
            if(unions.size()==0 || unions.back()!=arr1[i]){
                unions.push_back(arr1[i]);
            }
            i++;
        }else {
            if(unions.size()==0 || unions.back()!=arr2[j]){
                unions.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<m){
        if(unions.size()==0 || unions.back()!=arr2[j]){
                unions.push_back(arr2[j]);
            }
        j++;
    }
    while(i<n){
        if(unions.size()==0 || unions.back()!=arr1[i]){
            unions.push_back(arr1[i]);
        }
        i++;
    }
    return unions;
    
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
    // vector<int> uni = findUnionBySet(n,arr1,m,arr2);
    vector<int> uni = findUnion(n,arr1,m,arr2);
    for(int i=0;i<uni.size();i++){
        cout << uni[i] << " ";
    }
    return 0;
}