#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// https://takeuforward.org/data-structure/longest-subarray-with-given-sum-k
// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
// https://leetcode.com/problems/subarray-sum-equals-k/

// brute force
int longestSubarray(int n, int arr[],int k){
    int maxLength = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currentSum = 0;
            for(int k=i;k<=j;k++){
                currentSum+=arr[i];
            }
            if(currentSum==k){
                maxLength = max(maxLength,j-i+1);
            }
        }
    }
    return maxLength;
}

// O(n2)
int longestSubarray1(int n, int arr[],int k){
    int maxLength = 0;
    for(int i=0;i<n;i++){
        int currentSum = 0;
        for(int j=i;j<n;j++){
            currentSum+=arr[j];
            if(currentSum==k){
                maxLength = max(maxLength,j-i+1);
            }
        }
    }
    return maxLength;
}

// better
// O(n)
// only for positives
// this is optimal approach for positives, negatives, zeroes
int longestSubarray2(int n, int arr[],int k){
    int maxLength = 0;
    int sum = 0;
    map<int,int>preSumMap;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxLength=max(maxLength,i+1);
        }
        int rem = sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLength = max(maxLength,len);
        }
        // preSumMap[sum] = i;
        // also for zeros
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    return maxLength;
}

// optimal
int longestSubarray3(int n, int arr[],int k){
    int maxLength = 0;
    int right = 0,left = 0;
    int sum = arr[0];
    while(right < n){
        while(left<=right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum==k){
            maxLength = max(maxLength, right-left+1);
        }
        right++;
        if(right<n) sum +=arr[right];
    }
    return maxLength;
}


int main()
{
    int n;
    cin >> n;
    int k ;
    cin >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << longestSubarray3(n,arr,k);
    return 0;
}