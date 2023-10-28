// 1. Segregate 0s and 1s
// https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

// class Solution{
// public:
//     void segregate0and1(int arr[], int n) {
//         // code here
//         int start = 0, end = n-1;
//         while(start<end)
//         {
//             if(arr[start] == 0)
//             {
//                 start++;
//             }
//             else
//             {
//                 if(arr[end]== 0)
//                 {
//                     swap(arr[start],arr[end]);
//                     start++;end--;
//                 }
//                 else
//                 end--;
//             }
//         }
//     }
// };

// 2. Two Sum
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &numbers, int target)
//     {

//         vector<int> ans;
//         int start = 0, end = numbers.size() - 1;
//         while (start < end)
//         {
//             if ((numbers[start] + numbers[end]) > target)
//             {
//                 end--;
//             }
//             else if ((numbers[start] + numbers[end]) < target)
//             {
//                 start++;
//             }
//             else
//             {
//                 ans.push_back(start + 1), ans.push_back(end + 1);
//                 break;
//             }
//         }
//         return ans;
//     }
// };

// 3. Pair With Given Difference
// https://www.interviewbit.com/problems/pair-with-given-difference/
// int Solution::solve(vector<int> &A, int B)
// {
//     sort(A.begin(), A.end());
//     int start = 0, end = 1, n = A.size();
//     if (B < 0)
//         B = B * -1;
//     while (end < n)
//     {
//         if ((A[end] - A[start]) == B)
//             return 1;
//         else if ((A[end] - A[start]) > B)
//             start++;
//         else
//             end++;

//         if (start == end)
//             end++;
//     }
//     return 0;
// }
