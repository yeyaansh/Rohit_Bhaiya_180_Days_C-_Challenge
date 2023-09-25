Today is Day 8 and today I learned about Pattern Problems
Today's HW is:
4 4 4 4 4 4
4 4 4 4 4 4
4 4 4 4 4 4
4 4 4 4 4 4
4 4 4 4 4 4

Second Pattern:

       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25

Third Pattern:

    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216

Fourth Pattern:

F G H I J K  
F G H I J K
F G H I J K
F G H I J K
F G H I J K

QUESTION: F G H I J K In this question if we solve like the above method...why answer comes in int?
F G H I J K
F G H I J K
F G H I J K
F G H I J K

SOl.
#include <iostream>
using namespace std;
int main()
{
int row, col;
for (row = 1; row <= 5; row++)
{
char ch = 'F';
for (col = 1; col <= 6; col++)
{
cout << ch+col-1 << " ";
}
cout << endl;
}
return 0;
};

OUTPUT:
70 71 72 73 74 75
70 71 72 73 74 75
70 71 72 73 74 75
70 71 72 73 74 75
70 71 72 73 74 75
