/* Ahmad Musa,
Dept of CSE,
KUET*/

/*
Problem#3:  Write a class to represent a vector ( A array of floating point values). Include the member
function to perform the following tasks:
1.  To create the vector
2.  To modify the  value of a given element
3.  To multiply by a scalar value
4.  To display the vector in the form (12.2, 20.0, 50.0…………)
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class vector
{
private:
    int sizeOfVector;
    float OwnVector[1000];
public:
    vector();
    void createVector(int size);
    void getInput();
    void modifyElementAt(int position, float value);
    void multiplyVectorWith(int value);
    void display();

};
vector::vector()
{
    memset(OwnVector, 0, sizeof(OwnVector)); /* Clearing values initially*/
}

void vector::createVector(int size)
{
    OwnVector[size];
}

void vector::getInput()
{
    cout<<"How Many Elements:\n";
    int how_many;
    cin>>how_many;
    sizeOfVector = how_many;
    cout<<"Enter element  "<<endl;
    for(int i=0; i<how_many; i++)
    {
        cin>>OwnVector[i];
    }
}

void vector::modifyElementAt( int position, float value)
{
    OwnVector[position]=value;
    cout<<"Modified " <<position<<"th Position With the value "<<value<<endl;
}

void vector::multiplyVectorWith(int value)
{
    for(int i=0; i<sizeOfVector; i++)
    {
        OwnVector[i] *= value;
    }
    cout<<"Multiplied all elements With "<<value<<endl;
}

void vector::display()
{
    cout<<"Elements are : \n";
    for(int i=0; i<sizeOfVector; i++)
    {
        cout<<OwnVector[i]<<endl;
    }
}

int main()
{
vector myvector;
vector();
myvector.createVector(10);
myvector.getInput();
myvector.modifyElementAt(2, 3);
myvector.display();
myvector.multiplyVectorWith(10);
myvector.display();

}
