#include <iostream>
using namespace std;
template<class T>
int index_of_maximum_value(int index, T value, T array[])
{
    int return_index=i;
    for(int i=index+1, i<sizeof(array)/sizeof(int); i++)
    {
        if(array[i]>value)
            return_index = i;
    }
    return return_index ;
}

int main()
{

}
