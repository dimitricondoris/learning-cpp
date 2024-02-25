#include "point.hpp"
#include <iostream>

Point::Point()
{
    std::cout << "Creating a point." << std::endl;
}

Point::Point(const Point &p)
{
    std::cout << "Copying a point." << std::endl;
}

Point::~Point()
{
    std::cout << "Destroying a point." << std::endl;
}