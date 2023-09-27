//     *
//    **
//   ***
//  ****
// *****
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//    1
//   22
//  333
// 4444
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << row;
//         }
//         cout << endl;
//     }
// }

//     1
//    12
//   123
//  1234
// 12345
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << col;
//         }
//         cout << endl;
//     }
// }

//     A
//    AB
//   ABC
//  ABCD
// ABCDE
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         char ch = 'A';
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
// }
// <<<<<<<<<<<<<<<<<<<<<<ANOTHER METHOD>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (char name = 'A'; name <= 'A' + row - 1; name++)
//         {
//             cout << name;
//         }
//         cout << endl;
//     }
// }

//     1
//    21
//   321
//  4321
// 54321
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num, n;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         n = row;
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << n;
//             n--;
//         }
//         cout << endl;
//     }
// };

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<HOMEWORK>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//     A
//    BB
//   CCC
//  DDDD
// EEEEE
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     char ch = 'A';
//     cout << "Enter the Number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {

//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << ch;
//         }
//         ch++;
//         cout << endl;
//     }
// }

//     5
//    54
//   543
//  5432
// 54321
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         int n = num;
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << n;
//             n--;
//         }
//         cout << endl;
//     }
// }

//     E
//    ED
//   EDC
//  EDCB
// EDCBA
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         char ch = 'A' + num - 1;
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << ch;
//             ch--;
//         }
//         cout << endl;
//     }
// };