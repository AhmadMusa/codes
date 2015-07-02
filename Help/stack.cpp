#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
int main()
{
    stack <int> rails ;
    for ( int i =1; i <= 5 ; i++)
{
     int temp;
     cin >> temp; // Taking input
     rails.push(temp); // pushing into stack
}

cout << rails.empty();

while( rails.empty()==0 )
{
    cout << rails.top();
rails.pop();
}
cout << rails.empty();
}
