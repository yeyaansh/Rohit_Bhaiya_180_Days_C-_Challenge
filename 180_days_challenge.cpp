// #include <iostream>
// #include <algorithm>
// #include <climits>
// #include <vector>
// using namespace std;

// bool divide(vector<int> arr)
// {
//     int max = INT_MIN, prefix = 0, total_sum = 0, n = arr.size();
//     // total sum
//     for (int i = 0; i < n; i++)
//         total_sum += arr[i];

//     for (int i = 0; i < n - 1; i++)
//     {
//         prefix += arr[i];
//         int ans = total_sum - prefix;
//         if (ans == prefix)
//             return 1;
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of Array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     cout << divide(arr);
// }

// 1. Kadane's Algorithm
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
// class Solution{
//     public:
//     // arr: input array
//     // n: size of array
//     //Function to find the sum of contiguous subarray with maximum sum.
//     long long maxSubarraySum(int arr[], int n){
//         // Your code here
//         long long maxi = INT_MIN, prefix = 0;
//         for(int i=0;i<n;i++)
//         {
//             prefix+=arr[i];
//             maxi = max(maxi,prefix);
//             if(prefix < 0)
//             prefix = 0;
//         }
//         return maxi;
//     }
// };