// #include <iostream>
// using namespace std;

// int sum(int x, int y) // function declaration
// {
//     int ans = x + y; // function define
//     return ans;
// }

// int mul(int x, int y)
// {
//     int mul = 1;
//     mul = x * y;
//     return mul;
// }

// void fun()
// {
//     cout << "Hello Coder Army";
// }
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a and b to find it's sum and product using function: \n";
//     cin >> a >> b;
//     cout << "Sum of a and b using function is: " << sum(a, b) << endl;     // function call
//     cout << "Product of a and b using function is: " << mul(a, b) << endl; // function call
//     fun();
// }

// #include <iostream>
// using namespace std;
// bool isPrime(int x)
// {
//     if (x < 2)
//         return 0;
//     for (int i = 2; i < x; i++)
//     {
//         if (x % i == 0)
//             return 0;
//     }
//     return 1;
// }
// int fact(int m)
// {
//     int fact = 1;
//     for (int i = 2; i <= m; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int sum(int x = 3, int y = 2) // function declaration
// {
//     int ans = x + y; // function define
//     return ans;
// }
// void isPrimeNo(int x)
// {
//     if (x < 2)
//     {
//         cout << 0 << endl;
//         return;
//     }
//     for (int i = 2; i < x; i++)
//     {
//         if (x % i == 0)
//             cout << 0 << endl;
//         return;
//     }
//     cout << 1 << endl;
//     return;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a: " << endl;
//     cin >> a;
//     cout << "Enter the value of b: " << endl;
//     cin >> b;
//     cout << a << " is " << isPrime(a) << endl;
//     cout << b << " factorial is: " << fact(a);
//     cout << "Default parameter is: " << sum() << endl;
//     isPrimeNo(a);
// }

// call by value or pass by value
// #include <iostream>
// using namespace std;

// void swapit(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a & b to swap: ";
//     cin >> a >> b;
//     swapit(a, b);
//     cout << "a is now " << a << " ans b is now " << b;
// }

// call by reference or pass by reference
// #include <iostream>
// using namespace std;

// void swapit(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a & b to swap: ";
//     cin >> a >> b;
//     swapit(a, b);
//     cout << "a is now " << a << " ans b is now " << b;
// }

// swap is an in-built function...
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a & b to swap: ";
//     cin >> a >> b;
//     swap(a, b);
//     cout << "a is now " << a << " ans b is now " << b << endl;
//     float f1 = 23.43, f2 = 234.53;
//     swap(f1, f2);
//     cout << f1 << " " << f2;
// };