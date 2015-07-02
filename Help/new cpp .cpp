#include <iostream>
using namespace std;
class myInt
{
    int num;
public:
    myInt() { num=0; }
    myInt(int n) { num=n; }
    myInt operator=(myInt obj)
    {
        cout<<"a Eual b \n";
        num = obj.num;
    }
    myInt& operator+=(myInt obj)
    {
        cout<<"\nPlus Equal to second one\n";
        num+=obj.num;
        return *this;
    }
    myInt& operator+(myInt obj)
    {
        cout<<"\nsumming....\n";
        num+=obj.num;
        return *this;
    }
    myInt& operator++()
    {
        cout<<"\nPre incrementing...\n";
        num++;
        return *this;
    }
    myInt operator++(int garbage)
    {
        cout<<"\nPost incrementing...\n";
        myInt save(*this);
        num++;
        return save;
    }
    friend istream& operator>>(istream& in, myInt &obj)
    {
        in>>obj.num;
        return in;
    }

    void show(){ cout<<num<<endl; }

};


int main()
{
    myInt num1, num2;
    cout<<"Enter num1 and num2\n";
    cin>>num1>>num2;
    cout<<"Now num1 and num2:\n";
    num1.show();
    num2.show();

    num2 = num1;
    cout<<"Now num1 and num2:\n";
    num1.show();
    num2.show();

    num1 += num2;

cout<<" Now num1 and num2:\n";
    num1.show();
    num2.show();
}

