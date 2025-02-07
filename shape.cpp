#include <iostream>
#include <math.h>

class Shape
{
public:
    virtual double calculateArea();
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double calculateArea()
    {
        return 3.14 * radius * radius;
    }
};
class Rect : public Shape
{
private:
    double length, breath;

public:
    Rect(double l, double b) : length(l), breath(b) {}

    double calculateArea
    {
        return length * breath;
    }
};

int main()
{
    double radius, length, breath;
    cout << "Enter radius : ";
    cin >> radius;
}