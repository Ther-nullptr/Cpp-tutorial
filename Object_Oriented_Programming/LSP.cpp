#include <iostream>

class Rectangle
{
public:
    Rectangle(int width, int height) : width(width), height(height) {}

    void setWidth(int width)
    {
        this->width = width;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    void setEdges(int width, int height)
    {
        this->width = width;
        this->height = height;
    }

private:
    int width;
    int height;
};

class Square: public Rectangle
{
    // ...
};