#include <iostream>
using namespace std;
class A
{
public :
    int az;
private:
    int ax;
protected:
    int ay;
};

class B : public A
{
public :
    int bz;
private:
    int bx;
protected:
    int by;

};
class C : private A
{
    public :
    int cz;
private:
    int cx;
protected:
    int cy;
};
class D : protected A
{
    public :
    int dz;
private:
    int dx;
protected:
    int dy;
};
int main()
{
    A oa;
    B ob;
    C oc;
    D od;
   ob.ax=3;

}
