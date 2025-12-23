#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int n, int arr[])
{
    // brute force
    // set<int> st;
    // for (int i = 0; i < n; i++) {
    //     st.insert(arr[i]);
    // }

    // int k = st.size();
    // int j = 0;
    // for (int x : st) {
    //     arr[j++] = x;
    // }
    // return k;

    // unordered_set<int> st;
    // int index = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (st.find(arr[i]) == st.end())
    //     {
    //         st.insert(arr[i]);
    //         arr[index] = arr[i];
    //         index++;
    //     }
    // }

    // return index;

    // optimal approach
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return ++i;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    removeDuplicates(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
