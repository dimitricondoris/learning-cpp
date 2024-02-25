#include "point.hpp"
#include <iostream>

Point::Point()
{
    std::cout << "Creating a point." << std::endl;
}

Point::Point(const Point &p)
{
    std::cout << "Copy of a point." << std::endl;
}

Point::~Point()
{
    std::cout << "Destroying the object." << std::endl;
}