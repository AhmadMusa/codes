#include <iostream>
using namespace std;
class PoweredDevice
{
public:
    PoweredDevice(int nPower)
    {
        cout << "PoweredDevice: " << nPower << endl;
    }
    PoweredDevice()
    {
        cout<<"Sorry"<<endl;
    }
};

class Scanner: virtual public PoweredDevice
{
public:
    Scanner(int nScanner, int nPower)
    {
        cout << "Scanner: " << nScanner << endl;
    }
    Scanner()
    {
cout<<"scanner"<<endl;
    }
};

class Printer: virtual public PoweredDevice
{
public:
    Printer(int nPrinter, int nPower)
    {
        cout << "Printer: " << nPrinter << endl;
    }
    Printer()
    {
        cout<<"Printer"<<endl;
    }
};

class Copier: public Scanner, public Printer
{
public:
    Copier(int nScanner, int nPrinter, int nPower)
    {
    }
};

int main()
{
    Copier cCopier(1, 2, 3);
}
