//<<<<<<<<<<<<<<<<<<<<<<<<        DAY-16      >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, rem, ans = 0, mul = 1, store;
//     cout << "Enter the number to convert it into binary: ";
//     cin >> num;
//     store = num;
//     while (num > 0)
//     {
//         rem = num % 2;
//         ans = rem * mul + ans;
//         num /= 2;
//         mul = mul * 10;
//     }
//     cout << "Binary of " << store << " is: " << ans;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter to convert binary into decimal: ";
//     cin >> num;
//     int ans = 0, mul = 1, rem;
//     int store = num;
//     while (num > 0)
//     {
//         rem = num % 10;
//         ans = rem * mul + ans;
//         num /= 10;
//         mul *= 2;
//     }
//     cout << store << " in decimal form is " << ans;
// }

//<<<<<<<<<<<<<<<<<<<<<<<<        DAY-17      >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 1. Add Digits
// https://leetcode.com/problems/add-digits/
// class Solution {
// public:
//     int addDigits(int num) {

//         while(num>9)
//         {
//         int ans = 0, rem;
//         while(num)
//         {
//             rem = num%10;
//             ans+= rem;
//             num/=10;
//         }
//         num = ans;
//         }
//         return num;
//     }
// };

// 2. Leap Year
// https://practice.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
// int isLeap(int N){

//     if(N%400==0)
//     return 1;
//     else if(N%4==0 && N%100!=0)
//     return 1;
//     else return 0;
// }

// 3. Reverse the number
// https: // leetcode.com/problems/reverse-integer/
// class Solution {
// public:
//     int reverse(int x) {
//         int ans = 0;
//         while(x)
//         {
//             if(ans>INT_MAX/10 || ans<INT_MIN/10)
//             return 0;
//             ans = (x%10) + ans*10;
//             x/=10;

//         }
//         return ans;

//     }
// };

// 4. Power of Two(2)
//     https: // leetcode.com/problems/power-of-two/description/
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {

//         if(n<1)
//         return 0;
//         while(n!=1)
//         {
//             if(n%2==1)
//             return 0;
//             n/=2;
//         }
//         return 1;
//     }
// };

// 5. SqareRoot of x (HW)
// https: // leetcode.com/problems/sqrtx/description/

// 6. Palindrome
// https://leetcode.com/problems/palindrome-number/description/
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0)
//         return 0;
//         int store=x, ans = 0, rem;
//         while(store)
//         {
//             rem = store%10;
//             store/=10;
//             if(ans > INT_MAX/10 )
//             return 0;
//             ans = ans*10 + rem;
//         }
//         if(ans == x)
//         return 1;
//         else
//         return 0;
//     }
// };

// 7. Complement of Base 10 Integer
// https://leetcode.com/problems/complement-of-base-10-integer/description/
// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         if(n==0)
//         return 1;
//         int ans = 0, rem, mul = 1;
//         while(n)
//         {
//             rem = n%2;
//             rem = rem ^ 1;
//             ans = ans + rem*mul;
//             mul*=2;
//             n/=2;
//         }
//         return ans;
//     }
// };