#ifndef __WINDOW__
#define __WINDOW__

#include <string>

class Window
{
public:
    Window(std::string title);
    std::string get_title() const;
    void set_title(const std::string title);

private:
    std::string title;
};

#endif