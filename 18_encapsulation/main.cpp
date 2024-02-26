#include "window.hpp"
#include <iostream>

int main()
{
    Window app{"My program GUI."};

    std::cout << app.get_title() << std::endl;
    app.set_title("My new title which is very long for a window title.");
    std::cout << app.get_title() << std::endl;

    return 0;
}