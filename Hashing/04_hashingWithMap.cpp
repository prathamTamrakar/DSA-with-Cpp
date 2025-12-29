#include <iostream>
#include <map>
using namespace std;
int main()
{
    // map/unordered_map allow hashing with large or non-contiguous keys unlike arrays

    int n;
    cin >> n;
    int arr[n];
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    // map stored in sorted order
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << number << " count is : " << mpp[number] << endl;
    }

    // for character
    string s ;
    cin >> s;
    map<char,int>char_map;
    for(int i=0;i<s.length();i++){
        char_map[s[i]]++;
    }
    int qq;
    cin >> qq;
    while(qq--){
        char ch;
        cin >> ch;
        cout << ch << " count is : " << char_map[ch] << endl;
    }

    // Time complexity of map
    // in all cases it take logarithmic of n - storing and fetching etc.
    // so we can use unordered_map bcz it takes O(1) time complexity in best and average cases and in very minor worst cases it takes O(n)
    //this worst case done bcz of collisons

    return 0;
}