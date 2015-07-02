#include <iostream>
#include <string>
using namespace std;
class stdnt
{
private:
    string name;
    static int count;
public:
    string getName() const;
    stdnt(string input) { name = input; count++; }
    int getCount()const { return  count;}
};
int stdnt::count=0;
string stdnt::getName() const
{
    return name;
}
int main()
{
    stdnt myName("Musa");
    stdnt myName2("M");

cout<<myName.getCount();

}
