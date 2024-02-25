#ifndef __POINT__
#define __POINT__

/*
    struct: public data by default
    class: private data by default
    access specifiers: public, private, protected
*/

class Point
{
public:
    Point();
    Point(const Point &p);
    ~Point();
};

#endif