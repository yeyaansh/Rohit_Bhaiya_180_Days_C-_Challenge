// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
// // create vector, declare
// vector<int> v;
// vector<int> v1(5, 1);
// // size and capacity
// cout << "Size of v: " << v.size() << endl;
// cout << "Capacity of v: " << v.capacity() << endl;
// v.push_back(2);
// cout << "Size of v: " << v.size() << endl;
// cout << "Capacity of v: " << v.capacity() << endl;
// v.push_back(3);
// cout << "Size of v: " << v.size() << endl;
// cout << "Capacity of v: " << v.capacity() << endl;
// v.push_back(10);
// cout << "Size of v: " << v.size() << endl;
// cout << "Capacity of v: " << v.capacity() << endl;
// // Update value
// v[1] = 5;
// cout << "Size of v1: " << v1.size() << endl;
// cout << "Capacity of v1: " << v1.capacity() << endl;
// v1.push_back(8);
// cout << "Size of v1: " << v1.size() << endl;
// cout << "Capacity of v1: " << v1.capacity() << endl;

// vector<int> v3 = {2, 3, 4, 5, 6};
// cout << v3.size() << endl;

// // Delete value from vector
// vector<int> vnew;
// vnew.push_back(3);
// vnew.push_back(23);
// vnew.push_back(87);
// vnew.push_back(235);
// vnew.push_back(321);
// vnew.push_back(98);
// vnew.pop_back();
// cout << vnew.size();
// vnew.erase(vnew.begin() + 1);
// cout << "\nSize of vnew: " << vnew.size() << endl;
// cout << "Capacity of vnew: " << vnew.capacity() << endl;
// for (int i = 0; i < vnew.size(); i++)
//     cout << vnew[i] << " " << endl;
// vnew.insert(vnew.begin() + 1, 50);
// for (int i = 0; i < vnew.size(); i++)
//     cout << vnew[i] << " ";
// vnew.clear();
// cout << "\nSize of vnew: " << vnew.size() << endl;
// cout << "Capacity of vnew: " << vnew.capacity() << endl;
// vector<int> arr;
// arr.push_back(2);
// arr.push_back(10);
// arr.push_back(5);
// arr.push_back(1);
//     cout << "\nSize of arr: " << arr.size() << endl;
//     cout << "Capacity of arr: " << arr.capacity() << endl;
//     cout << arr.front() << endl;
//     cout << arr.back() << endl;
//     cout << arr.at(2);
//     // Copy value of 1 vector in another
//     vector<int> a;
//     a = arr;
//     cout << "\nCopied values from a to arr";
//     for (int i = 0; i < a.size(); i++)
//         cout << a[i] << " ";
// for (auto a = arr.begin(); a != arr.end(); a++)
//     cout << *a << " ";
// cout << endl;
// for (auto a : arr)
//     cout << a << " ";

// sort in increasing order
// sort(arr.begin(), arr.end());
// for (int i = 0; i < arr.size(); i++)
//     cout << arr[i] << " ";
// cout << endl;
// // sort in decreasing order
// sort(arr.begin(), arr.end(), greater<int>());
// for (int i = 0; i < arr.size(); i++)
//     cout << arr[i] << " ";

// search in binary search
//     cout << binary_search(arr.begin(), arr.end(), 55) << endl;
//     cout << find(arr.begin(), arr.end(), 5) - arr.begin();
// }