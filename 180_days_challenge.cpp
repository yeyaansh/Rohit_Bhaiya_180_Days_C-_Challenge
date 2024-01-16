// //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<  DAY-65 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// #include <iostream>
// using namespace std;
// int main()
// {
//     char a = '9';
//     cout << &a << endl; // prints the value till it get null character '\0'
//     cout << (void*)a << endl; // prints the address
//     cout << static_cast<void*>(a)<< endl; // prints the address
//     char ar[] = "HelloJi";
//     cout << ar << endl; // prints the value till it gets null character '\0'
//     cout << (void *)ar << endl; // prints the address
//     cout << static_cast<void*>(ar) << endl; // prints the address
// }



// // swapping by "Pass by Value(normal way)"
// void swapping(int n1, int n2)
// {
//     int temp = n1;
//     n1 = n2;
//     n2 = temp;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 10, second = 30;
//     swapping(first,second);
//     cout << "First = " << first << " and Second = " << second;
// }



// // swapping by "Pass by Pointer (Reference)"
// void swapping(int *n1, int *n2)
// {
//     int temp = *n1;
//     *n1 = *n2;
//     *n2 = temp;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 10, second = 30;
//     swapping(&first,&second);
//     cout << "First = " << first << " and Second = " << second;
// }


// // Concept of Reference Variable
// #include <iostream>
// using namespace std;
// int main()
// {
//     int var = 12;
//     //reference variable
//     int &refVar = var;
//     refVar = refVar + 45;
//     cout << var;
// }

// // Swapping Function by the use of Reference variable
// #include <iostream>
// using namespace std;

// void swapping (int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int first = 12, second = 45;
//     swapping(first, second);
//     cout << "First = " << first << " " << "Second = " << second;
// }


// // Using it in Vector Array
// #include <iostream>
// #include <vector>
// using namespace std;

// void asVal(vector<int>&arr)
// {
//     for(int i=0; i<5;i++)
//     arr[i] = 10;
// }

// int main()
// {
//     vector<int>arrP(5,0);
//     asVal(arrP);
//     for(int i=0;i<5;i++)
//     cout << arrP[i] << " ";
// }