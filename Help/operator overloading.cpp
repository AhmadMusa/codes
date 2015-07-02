#include <iostream>
using namespace std;
class complexNumber
{
    int real;
    int img;
public:
    complexNumber(){}
    complexNumber(int x, int y):real(x), img(y){}
    int getReal() {return real;}
    int getImg() {return img;}
    complexNumber operator+(complexNumber); //operator funcntion //declaration
//Non-Member Function declaration using friend
     friend ostream& operator<<(ostream& , const complexNumber&);
     friend istream& operator>>(istream&, complexNumber&);
};

// definition of ‘>>’ operator overloading using friend function.

istream& operator>>(istream& in, complexNumber & Z)
{
    cout<<"Enter the Real Part: ";
    in>>Z.real;
    cout<<"\nEnter the Imaginary Part: ";
    in>>Z.img;
    return in;
}
// definition of ‘<<’ operator overloading using friend function.
ostream& operator<<(ostream& out, const complexNumber& Z)
{
    out<<Z.real<<" + "<<Z.img<<"i"<<endl;
    return out;
}

//following is the definition of ‘+’ operator overloading using Member Function

complexNumber complexNumber::operator+(complexNumber Z)
{
    return(complexNumber(real+Z.real, img+Z.img)); //creating on the fly object
}

int main()
{
    complexNumber Z1 ; //declare a complexNumber Object Z1
    complexNumber Z2 ; //declare a complexNumber Object Z2
    complexNumber Z; //declare a complexNumber Object Z
    cin>>Z1>>Z2;     // this will call the overloaded operator “>>”
    Z=Z1+Z2;         //add two complexNumber Objects with + operator
    cout<<Z1<<Z2<<Z; // this will call the overloaded operator “<<”
    return 0;
}

