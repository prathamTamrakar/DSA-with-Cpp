#include <iostream>
#include <set>
using namespace std;

void findUnionBySet(int n, int arr1[],int m,int arr2[]){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }
    int unions [st.size()];
    int i = 0;
    for(auto it : st){
        unions[i++] = it;
    }

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
    cin >> n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin >> arr2[i];
    }
    return 0;
}