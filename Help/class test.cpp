/*
Completed By :
Ahmad Musa,
Dept of CSE,
KUET*/
#include <iostream>
#include<math.h>
#include <stdlib.h>     /* rand */
#define pi 3.141592653589793
using namespace std;
class Point
{
private:
    float x;
    float y;
public:
    Point()
    {
        x=0;
        y=0;
    };
    Point(float _x, float _y):x(_x), y(_y) {}
    float operator-(Point& P);
};
float Point::operator-(Point& P)
{
    return pow(fabs(x-P.x),2)+pow(fabs(y-P.y),2);
}
class Shape
{
protected:
    Point FirstPoint, SecondPoint; // Every dericed shape type requires minimum two points to represent itself.
                                   // In case of Cirle FirstPoint & SecondPoint represents center & a point on the perimeter respectively.
    float Area;
    float Perimeter;
public:
    Shape() {}
// TODO: provide parameterized constructor -- DONE --
Shape(Point one, Point two):FirstPoint(one),SecondPoint(two) {  }
    virtual float computeArea() = 0;
    virtual float computePerimeter() = 0;
};
class Rectangle: public Shape
{
private:
    Point ThirdPoint, FourthPoint;
public:
    Rectangle() {}
    Rectangle ( Point a, Point b , Point c, Point d):Shape(a,b) {ThirdPoint = c; FourthPoint=d;}
    float computeArea();
    float computePerimeter();
};
float Rectangle::computeArea()
{
    float length = FirstPoint-SecondPoint;
    float width = SecondPoint - ThirdPoint ;
    return length*width;
}
float Rectangle::computePerimeter()
{
    float length = FirstPoint-SecondPoint;
    float width = SecondPoint - ThirdPoint ;
    return 2*(length+width);
}
class Triangle:public Shape
{
private:
    Point ThirdPoint;
public:
    Triangle() {}
    Triangle( Point one , Point two , Point three):Shape(one, two) { ThirdPoint = three ;}
    float computeArea();
    float computePerimeter();
};
float Triangle::computeArea()
{
    float armOne = FirstPoint - SecondPoint;
    float armTwo = SecondPoint - ThirdPoint;
    float armThree = ThirdPoint - FirstPoint;
    float s = (armOne+armTwo+armThree)/2;
    return sqrt(s*fabs(s-armOne)*fabs(s-armTwo)*fabs(s-armThree));
}
float Triangle::computePerimeter()
{
    float armOne = FirstPoint - SecondPoint;
    float armTwo = SecondPoint - ThirdPoint;
    float armThree = ThirdPoint - FirstPoint;
    return (armOne+armTwo+armThree)/2;
}
class Circle:public Shape
{
public:
    Circle(){}
    Circle(Point one, Point two):Shape(one, two){}
     float computeArea();
    float computePerimeter();
};
float Circle::computeArea()
{
    float radius = FirstPoint-SecondPoint;
    return (pi * radius * radius);
}
float Circle::computePerimeter()
{
    float radius = FirstPoint-SecondPoint;
    return (2*pi*radius);
}
class Robot
{
private:
    float TotalArea, TotalPerimeter;
public:
    float areaCalculator(Shape &shapeReference);
    float perimeterCalculator(Shape &shapeReference);
    float getTotalArea();
    float getTotalPerimeter();
};
float Robot::getTotalArea()
{
    return TotalArea;
}
float Robot::getTotalPerimeter()
{
    return TotalPerimeter;
}
float Robot::areaCalculator(Shape &shapeReference)
{
    cout<<"Area is : ";
    float area = shapeReference.computeArea();
    TotalArea+= area;
     cout<<area<<endl;
}
float Robot::perimeterCalculator(Shape &shapeReference)
{
    cout<<"Perimeter is : " ;
    float perimeter ;
    perimeter = shapeReference.computePerimeter();
    TotalPerimeter+= perimeter;
    cout<<perimeter<<endl;
}
int main()
{
    Robot Robots;
    int numberOfBlocksRequired=3;
    int generatedBlocks=0;
    while(1)
    {
        Shape *pointer;
        float x,y;
        if(generatedBlocks == numberOfBlocksRequired)
            break;
        int nextShape = rand() % 3; //Genereted vaue will be 0,1 or 2.
        switch(nextShape)
        {
    case 0:
        {
            cout<<"Its a Rectangle ! \n";
            cout<<"Enter four different Points : \n";
            cout<<"Enter first point:"<<endl;
            cin>>x>>y;
            Point Recone(x,y);
             cout<<"Enter Second point:"<<endl;
            cin>>x>>y;
            Point Rectwo(x,y);
             cout<<"Enter Third point:"<<endl;
            cin>>x>>y;
            Point Recthree(x,y);
             cout<<"Enter fourth point:"<<endl;
            cin>>x>>y;
            Point Recfourth(x,y);
            Rectangle myRectangle(Recone, Rectwo, Recthree, Recfourth);
            pointer = &myRectangle;
            cout<<"Shape is Rectangular\n";
            Robots.areaCalculator(*pointer);
            Robots.perimeterCalculator(*pointer);
            break;
       }
    case 1:
        {
            cout<<"Its a Triangle ! \n";
            cout<<"Enter three different Points : \n";
            cout<<"Enter first point:"<<endl;
            cin>>x>>y;
            Point a(x,y);
             cout<<"Enter Second point:"<<endl;
            cin>>x>>y;
            Point b(x,y);
             cout<<"Enter Third point:"<<endl;
            cin>>x>>y;
            Point c(x,y);
            Triangle MyTriangle(a, b ,c);
             pointer = &MyTriangle;
             cout<<"Shape is Triangular\n";
             Robots.areaCalculator(*pointer);
             Robots.perimeterCalculator(*pointer);
             break;
        }
    default:
        {
            cout<<"Its a Circle ! \n";
            cout<<"Enter Two different Points, One is Centre and another on the perimeter : \n";
            cout<<"Enter first point:"<<endl;
            cin>>x>>y;
            Point Circleone(x,y);
             cout<<"Enter Second point:"<<endl;
            cin>>x>>y;
            Point Circletwo(x,y);
            Circle myCircle(Circleone, Circletwo);
            pointer = &myCircle;
            cout<<"Shape is Circular\n";
             Robots.areaCalculator(*pointer);
             Robots.perimeterCalculator(*pointer);
          }
         }
        generatedBlocks++;
    }
cout<<"\nRobot's Total area calculated: "<<Robots.getTotalArea()<<endl;
cout<<"RObot's Total Perimeter calculated: "<<Robots.getTotalPerimeter()<<endl;
return 0;
}

