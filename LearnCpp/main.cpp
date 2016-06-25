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

    int getY()
    {
        return y;
    }

    int sum()
    {
        return x + y;
    }
};

int main()
{
    using namespace std;
    TestClass test(3, 4);
    cout << "The sum of 3 and 4 is: " << test.sum() << endl;
    waitForEnter();

    return 0;
}
