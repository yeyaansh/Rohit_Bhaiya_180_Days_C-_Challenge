// *
// * *
// * * *
// * * * *
// * * * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << row << " ";
//         }
//         cout << endl;
//     }
// }

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << row - col + 1 << " ";
//         }
//         cout << endl;
//     }
// }
// <<<<<<<<<<<<<<ANOTHER METHOD>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = row; col >= 1; col--)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

// a
// b b
// c c c
// d d d d
// e e e e e
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     char ch = 'a';
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }
// }
// <<<<<<<<<<<<<<<<<<<<ANOTHER METHOD>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         char name = 'a' + row - 1;
//         for (col = 1; col <= row; col++)
//         {
//             cout << name << " ";
//         }
//         cout << endl;
//     }
// }

// * * * * *
// * * * *
// * * *
// * *
// *
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int row = 1; row <= 5; row++)
//     {
//         for (int col = 1; col <= 5 - row + 1; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 5; row >= 1; row--)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 5; row >= 1; row--)
//     {
//         for (col = 5; col >= row; col--)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// };

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<HOMEWORK>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5
//  1 2 3 4 5 6
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 6; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

// A
// A B
// A B C
// A B C D
// A B C D E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         char ch = 'A';

//         for (col = 1; col <= row; col++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }

//    10
//    10 11
//    10 11 12
//    10 11 12 13
//    10 11 12 13 14
//    10 11 12 13 14 15
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 6; row++)
//     {
//         int num = 10;
//         for (col = 1; col <= row; col++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }

//   A B C D
//   A B C
//   A B
//   A
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         char ch = 'A';
//         for (col = 1; col <= 5 - row; col++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// };