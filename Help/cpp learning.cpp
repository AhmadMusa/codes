#include <iostream>
#include <string>
using namespace std;
//define a class GradeBook with Member function displayMessage
//create a GradeBook object and call it's displayMessage function
class GradeBook
{
public:
    void displayMessage( string coursename )
    {
        cout << " Welcome to the Garde Book for  " << coursename << " ! "<<  endl;
    }
};
int main()
{
    string nameOfCourse;

    GradeBook myGradeBook; //create  an object
    cout << "Please enter the course name : " << endl;
    getline( cin , nameOfCourse );

    cout << endl;
    myGradeBook.displayMessage(nameOfCourse); // call its member function
}
