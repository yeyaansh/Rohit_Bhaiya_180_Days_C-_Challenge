// #include <iostream>
// using namespace std;
// char convert(char name)
// {
//     char ans = name - 'a' + 'A';
//     return ans;
// }
// int main()
// {
//     char name;
//     cout << "Enter the letter to convert it into capital letter: ";
//     cin >> name;
//     cout << convert(name);
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int counter(int num)
// {
//     int count = 0;
//     while (num)
//     {
//         count++;
//         num /= 10;
//     }
//     return count;
// }
// bool Armstrong(int num, int digit)
// {
//     int ans = 0, n = num, rem;
//     while (num)
//     {
//         rem = num % 10;
//         num /= 10;
//         ans = ans + pow(rem, digit);
//     }
//     if (ans == n)
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     int num;
//     cout << "Enter the number to check whether the number is Armstrong or not: ";
//     cin >> num;
//     int digit = counter(num);
//     cout << Armstrong(num, digit);
//     return 0;
// }

// 1. find trailing zero in a factorial
//  https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
//  class Solution
//  {
//  public:
//      int trailingZeroes(int N)
//      {
//          // Write Your Code here
//          int count = 0;
//          while(N>=5)
//          {
//              count+=N/5;
//              N/=5;
//          }
//          return 0;
//      }

// 2. rectangle or not
// https://www.interviewbit.com/problems/is-rectangle/
// /**
//  * @input A : Integer
//  * @input B : Integer
//  * @input C : Integer
//  * @input D : Integer
//  *
//  * @Output Integer
//  */
// int solve(int A, int B, int C, int D) {
//     if((A==B && C==D) || (A==C && B==D) || (A==D && B==C))
//     return 1;
//     else
//     return 0;
// }

// 3. Bishop
// https://www.interviewbit.com/problems/total-moves-for-bishop/
// int Solution::solve(int A, int B) {

//     int count = 0;
//     count+= min(8-A, 8-B);
//     count+= min(A-1, 8-B);
//     count+= min(A-1, B-1);
//     count+= min(8-A, B-1);
//     return count;
// }

// 4. Nim Game
// https://leetcode.com/problems/nim-game/
// class Solution {
// public:
//     bool canWinNim(int n) {
//         if(n%4==0)
//         return 0;
//         else
//         return 1;

//     }
// };