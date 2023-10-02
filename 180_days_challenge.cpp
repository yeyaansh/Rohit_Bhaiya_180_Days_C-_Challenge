// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, i = 1;
//     cout << "Enter the number to print it's table using while loop: ";
//     cin >> num;
//     while (i <= 10)
//     {
//         cout << num * i << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, i = 1;
//     cout << "Enter the number to find it's factors using while loop: ";
//     cin >> num;
//     while (i <= num)
//     {
//         if (num % i == 0)
//             cout << i << " ";
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number to print till the number: ";
//     cin >> num;
//     int i = 1;
//     while (i <= num)
//     {
//         cout << i << " ";
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, i = 1, sum = 0;
//     cout << "Enter the number to find it's sum using do-while loop: ";
//     cin >> num;
//     do
//     {
//         sum = sum + i;
//         i++;
//     } while (i <= num);
//     cout << "Your sum is: " << sum;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Checking break statemnet\n";
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == 4)
//             break;
//         cout << i << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Checking continue statemnet\n";
//     for (int i = 1; i <= 40; i++)
//     {
//         if (i % 4 == 0)
//             continue;
//         cout << i << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int day;
//     cout << "Enter the number to find Day using switch case: ";
//     cin >> day;
//     switch (day)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;
//     default:
//         cout << "Enter the valid date!";
//         break;
//     }
// }

// <<<<<<<<<<<<<<<<<<<<<<HOMEWORK>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, i = 1;
//     cout << "Enter the number to print till the number using do-while loop: ";
//     cin >> num;
//     do
//     {
//         cout << i << " ";
//         i++;
//     } while (i <= num);
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     long long fact = 1;
//     int num, i = 1;
//     cout << "Enter the number to print its factorial using while loop: ";
//     cin >> num;
//     while (i <= num)
//     {
//         fact = fact * i;
//         i++;
//     }
//     cout << "Factorial of " << num << " is " << fact;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, i = 1;
//     long long fact = 1;
//     cout << "Enter the number to find its factorial using do-while loop: ";
//     cin >> num;
//     do
//     {
//         fact = fact * i;
//         i++;
//     } while (i <= num);
//     cout << "Factorial of " << num << " is " << fact;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, i = 1;
//     cout << "Enter the number to print all the numbers from 1 to num except numbers divisble by 3 and 5 using continue statement: ";
//     cin >> num;
//     while (i <= num)
//     {
//         if (i % 3 == 0 || i % 5 == 0)
//         {
//             i++;
//             continue;
//         }

//         cout << i << " ";
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int month;
//     cout << "Enter the number between 1 to 12 to print the month name: ";
//     cin >> month;
//     switch (month)
//     {
//     case 1:
//         cout << "JAN";
//         break;
//     case 2:
//         cout << "FEB";
//         break;
//     case 3:
//         cout << "MARCH";
//         break;
//     case 4:
//         cout << "APRIL";
//         break;
//     case 5:
//         cout << "MAY";
//         break;
//     case 6:
//         cout << "JUNE";
//         break;
//     case 7:
//         cout << "JULY";
//         break;
//     case 8:
//         cout << "AUG";
//         break;
//     case 9:
//         cout << "SEPT";
//         break;
//     case 10:
//         cout << "OCT";
//         break;
//     case 11:
//         cout << "NOV";
//         break;
//     case 12:
//         cout << "DEC";
//         break;

//     default:
//         cout << "Enter a valid month!";
//         break;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char cap = 'A', sm = 'a';
//     cout << "From A to Z: \n";
//     while (cap <= 'Z')
//     {
//         cout << cap << " ";
//         cap++;
//     }
//     cout << "\nFrom a to z: \n";
//     while (sm <= 'z')
//     {
//         cout << sm << " ";
//         sm++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, i = 2, count = 0;
//     cout << "Enter the number to check whether it is prime or not using while loop: ";
//     cin >> num;
//     if (num <= 1)
//     {
//         cout << "Not a Prime";
//         return 0;
//     }
//     while (i < num)
//     {
//         if (num % i == 0)
//         {
//             cout << "Not a Prime";
//             count++;
//             break;
//         }
//         i++;
//     }
//     if (count == 0)
//     {
//         cout << "Prime";
//     }
// };