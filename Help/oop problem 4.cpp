/* Ahmad Musa,
Dept of CSE,
KUET*/

/*
Problem#4:  Create a class called  time  that has separate int  member data for  hours, minutes,  and
seconds. One constructor should initialize this data to 0, and another should initialize it  to fixed
values. Another member function should display it, in 11:59:59 format. The final  member function
should add two objects of type time passed as arguments.
A  main()  program should create two initialized  time  objects  and  one that isn’t initialized. Then it
should add the two initialized values together, leaving the  result in the third  time  variable. Finally it
should display the value of this third variable.
*/

#include<iostream>
#include <string>
using namespace std;
class time
{
private:
    int hours;
    int minutes;
    int seconds;
    void setHours(int);
    void setMinutes(int);
    void setSeconds(int);
public:
    time();
    time(int , int , int );
    int getHours();
    int getMinutes();
    int getSeconds();
    time addition( time, time );
    void display();

};

time::time()
{
    hours=0, minutes=0, seconds=0;
}
time::time(int h , int m , int s)
{
    setHours(h);
    setMinutes(m);
    setSeconds(s);
}

void time::setHours(int h)
{
    hours = h;
}
void time::setMinutes(int m)
{
    minutes = m;
}
void time::setSeconds(int s)
{
    seconds = s;
}

int time::getHours()
{
    return hours;
}
int time::getMinutes()
{
    return minutes;
}
int time::getSeconds()
{
    return seconds;
}
time time::addition(time firstTime, time secondTime)
{
    int h1 = firstTime.getHours(), m1=firstTime.getMinutes() , s1=firstTime.getSeconds() ;

    int h2=secondTime.getHours(), m2=secondTime.getMinutes() , s2=secondTime.getSeconds();

    int newH, newM, newS;

    newS = (s1+s2)%60;

    newM = ((s1+s2)/60)+(m1+m2)%60;

    newH = ((m1+m2)/60) + (h1+h2);

    setHours(newH);
    setMinutes(newM);
    setSeconds(newS);

}
void time::display()
{
    cout<<getHours()<<" hours "<<getMinutes()<<" minutes "<<getSeconds()<<" seconds\n";
}
int main()
{
    time t1(3,12,59);
    time  t2(6,11,12);
    time  t3;

    t1.display();

    t2.display();

    t3.addition(t1,t2);


    cout<<"--------------------------------\n";
    t3.display();
}
