// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<DAY-25>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[9] = {2, 24, 12, 53, 12, 4321, 4, 511, 6};
//     cout << "Sorting the given array using Selection Sorting\n";
//     for (int i = 0; i < 8 /*n-1*/; i++)
//     {
//         int index = i;
//         for (int j = i + 1; j < 9 /*n-1*/; j++)

//         {
//             if (arr[j] < arr[index])
//             {
//                 index = j;
//             }
//         }
//         /*int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//                 */
//         swap(arr[i], arr[index]);
//     }
//     for (int i = 0; i < 9 /*n*/; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }