#include <iostream>
using namespace std;

class MyClass
{
    int x;
public:
    MyClass(int i)
    {
        x = i;
    }
    int getX()
    {
        return x;
    }
};

int main()
{
    MyClass obs[4] = { -1,-2,-3,-4};
    int i;

    for(i=0; i < 4; i++)
        cout << "obs[" << i << "].getX(): " << obs[i].getX() << "\n";

    return 0;
}
