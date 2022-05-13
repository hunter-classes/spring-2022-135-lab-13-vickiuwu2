#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "recursion.h"

//TEST_CASE("TASK A")
//{
    //CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    //CHECK(printRange(0, 0) == "0");
    //CHECK(printRange(-8, -2) == "-8 -7 -6 -5 -4 -3 -2"));
//}

TEST_CASE("TASK B")
{
    CHECK(sumRange(1,3) == 6); 
    CHECK(sumRange(-2, 10) == 52);
}

TEST_CASE("TASK C")
{
    int size = 10;
    int *arr = new int[size];
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

    int sum1 = sumArray(arr, size);
    CHECK(sum1 == 43);
    int sum2 = sumArray(arr, 5);
    CHECK(sum2 == 34);

    delete[] arr;
    arr = nullptr;
}

TEST_CASE("TASK D")
{
    CHECK(isAlphanumeric("ABCD") == true);
    CHECK(isAlphanumeric("Abcd1234xyz") == true);
    CHECK(isAlphanumeric("KLMN 8-7-6") == false);
}

TEST_CASE("TASK E")
{
    CHECK(nestedParens("((()))") == true);
    CHECK(nestedParens("()") == true);
    CHECK(nestedParens("") == true);

    CHECK(nestedParens("(((") == false);
    CHECK(nestedParens("(()") == false);
    CHECK(nestedParens(")(") == false);
    CHECK(nestedParens("a(b)c") == false);
}