/* Ahmad Musa,
Dept of CSE,
KUET*/

/*  Problem #1: Create a class called  student  associated with  Name, Roll, Batch,  Term, Y ear  and  CGPA.
Provide  with get and set functions  for the private members of the class.  Also  define constructors to
initialize the member variables to suitable default values.  Finally declare  and  define  two other
member functions to take input from the user and display the student’s information on screen. */


#include <iostream>
#include <string>
using namespace std;

class student
{
private:

    string name;
    int roll;
    int batch;
    int term;
    int year;
    float cgpa;
    void setName(string);
    void setBatch(int);
    void setRoll(int);
    void setTerm(int);
    void setYear(int);
    void setCgpa(float);

public:
    student();
    string getName();
    int getRoll();
    int getTerm();
    int getBatch();
    int getYear();
    float getCgpa();

    void getInput();
    void display();

};

student::student()
{
    name="No Name";
    roll =0; term =0, batch =0, cgpa=0, year=0;
}

void student::setName(string UserName)
{
    name = UserName;
}

void student::setYear(int UserYear)
{
    year = UserYear;
}
void student::setRoll(int UserRoll)
{
    roll = UserRoll;
}

void student::setBatch(int UserBatch)
{
    batch = UserBatch;
}

void student::setTerm(int UserTerm)
{
    term = UserTerm;
}

void student::setCgpa(float UserCGPA)
{
    cgpa = UserCGPA;
}

string student::getName()
{
    return name;
}

int student::getRoll()
{
    return roll;
}
int student::getBatch()
{
    return batch;
}

int student::getYear()
{
    return year;
}

int student::getTerm()
{
    return term;
}
float student::getCgpa()
{
    return cgpa;
}

void student::getInput()
{
    cout<<"Please Enter your Name:"<<endl;
    string name;
    cin>>name;
    setName(name);
    cout<<"Enter your Batch"<<endl;
    int batch;
    cin>>batch;
    setBatch(batch);
    cout<<"Enter your roll:"<<endl;
    int roll;
    cin>>roll;
    setRoll(roll);
    cout<<"Enter your year"<<endl;
    int year;
    cin>>year;
    setYear(year);
    cout<<"Enter your term"<<endl;
    int term;
    cin>>term;
    setTerm(term);
    cout<<"Enter your CGPA !!! "<<endl;
    float cgpa;
    cin>>cgpa;
    setCgpa(cgpa);

}

void student::display()
{
      cout<<"\nHere is The output"<<endl;
      cout<<"Name : " <<getName()<<endl;
      cout<<"Batch : " <<getBatch()<<endl;
      cout<<"Roll : " <<getRoll()<<endl;
      cout<<"Year : " <<getYear()<<endl;
      cout<<"Term : " <<getTerm()<<endl;
      cout<<"CGPA : " <<getCgpa()<<endl;

}
int main()
{
student ();
student s1;

s1.getInput();
s1.display();
}
