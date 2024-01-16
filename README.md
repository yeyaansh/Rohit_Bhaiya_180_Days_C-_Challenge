Today is Day-65 and Today I learned about Pointers with character arrays..
Today's HW is:

1.  What is void\*, and what is its use case
2.  What is static_cast in c++.
3.  What is the difference between below 2 lines
    const char *str = "Hello, World!";
    char *str = "Hello, World!";

4.       #include <iostream>

    using namespace std;

    int calculateLength(const char \*str) {
    int length = 0;

    // Calculate the length of string

    }

int main() {
const char \*myString = "Hello, World!";
cout << "Length of the string: " <<calculateLength(myString) << endl
return 0;
}

5. Write a function to check if a C-style string is a palindrome.

#include <iostream>
#include <cstring>
Using namespace std;

bool isPalindrome(const char \*str) {
// Check for palindrome  
}

int main() {
const char *palindrome1 = "level";
const char *palindrome2 = "hello";
cout << "Is '" << palindrome1 << "' a palindrome? " << (isPalindrome(palindrome1) ? "Yes" : "No") <<endl;
cout << "Is '" << palindrome2 << "' a palindrome? " << (isPalindrome(palindrome2) ? "Yes" : "No") <<endl;
return 0;
}
