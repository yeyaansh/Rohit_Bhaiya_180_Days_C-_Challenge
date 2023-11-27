//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<   DAY-46    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// // 1. Binary Search in 2D Array
// // https://leetcode.com/problems/search-a-2d-matrix/
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         int m = matrix.size(), n = matrix[0].size();
//         int start = 0, end = m*n-1;
//         while(start <= end)
//         {
//             int mid = (start + end)/2;
//           int  row = mid/n;
//            int  col = mid%n;

//             if(matrix[row][col] == target)
//             return 1;

//             else if(matrix[row][col] < target)
//             start = mid + 1;
            
//             else
//             end = mid -1;
//         }

//         return 0;
        
//     }
// };


// // 2. Search in a sorted row-col wise Matrix
// // https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// // class Solution
// {
//     public:
//     //Function to search a given number in row-column sorted matrix.
//     bool search(vector<vector<int> > matrix, int row, int col, int target) 
//     {
//         // code here
//        int i = 0, j= col-1;
//        while(i<row && j>=0)
//        {
//            if(matrix[i][j] == target)
//            return 1;
//            else if(matrix[i][j] > target)
//            {
//                // move left
//                j = j-1;
//            }
//            else if(matrix[i][j] < target )
//            {
//                // move down
//                i = i+1;
//            }
//        }
//        return 0;
//     }
// };