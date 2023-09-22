// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int count = 101; count <= 200; count++)
//         cout << count << endl;
// };

// #include <iostream>
// using namespace std;
// int main()
// {
//     char name;
//     cout << "Printing Characters from 'a' to 'z': " << endl;
//     for (name = 'a'; name <= 'z'; name++)
//         cout << name << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 10;
//     cout << "Printing Number from 10 to 1: \n";
//     for (n; n >= 1; n--)
//         cout << n << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Printing number from 1 to 100 with gaps of 3 in them: \n";
//     for (int num = 1; num <= 100; num = num + 3)
//         cout << num << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int table;
//     cout << "Enter the number to print its table: ";
//     cin >> table;
//     for (int count = 1; count <= 10; count++)
//         cout << table << " * " << count << " = " << table * count << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number to print its table(in other way): ";
//     cin >> num;
//     for (int i = num; i <= num * 10; i = i + num)
//         cout << i << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, power, answer = 1;
//     cout << "Enter the number: ";
//     cin >> num;
//     cout << "Enter it's power: ";
//     cin >> power;
//     for (int i = 1; i <= power; i++)
//         answer = answer * num;
//     cout << num << " to the power " << power << " is: " << answer;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, sum = 0;
//     cout << "Enter the number to print its sum: ";
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//         sum = sum + i;
//     cout << "Sum till " << num << " is: " << sum;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     long long fact = 1;
//     cout << "Enter the number to find its factorial: ";
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//         fact = fact * i;
//     cout << "Factorial of " << num << " is: " << fact << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int p_check;
//     cout << "Enter the number to check Prime or Not: ";
//     cin >> p_check;
//     if (p_check < 2)
//     {
//         cout << "Not a Prime Number";
//         return 0;
//     }
//     else
//     {
//         for (int count = 2; count < p_check; count++)
//         {
//             if (p_check % count == 0)
//             {
//                 cout << "Not a Prime Number";
//                 return 0;
//             }
//         }
//         cout << "It's a Prime Number";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, fib, first = 0, second = 1;
//     cout << "Enter the terms to print Fibonacci Series: ";
//     cin >> num;
//     if (num == 1)
//         cout << "0";
//     else if (num == 2)
//         cout << "0" << endl
//              << "1";
//     else
//     {
//         cout << "0" << endl
//              << "1\n";
//         for (int i = 1; i < num - 1; i++)
//         {
//             fib = first + second;
//             first = second;
//             second = fib;
//             cout << fib << endl;
//         }
//     }
// };

//<<<<<<<<<<<<<<<<<<<<<<HOMEWORK>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Printing Number from 250 to 280 with the help of 'for' loop: \n";
//     for (num = 250; num <= 280; num++)
//         cout << num << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char c = 'A';
//     cout << "Printing Character from A to Z with the help of 'for' loop: \n";
//     for (c; c <= 'Z'; c++)
//         cout << c << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char c = 'Z';
//     cout << "Printing character from Z to A with the help of 'for' loop: \n";
//     for (c; c >= 'A'; c--)
//         cout << c << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 220;
//     cout << "There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So printing all the numbers from 220 to 730: \n";
//     for (num; num <= 720; num = num + 7)
//         cout << num << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     long long sum = 0;
//     cout << "Enter the number to Print it's Sum of Squares till the number: ";
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//         sum = sum + (i * i);
//     cout << "Your sum is: " << sum;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     long long sum = 0;
//     cout << "Enter the number to Print it's Sum of Cube till the number: ";
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//         sum = sum + (i * i * i);
//     cout << "Your sum is: " << sum;
// };