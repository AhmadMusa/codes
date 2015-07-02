#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
class Point
{
protected:
    float x, y;
public:
    Point(){}
    Point(float x1, float y1):x(x1),y(y1){}

};

class Shape
{
protected:
    Point firstPoint, secondPoint;
    float area, perimeter;
public:
    Shape(){}
    Shape(Point a, Point b) { firstPoint = a; secondPoint = b; }
    virtual float computeArea()=0;
    virtual float computePerimeter()=0;

};

class Rectangle:public Shape
{
private:
    float thirdPoint, fourthPoint;
public:
    Rectangle(Point a, Point b, Point c, Point d):Shape(a,b) { thirdPoint = c; fourthPoint = d; }
    float computeArea();
    float computePerimeter();

};


class Triangle:public Shape
{
private:
    Point thirdPoint;
public:
    Triangle(){}
Triangle(Point a, Point b, Point c):Shape(a,b) { thirdPoint = c; }
     float computeArea();
    float computePerimeter();

};

class Circle:public Shape
{
private:

public:
     float computeArea();
    float computePerimeter();
};

class Robot
{
    private:
        float totalArea, TotalPerimeter;
    public:
       float computeAreaOfRobot(Shape& referenceShape);

};
float Robot::computeAreaOfRobot(Shape& referenceShape)
{
    referenceShape.computeArea();

}
int main()
{
    Robot robots;
    int input = rand() % 3;

    switch(input)
    {

    case 0:
        {

        cout<<"Enter four points for a rectangle :\n";
        float x, y;
        cin>>x>>y;
        Point one(x,y);

        Point two(x,y);
        Point three(x,y);
        Point four(x,y);

        Rectangle rec(one, two, three, four);

        robots.computeAreaOfRobot(rec);

    }

    }


}
