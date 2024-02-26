#include "window.hpp"
#include <iostream>
#include <string>

Window::Window(std::string t) : title(t)
{
}

std::string Window::get_title() const
{
    return this->title;
}

void Window::set_title(const std::string title)
{
    if (title.length() > 20)
        throw new std::invalid_argument("The window title should be 20 caracters max.");
    this->title = title;
}