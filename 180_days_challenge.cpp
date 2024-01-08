// //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<   DAY-64    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1,2,3,4,5};

//     // Print the address of first element or 0th index element

//     cout << arr << endl;
//     cout << (arr+0) << endl;
//     cout << &arr[0] << endl;
//     int *ptr = &arr[0];
//     cout << ptr << endl;

//     // Print the address of second element or 1st index element

//     cout << (arr+1) << endl;
//     cout << &arr[1] << endl;
//     cout << &*(arr+1) << endl;

//     // Print the value of 0th index element

//     cout << arr[0] << endl;
//     cout << *(arr+0) << endl;
    
//     // Print all the addresses

//     for(int i=0;i<5;i++)
//     cout << arr+i << endl;

//     // Print all the values

//     for(int i=0;i<5;i++)
//     cout << *(arr+i) << endl;

// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,33,4,99};
//     int *ptr = arr;
//     for (int i=0;i<5;i++)
//     {
//         // this should print the values of 1,2,33,4,99
//         cout << ptr[i] << ", ";
//     }
//     cout << endl;
//     for(int i=0;i<5;i++)
//     {
//         // this should print the values of 1,2,33,4,99
//         cout << *(ptr+i) << ", ";
//     }
//     cout << endl;
//     for (int i=0;i<5;i++)
//     {
//         // this should also print the values of 1,2,33,4,99
//         cout << *ptr << ", ";
//         ptr++;
//     }
//     cout << endl;
//     // to print only their address
//     for(int i=0;i<5;i++)
//     {
//         cout << (ptr+i) << ", ";
//     }

//        cout << endl;
//     // to print only their addresses using arithmetic operator
//     for(int i=0;i<5;i++)
//     {
//         cout << ptr << ", ";
//         ptr++;
//     }
// }


// THIS IS HOW I DID THE HOMEWORK QUESTION GIVEN IN VIDEO   
// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[5] = {"1234"};
//     char *ptr = arr;
//     cout << *ptr << " ";
//     cout << endl;
//     char ch = 'a';
//     cout << *(&ch) << " ";
// }