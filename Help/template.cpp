#include <iostream>
using namespace std;

template<class T>
class Pair
{
    T one, two ;
public:
    Pair(T a, T b);
    Pair() {}
    void show() { cout<<one<<" "<<two; }
};
template<class T>
Pair<T>::Pair(T a , T b)  { one =a; two = b; }
int main()
{
    typedef Pair<int> Mypair;

       Mypair p(1,2);

       p.show();
}
