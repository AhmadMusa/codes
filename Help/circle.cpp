#include<iostream>
using namespace std;
class volume //creation of class
{
    int width;
    int height;
    int depth;

public:
    volume() //default constructor
    {
        width=10;
        height=20;
        depth=30;
    }

    volume(int x) //second constructor
    {
        width=height=depth=x;
    }

    volume( volume & v) //syntax of copy constructor[classname(constructor & object)]
    {
        width=v.width;
        height=v.height;
        depth=v.depth;
    }
    void print() //function to find and display the volume
    {
        int v=width*height*depth;
        cout<<"\nVolume is= "<<v;
    }
};

int main() //main function
{

    volume v1;
    v1.print();
    volume v2(5);
    v2.print();
    volume v3(v1); //copies the values of v1
    v3.print();
    volume v4(v2); //copies the values of v2
    v4.print();
}
