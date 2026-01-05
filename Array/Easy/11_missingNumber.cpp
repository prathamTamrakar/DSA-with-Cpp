#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// https://takeuforward.org/arrays/find-the-missing-number-in-an-array
// https://leetcode.com/problems/missing-number/description/
// https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1

int findMissingNumberWithHashing(int n, int arr[]){
    int hash[n] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
}

// Brute force approach
int missingNumber(int n, int arr[]){
    for(int i=0;i<=n;i++){
        int flag = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                flag = 1;
                break;
            }
        }

        if(flag==0) return i;
    }
    return -1;
}

// Optimal Approach 1

int findMissingNumber1(int n, int arr[]){
    int sum = (n*(n+1))/2;

    int sum2 = 0;
    for(int i=0;i<n;i++){
        sum2 += arr[i];
    }
    int ans = sum-sum2;
    return ans;
}

// if n is 10 to the power 5 then sum is 10 to the power 10 long , overflow the int range
// if we store in the long slight more memory is required
// so XOR is better
// Optimal Approach 2
// XOR

int findMissingNumber2(int n, int arr[]){
    int XOR1 = 0;
    for(int i=0;i<=n;i++){
        XOR1 = XOR1^i;
    }
    int XOR2 = 0;
    for(int i=0;i<n;i++){
        XOR2 = XOR2^arr[i];
    }
    int ans = XOR1^XOR2;
    return ans;
}

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());        
    for(int i = 0; i<n; i++){
        if(nums[i]!=i) return i;
    }
    return nums[nums.size()-1]+1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << findMissingNumberWithHashing(n,arr) << " ";
    cout << missingNumber(n,arr) << " ";
    cout << findMissingNumber1(n,arr) << " ";
    cout << findMissingNumber2(n,arr);



    return 0;
}