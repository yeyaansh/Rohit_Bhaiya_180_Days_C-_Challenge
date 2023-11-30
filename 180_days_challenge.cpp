//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<   DAY-48    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include<iostream>
// using namespace std;
// int main()
// {
//     char arr[] = {'a','p','p','l','e','\0'};
//     cout << arr;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[] = {'a','p','p','l','e'};
//     for(int i=0;i<5;i++)
//     cout << arr[i];
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Enter the character array: ";
//     char arr[20];
//     cin >> arr;
//     cout << arr;
// }


// // Important lesson!
// #include <iostream>
// using namespace std;
// int main()
// {
//     string st = "My Name is Yeyaansh";
//     cout << st;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string st;
//     getline(cin, st);
//     cout << st;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string st = "Rohit";
//     cout << st.size();
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string s1 = "Rohit";
//     string s2 = "Mohit";
//     string s3 = s1 + s2;
//     cout << s3;
//     }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string st = "Hello My Name is: \"Yeyaansh\"";
//     cout << st;
// }

// // reverse a string
// #include <iostream>
// using namespace std;
// int main()
// {
//     string s = "Hello My Friend";
//     int start = 0, end = s.size()-1;
//     while(start<end)
//     {
//         swap(s[start],s[end]);
//         start++;
//         end--;
//     }
//     cout << s;
// }

// // calculate the length of the string without using .size() function
// #include <iostream>
// using namespace std;
// int main()
// {
//     string st = "Hello My Friend";
//     int start = 0;
//     while(st[start]!='\0')
//     {
//         start++;
//     }
//     cout << start;
// }

// // palindrome or not?
// #include <iostream>
// using namespace std;
// int main()
// {
//     string s = "naman";
//     int start = 0, end = s.size()-1;
//     while(start<end)
//     {
//         if(s[start]!=s[end])
//         {
//             cout << "Not a Palindrome String";
//             return 0;
//         }
//         start++ , end--;
//     }

//     cout << "It's a Palindrome String";
// }