#include "numEnterClass.h"
#include <iostream>

double numEnterClass::numEnter(double numX, int count)
{
    std::cout << "������� ����� " << count << ": ";
    std::cin >> numX;

    return numX;
}
