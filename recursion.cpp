#include <iostream>
#include "recursion.h"

void printRange(int left, int right)
{
    if (left < right)
    {
        std::cout << left << " ";
        printRange(left + 1, right);
    }
    else if (left == right)
    {
        std::cout << left << std::endl;
    }
}

int sumRange(int left, int right)
{
    int sum = 0;
    if (right >= left)
    {
        sum = left + sumRange(left + 1, right);
        return sum;
    }
    else
    {
        return sum;
    }
}

int sumArray(int *arr, int size)
{
    if (size == 1)
    {
        return arr[size - 1];
    }
    else
    {
        return arr[size - 1] + sumArray(arr, size-1);
    }
 }

bool isAlphanumeric(std::string s)
{
    int count = 0;
    if (s.empty())
    {
        return true;
    }
    else if (isalpha(s[count]) || isdigit(s[count]))
    {
        return true && isAlphanumeric(s.substr(count+1, s.length()-1));
    }
    else
    {
        return false;
    }
}

bool nestedParens(std::string s)
{
    int left = 0, right = s.length()-1;
    if (s.length() % 2 != 0)
    {
        return false;
    }
    else if (s.empty())
    {
        return true;
    }
    else if ((s.at(left) == '(') && (s.at(right)  == ')'))
    {
        return true && nestedParens(s.substr(left+1, right-1));
    }
    else
    {
        return false;
    }
}