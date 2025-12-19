#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}
int main()
{
    int a[] = {1, 5, 3, 2};
    sort(a, a + 4);
    for (int i : a)
    {
        cout << i << " "; // 1 2 3 5
    }
    cout << endl;
    vector<int> v = {1, 5, 3, 2};
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " "; // 1 2 3 5
    }
    cout << endl;
    int arr[] = {1, 5, 3, 2};
    sort(arr + 2, arr + 4);
    for (int i : arr)
    {
        cout << i << " "; // 1 5 2 3
    }
    cout << endl;
    // In decending order
    sort(a, a + 4, greater<int>());
    for (int i : a)
    {
        cout << i << " "; // 5 3 2 1
    }
    cout << endl;
    // sort In my own way
    pair<int, int> ar[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it accoding to second element
    // if second element is same , then sort
    // it accoding to first element but in decending

    // comp is self written compartor which returns boolean

    sort(ar, ar + 3, comp);
    for (auto it : ar)
    {
        cout << it.first << " " << it.second << endl; // 1 2 3 5
    }
    // {4,1},{2,1},{1,2}

    int num = 7;
    int count = __builtin_popcount(num);
    cout << count << endl; // 3
    // __builtin_popcount(n) returns the number of set bits (1s)
    // in the binary representation of the integer n.
    // Example: n = 7 (binary: 111) → result = 3
    // Counts how many bits are set to 1 in the binary form of num
    // Uses a GCC built-in function for fast execution

    long long n = 52651565515655;
    int cnt = __builtin_popcountll(n);
    cout << cnt << endl; // 25

    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    // 123
    // 132
    // 213
    // 231
    // 312
    // 321

    string s2 = "231";
    do
    {
        cout << s2 << endl;
    } while (next_permutation(s2.begin(), s2.end()));
    // 231
    // 312
    // 321
    int arrr[] = {12,3,45,6,3,45,644,4,55,66,6,65};
    int maxi = *max_element(arrr,arrr+12);
    cout << maxi ;

    return 0;
}