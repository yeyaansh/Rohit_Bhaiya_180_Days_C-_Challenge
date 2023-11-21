//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<   DAY-44    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     // declare , initialize by 3 and print them..
//     vector<vector<int>>arr(4,vector<int>(5,3));
//     for(int i=0;i<4;i++)
//     for(int j=0;j<5;j++)
//     cout << arr[i][j] << " ";

//     // find out the rows and columns
//     cout << "Row = " << arr.size();
//     cout << endl;
//     cout << "Col = " << arr[0].size();
// }

// // print wave form
// #include <iostream>
// using namespace std;
// void wave(int arr[][5], int row , int col)
// {
//     for(int i=0;i<col;i++)
//     {
//         if(i%2==0)
//         {
//             // even
//             for(int j=0;j<row;j++)
//             {
//                 cout << arr[j][i] << " ";
//             }
//         }
//         else
//         {
//             // odd
//             for(int j=row-1;j>=0;j--)
//             {
//                 cout << arr[j][i] << " ";
//             }
//         }
//     }
// }



//<<<<<<<<<<<<<<<<<<<<<<<<< DAY-45 >>>>>>>>>>>>>>>>>>>>>>>>>>>  
// // 1. Rotate Image
// // https://leetcode.com/problems/rotate-image/description/
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         // transpose it
//         for(int i=0;i<n-1;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }

//         // reverse each row
//         for(int i=0;i<n;i++)
//         {
//             int start = 0, end = n-1;
//             while(start<end)
//             {
//                 swap(matrix[i][start],matrix[i][end]);
//                 start++, end--;
//             }
//         }
//     }
// };


// // 2. Rotate Matrix by 180
// // https://practice.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
// class Solution {
// public:
//     void rotate(vector<vector<int> >& matrix) {
//         // Code here
//         int n = matrix.size();
//         // column reverse
//         for(int j=0;j<n;j++)
//         {
//             int start = 0, end = n-1;
            
//             while(start<end)
//             {
//                 swap(matrix[start][j],matrix[end][j]);
//                 start++, end--;
//             }
//         }
//         // row reverse
//         for(int i=0;i<n;i++)
//         {
//             int start = 0, end = n-1;
//             while(start<end)
//             {
//                 swap(matrix[i][start],matrix[i][end]);
//                 start++, end--;
//             }
//         }
//     }
// };

// 3. Rotate 90 degree anti-clockwise
// https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
// class Solution
// {   
//     public:
//     //Function to rotate matrix anticlockwise by 90 degrees.
//     void rotateby90(vector<vector<int> >& matrix, int n) 
//     { 
//         // code here 
//         // transpose of a matrix
//         for(int i=0;i<n-1;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         // reverse column elements
//         for(int j=0;j<n;j++)
//         {
//             int start = 0, end = n-1;
//             while(start<end)
//             {
//                 swap(matrix[start][j],matrix[end][j]);
//                 start++, end--;
//             }
//         }
//     } 
// };
