//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

//  10 10 10 10 10
//  10 10 10 10 10
//  10 10 10 10 10
//  10 10 10 10 10
//  10 10 10 10 10
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int row = 1; row <= 4; row++)
//     {
//         for (int col = 1; col <= 5; col++)
//         {
//             cout << "10 ";
//         }
//         cout << endl;
//     }
// }

//  1 1 1 1 1
//  2 2 2 2 2
//  3 3 3 3 3
//  4 4 4 4 4
//  5 5 5 5 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int row = 1; row <= 5; row++)
//     {
//         for (int col = 1; col <= 5; col++)
//         {
//             cout << row << " ";
//         }
//         cout << endl;
//     }
// }

//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int row = 1; row <= 5; row++)
//     {
//         for (int col = 1; col <= 5; col++)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

//  5 4 3 2 1
//  5 4 3 2 1
//  5 4 3 2 1
//  5 4 3 2 1
//  5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 5; col >= 1; col--)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// #include <iostream>
//     using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << col * col << " ";
//         }
//         cout << endl;
//     }
// }

// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     char ch = 'a';
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//         ch = ch + 1;
//     }
// }

//  a b c d e
//  a b c d e
//  a b c d e
//  a b c d e
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row;
//     for (row = 1; row <= 5; row++)
//     {
//         for (char col = 'a'; col <= 'e'; col++)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }
// Another Method
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             char name = 'a' + col - 1;
//             cout << name << " ";
//         }
//         cout << endl;
//     }
// };

//  1 2 3 4 5
//  6 7 8 9 10
//  11 12 13 14 15
//  16 17 18 19 20
//  21 22 23 24 25
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     int count = 1;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5; col++)
//         {
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
// };

//<<<<<<<<<<<<<<<<<<<HOMEWORK>>>>>>>>>>>>>>>>>>>>>>>

// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 6; col++)
//             cout << "4 ";
//         cout << endl;
//     }
// }

// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 6; col++)
//         {
//             cout << col * col * col << " ";
//         }
//         cout << endl;
//     }
// }

// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         char ch = 'F';
//         for (col = 1; col <= 6; col++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// };