// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<DAY-26>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[100], n;
//     printf("Enter the Size of Array: ");
//     cin >> n;
//     if (n > 100)
//         return 0;
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j + 1]);
//         }
//     }
//     cout << "Entered Array is now being sorted using Bubble Sorting: \n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< OR >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[100], n;
//     printf("Enter the Size of Array: ");
//     cin >> n;
//     if (n > 100)
//         return 0;
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     for (int i = n - 2; i >= 0; i--)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j + 1]);
//         }
//     }
//     cout << "Entered Array is now being sorted using Bubble Sorting: \n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// <<<<<<<<<<<<<<<< For Best Case Scenario (array is sorted)>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[100], n;
//     printf("Enter the Size of Array: ");
//     cin >> n;
//     if (n > 100)
//         return 0;
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool swapped = 0;
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = 1;
//             }
//         }
//         if (swapped == 0)
//         {
//             cout << "Your array is already sorted: \n";
//             break;
//         }
//     }
//     cout << "Entered Array is now being sorted using Bubble Sorting: \n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// Bubble Sorting
// https://practice.geeksforgeeks.org/problems/bubble-sort/1
// class Solution
// {
//     public:
//     //Function to sort the array using bubble sort algorithm.
//     void bubbleSort(int arr[], int n)
//     {
//         // Your code here
//         for (int i = 0; i < n - 1; i++)
//     {
//         bool swapped = 0;
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = 1;
//             }
//         }
//         if (swapped == 0)
//         {
//             break;
//         }
//     }
//     }
// };