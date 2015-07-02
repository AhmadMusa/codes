#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
class str
{
    char *s;
    int len;
public:
    str(int size) { s = new char[size+1]; len = size;}
    void input() { cin>>s; }
    void out() { cout<<s; }
    str operator+(str &obj)
    {
        str total(len+obj.len+1);
        int i =0;
        for(int j=0; j<len; j++)
        {
            total.s[i++] =  s[j];
        }
        for(int j=0; j<obj.len; j++)
        {
            total.s[i++] =  obj.s[j];
        }
        total.s[i]='\0';

        return total;
    }
};


int main()
{

str str1(5), str2(5);
str1.input();
str2.input();

str str3(20);

str3=str1+str2;
str3.out();

    return 0;
}
