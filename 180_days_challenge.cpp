//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<   DAY-40    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// 1. Trapping Rain Water
// https://leetcode.com/problems/trapping-rain-water/submissions/1095093458/
//     class Solution
// {
// public:
//     int trap(vector<int> &height)
//     {
//         int n = height.size(), water = 0;
//         int leftmax = 0, rightmax = 0, maxheight = INT_MIN, index = 0;

//         // max height building
//         for (int i = 0; i < n; i++)
//         {
//             if (maxheight < height[i])
//             {
//                 maxheight = height[i];
//                 index = i;
//             }
//         }

//         // left part
//         for (int i = 0; i < index; i++)
//         {
//             if (leftmax > height[i])
//             {
//                 water += (leftmax - height[i]);
//             }
//             else
//                 leftmax = height[i];
//         }

//         // right part
//         for (int i = n - 1; i > index; i--)
//         {
//             if (rightmax > height[i])
//             {
//                 water += (rightmax - height[i]);
//             }
//             else
//                 rightmax = height[i];
//         }

//         return water;
//     }
// };

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    DAY-43     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// print 2D Array in row-wise and in column-wise(create a function)
// #include <iostream>
// using namespace std;
// void printCol(int arr[][3], int row, int col)
// {
//     for(int j=0;j<col;j++)
//     {
//         for(int i=0;i<row;i++)
//         {
//             cout << arr[i][j] << " ";
//         }
//     }
// }
// int main()
// {
// // create and initialize the array
// int arr[4][3] = {1,2,3,4,5,6,7,8,89,0,12,3};
// // print all the values in array in row-wise
// for(int i=0;i<4;i++)
// {
// for(int j=0;j<3;j++)
// cout << arr[i][j] << " ";
// }
// cout << endl;
// printCol(arr,4,3);
// }

// sum of two matrix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr1[2][3] = {23, 45, 23, 4, 54, 2};
//     int arr2[2][3] = {2, 54, 2, 67, 45, 76};
//     int ans[2][3];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             ans[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// print row index with maximum sum
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[4][3]={12,324,45,23,45,23,21,76,34,3,4,5};
//     int max_sum=INT_MIN, index = -1;
//     for(int i=0;i<4;i++)
//     {
//         int sum =0;
//         for(int j=0;j<3;j++)
//             sum+=arr[i][j];
//             if(sum>max_sum)
//             {
//                 max_sum=sum;
//                 index = i;
//             }
//     }
//     cout << "Max sum is: " << max_sum << " of index number: " << index;
// }

// print sum of diagonal elements
// #include <iostream>
// using namespace std;
// int secDiagonal(int arr[][3],int  row, int col)
// {
//     int second = 0;
//    int i=0, j=col-1;
//    while(j>=0)
//    {
//     second+=arr[i][j];
//    i++, j--;
//    } return second;
// }
// int main()
// {
//     int arr[3][3] = {23,34,2,56,7,34,21,4,65};
//     int first = 0;
//     for(int i=0;i<3;i++)
//     first+= arr[i][i];
//     cout << first << endl;

//     //second diagonal
//     cout << secDiagonal(arr,3,3);
// }

// reverse each row of the matrix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][4]={3,3,45,34,5,6,7,234,4,5,65,56};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout << "After reversing\n";
//     for(int i=0;i<3;i++)
//     {
//         int start =0, end = 4-1;
//         while(start<end)
//         {
//             swap(arr[i][start],arr[i][end]);
//             start++, end--;
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     }
