#include <iostream>
using namespace std;
class base
{
private:
    int x;
public:
    int getValue() const { return x;}
    void setValue(int value) { x = value ; }
    base(){}
};
int main()
{
    const base obj1;
    obj1.getValue();
}
