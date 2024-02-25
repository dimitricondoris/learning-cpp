#include "window.hpp"
#include <iostream>
#include <string>

Window::Window(std::string t) : title(t)
{
}

void Window::run() const noexcept
{
    std::cout << "Displaying..." << std::endl;
}