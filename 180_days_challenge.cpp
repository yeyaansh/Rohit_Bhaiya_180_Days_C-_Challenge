// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<DAY-23>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// 1. Search an element in an array
// https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
// class Solution
// {
// public:
//     // Function to search x in arr
//     // arr: input array
//     // X: element to be searched for
//     int search(int arr[], int N, int X)
//     {

//         // Your code here
//         for (int i = 0; i < N; i++)
//         {
//             if (arr[i] == X)
//                 return i;
//         }
//         return -1;
//     }
// };

// Reverse an Array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {1, 2, 4, 5, 6, 7};
//     int start = 0, end = 5;
//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     for (int i = 0; i < 6; i++)
//         cout << arr[i] << " ";
// }

// 2. Second Max
// https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// class Solution{
// public:
// 	// Function returns the second
// 	// largest elements
// 	int print2largest(int arr[], int n) {
// 	    // code here
// 	    int lar=INT_MIN;
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(arr[i]>lar)
// 	        {
// 	            lar = arr[i];
// 	        }
// 	    }
// 	    int slar = -1;
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(arr[i]!=lar)
// 	        {
// 	           if(arr[i]>slar)
// 	           {
// 	               slar = arr[i];
// 	           }
// 	        }
// 	    }
// 	    return slar;
// 	}
// };

// <<<<<<<<<<<<   OR    >>>>>>>>>>>>>>>>>>>>

// class Solution{
// public:
// 	// Function returns the second
// 	// largest elements
// 	int print2largest(int arr[], int n) {
// 	    // code here
// 	    int lar=INT_MIN;
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(arr[i]>lar)
// 	        {
// 	            lar = arr[i];
// 	        }
// 	    }
// 	    int slar = -1;
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(arr[i]!=lar)
// 	        {
// 	           slar = max(arr[i],slar);
// 	        }
// 	    }
// 	    return slar;
// 	}
// };

// 3. Missing Number
// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// class Solution{
//   public:
//     int missingNumber(vector<int>& array, int n) {
//       int sum =0;
//       for(int i=0;i<n-1;i++)
//       {
//           sum = sum + array[i];

//       }
//       int ans = n*(n+1)/2;
//       return ans-sum;
//     }
// };

// Fibonacci Series
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int arr[100];
//     arr[0] = 0;
//     arr[1] = 1;
//     for (int i = 2; i < n; i++)
//     {
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
//     cout << arr[n - 1];
// }

// 4. Rotate Array by 1
// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// void rotate(int arr[], int n)
// {

//     int temp = arr[n];
//     for(int i=n;i>=1;i--)
//     {
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;

// }

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<DAY-24>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//  TIME COMPLEXITY AND SPACE COMPLEXITY