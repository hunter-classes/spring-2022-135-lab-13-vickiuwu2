#include <iostream>
#include "recursion.h"

int main()
{
    std::cout << "--------------------TASK A--------------------\n";
    std::cout << "printRange(-2, 10) returns: "; printRange(-2, 10); std::cout << std::endl;
    std::cout << "printRange(0, 0) returns: "; printRange(0, 0); std::cout << std::endl;
    std::cout << "printRange(-8, -2) returns: "; printRange(-8, -2);

    std::cout << "\n--------------------TASK B--------------------\n";
    int x = sumRange(1, 3);
    std::cout << "sumRange(1, 3) returns: " << x << std::endl;   // 6
    
    int y = sumRange(-2, 10);
    std::cout << "sumRange(-2, 10) returns: " << y << std::endl;   // 52

    std::cout << "\n--------------------TASK C--------------------\n";
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, 10); // Add all elements
    std::cout << "The values of the array are: [12, 17, -5, 3, 7, -15, 27, 5, 13, -21]" << std::endl;
    std::cout << "The sum of all the elements is " << sum1 << std::endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "The sum of the first 5 elements is " << sum2 << std::endl;  // Sum is 34

    delete[] arr;

    std::cout << "\n--------------------TASK D--------------------\n";
    std::cout << "isAlphanumeric(\"ABCD\") returns: " << isAlphanumeric("ABCD") << std::endl;        // true (1)
    std::cout << "isAlphanumeric(\"Abcd1234xyz\") returns: " << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
    std::cout << "isAlphanumeric(\"KLMN 8-7-6\") returns: " << isAlphanumeric("KLMN 8-7-6") << std::endl;  // false (0)

    std::cout << "\n--------------------TASK E--------------------\n";
    std::cout << "nestedParens(\"((()))\") returns: " << nestedParens("((()))") << std::endl;      // true (1)
    std::cout << "nestedParens(\"()\") returns: " << nestedParens("()") << std::endl;          // true (1)
    std::cout << "nestedParens("") returns: " << nestedParens("") << std::endl;            // true (1)

    std::cout << "nestedParens(\"(((\") returns: " << nestedParens("(((") << std::endl;         // false (0)
    std::cout << "nestedParens(\"(()\") returns: " << nestedParens("(()") << std::endl;         // false (0)
    std::cout << "nestedParens(\")(\") returns: " << nestedParens(")(") << std::endl;          // false (0)
    std::cout << "nestedParens(\"a(b)c\") returns: " << nestedParens("a(b)c") << std::endl << std::endl;       // false (0)

    return 0;
}