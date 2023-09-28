//     *
//    ***
//   *****
//  *******
// *********
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
//         for (col = 1; col <= 2 * row - 1; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//     1
//    121
//   12321
//  1234321
// 123454321
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
//         for (col = row - 1; col >= 1; col--)
//         {
//             cout << col;
//         }
//         cout << endl;
//     }
// }

// *********
//  *******
//   *****
//    ***
//     *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= row - 1; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= (num * 2) - (2 * row - 1); col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// <<<<<<<<<<<<<<<<<<<<<<<ANOTHER METHOD>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = num; row >= 1; row--)
//     {
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row * 2 - 1; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = num; row >= 1; row--)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         for (col = 1; col <= (num * 2) - (row * 2); col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         for (col = 1; col <= (num * 2) - (row * 2); col++)
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

// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         for (col = 1; col <= (num * 2) - (2 * row); col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (row = num - 1; row >= 1; row--)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         for (col = 1; col <= (num * 2) - (row * 2); col++)
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

//    *
//   * *
//  * * *
// * * * *
// * * * *
//  * * *
//   * *
//    *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
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
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (row = num; row >= 1; row--)
//     {
//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// };
//<<<<<<<<<<<<<<<<<<<<<<<<<<<HOMEWORK>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
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
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

//      1
//     123
//    12345
//   1234567
//  123456789
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col, num;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (row = 1; row <= num; row++)
//     {
//         int n = 1;

//         for (col = 1; col <= num - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= (2 * row) - 1; col++)
//         {
//             cout << n;
//             n++;
//         }
//         cout << endl;
//     }
// }

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
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
//         for (col = row - 1; col >= 1; col--)
//         {
//             ch = 'A' + col - 1;
//             cout << ch;
//         }
//         cout << endl;
//     }
// };