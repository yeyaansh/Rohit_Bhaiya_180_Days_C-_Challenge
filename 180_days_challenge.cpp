
// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<DAY-30>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 4, 67, 542, 3232, 43434};
//     cout << "Entered Number is '67', which is to be searched\n";
//     int start = 0, end = 5, key = 67;
//     int mid = (start + end) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             cout << "Got it! at positon: " << mid;
//             return 0;
//         }
//         else if (arr[mid] < key)
//             start = mid + 1;
//         else
//             end = mid - 1;
//     }
// }

// <<<<<<<<<<<<<<<<<<<<<<<<< OR >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key)
// {
//     int start = 0, end = n - 1, mid;
//     while (start <= end)
//     {
//         mid = (start + end) / 2;

//         if (arr[mid] == key)
//             return mid;

//         else if (arr[mid] < key)
//             start = mid + 1;

//         else
//             end = mid - 1;
//     }

//     return -1;
// }

// int main()
// {
//     int arr[1000];
//     cout << "Enter the size of your array: ";
//     int n;
//     cin >> n;
//     cout << "Enter the elements of your array\n";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     cout << "Enter the element you want to find: ";
//     int key;
//     cin >> key;
//     cout << binarySearch(arr, n, key);
// }

// Binary Search
// https://leetcode.com/problems/binary-search/

// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {

//         int n = nums.size();

//         int start = 0, end = n - 1, mid;
//         while (start <= end)
//         {
//             mid = (start + end) / 2;
//             if (nums[mid] == target)
//                 return mid;
//             else if (nums[mid] < target)
//                 start = mid + 1;
//             else
//                 end = mid - 1;
//         }
//         return -1;
//     }
// };

// <<<<<<<<<<<< To stop the overflow condition >>>>>>>>>>>>>>>>>>>>>>>
// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {

//         int n = nums.size();

//         int start = 0, end = n - 1, mid;
//         while (start <= end)
//         {
//             mid = start + (end-start)/2; // for overflow condition
//             if (nums[mid] == target)
//                 return mid;
//             else if (nums[mid] < target)
//                 start = mid + 1;
//             else
//                 end = mid - 1;
//         }
//         return -1;
//     }
// };

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<DAY-31>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// 1 : Find First and Last Position of Element in Sorted Array
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {

//         int start = 0, end = nums.size()-1, mid, first = -1, last = -1;

// // First Element

//         while(start<=end)
//         {
//             mid = start + (end-start)/2;
//             if(nums[mid] == target)
//             {
//                 first = mid;
//                 end = mid-1;
//             }
//             else if(nums[mid]<target)
//             {
//                 start = mid + 1;
//             }
//             else
//             end = mid -1;
//         }

// start = 0, end = nums.size()-1;

// // Last Element

//              while(start<=end)
//         {
//             mid = start + (end-start)/2;
//             if(nums[mid] == target)
//             {
//                 last = mid;
//                 start = mid+1;
//             }
//             else if(nums[mid]<target)
//             {
//                 start = mid + 1;
//             }
//             else
//             end = mid -1;
//         }

//         // Create an array to return the value

//     vector<int>a(2);
//     a[0]=first;
//     a[1] = last;
// return a;

//     }

// };

// 2: Search Insert Position
// https://leetcode.com/problems/search-insert-position/description/
// <<<<<<<<<<<<<<<<<<<<<<<<<< By Me >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int mid, start = 0, end = nums.size()-1, index;
//         while(start<=end)
//         {
//             mid = start + (end-start)/2;
//             if(nums[mid] == target)
//             {
//                 index = mid;
//                 return mid;
//             }
//             else if(nums[mid] < target)
//             {
//             start = mid + 1;
//             index = mid+1;
//             }
//             else {
//             end = mid -1;
//             index = mid;
//             }
//         }
//         return index;
//     }
// };

// <<<<<<<<<<<<<<<<<<<<<<<< By Rohit Bhaiya (most optimized)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// class Solution {
// public:
//     int searchInsert(vector<int>& arr, int target) {
//         int start=0, end = arr.size()-1, mid, ans = arr.size();
//         while(start <= end)
//         {
//             mid = start + (end-start)/2;
//             if(arr[mid]==target)
//             {
//                 return mid;
//             }
//             else if( arr[mid]< target)
//             start = mid + 1;
//             else
//             {
//                 ans = mid;
//                 end = mid-1;
//             }
//         }
//         return ans;
//     }
// };

// 3: Sqrt(x)
// https://leetcode.com/problems/sqrtx/description/
// class Solution {
// public:
//     int mySqrt(int x) {
//         if(x<2)
//         return x;
//         int start = 0, end = x, mid, ans;
//         while(start<=end)
//         {
//             mid = start + (end-start)/2;
//             if(mid == x/mid)
//             {
//                 ans = mid;
//                 break;
//             }
//             else if(mid < x/mid)
//             {
//                 ans = mid;
//                 start = mid + 1;
//             }
//             else
//             end = mid-1;
//         }
//         return ans;
//     }
// };
