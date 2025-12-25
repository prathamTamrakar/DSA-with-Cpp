#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/rotate-array/description/
// https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
// https://takeuforward.org/data-structure/rotate-array-by-k-elements

void reverseArray(int nums[], int start, int end)
{
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rightRotate(int n, int arr[], int k){
    if (n == 0 || k == 0) return ;
    k = k%n;
    reverseArray(arr,0,n-1);
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);

}

// with STL reverse fucntion

void leftRotate(int n, int arr[], int k){
    if (n == 0 || k == 0) return ;
    k = k%n;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);

}

void leftRotate(int n, int arr[], int k){
    if (n == 0 || k == 0) return ;
    k = k%n;
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);
    reverseArray(arr,0,n-1);

}

void rotateLeft(int n, int arr[], int k)
{
    k = k % n;
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n + k)];
    }
}

void rotateRight(int n, int arr[], int k)
{
    k = n % k;
    int temp[k];
    for (int i = n - k; i < n; i++)
    {
        temp[i - n + k] = arr[i];
    }
    for (int i = n - k - 1; i >= 0; i++)
    {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
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
    int k;
    cin >> k;
    rotateLeft(n, arr, k);
    return 0;
}