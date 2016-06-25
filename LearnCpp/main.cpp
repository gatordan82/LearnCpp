#include "stdafx.h"
#include <iostream>
#include "add.h"
#include "LearnCpp.h"




class TestClass
{
private:
    int x;
    int y;

public:
    TestClass(int _x, int _y) : x(_x), y(_y)
    {}

    int getX()
    {
        return x;
    }

    int getY() { return y; }

    int sum() 
    {
        return x + y;
    }
};

int main()
{
    using namespace std;

    int three { 3 };
    cout << "Value of three is: " << three << endl;
    int* ptr = &three;

    *ptr = 5;
    cout << "New value of three is: " << three << endl;

    int arrayTest[] {1, 2, 3, 4};
    cout << "Array is a pointer: " << arrayTest << endl;
    cout << "Next array entry is a pointer: " << arrayTest + 1 << endl;
    cout << "Next array entry value is an int: " << *(arrayTest + 1) << endl;

    TestClass test(3, 4);
    cout << "The sum of 3 and 4 is: " << test.sum() << endl;
    waitForEnter();

    return 0;
}
