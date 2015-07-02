
#include <cstdio.h>
#include <cstring.h>
#include <string.h>
#include <cmath.h>
#include <cstdlib.h>
#include <algorithm.h>

using namespace std;

int main()
{
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    vector<long long int>set_A,set_B;
    string A,B;
    char temp[100000];
    long long int i,value,j,count;
    bool is_equal;
    while(getline(cin,A))
    {
        getline(cin,B);
        memset(temp,'\0',sizeof(temp));
        for(i=0,j=0;i<A.size();i++,j++)
        {
            if(A[i]==' ')
            {
                temp[j+1]='\0';
                value=atoi(temp);
                set_A.push_back(value);
                j=-1;
            }
            else
            {
                temp[j]=A[i];
            }
            if(i==A.size()-1)
            {
                temp[j+1]='\0';
                value=atoi(temp);
                set_A.push_back(value);
                j=0;
            }
        }
        memset(temp,'\0',sizeof(temp));
        for(i=0,j=0;i<B.size();i++,j++)
        {
            if(B[i]==' ')
            {
                temp[j+1]='\0';
                value=atoi(temp);
                set_B.push_back(value);
                j=-1;
            }
            else
            {
                temp[j]=B[i];
            }
            if(i==B.size()-1)
            {
                temp[j+1]='\0';
                value=atoi(temp);
                set_B.push_back(value);
                j=0;
            }
        }

        sort(set_A.begin(),set_A.end());
        sort(set_B.begin(),set_B.end());
        count=0;
        if(set_A==set_B)
        {
            cout<<"A equals B"<<endl;
        }
        else
        {
            if(set_A.size()<set_B.size())
            {
                is_equal=equal(set_A.begin(),set_A.end(),set_B.begin());
                if(is_equal)
                {
                    cout<<"A is a proper subset of B"<<endl;
                }
                else
                {
                    for(i=0;i<set_A.size();i++)
                    {
                        if(binary_search(set_B.begin(),set_B.end(),set_A[i]))
                        {
                            count=1;
                            break;
                        }
                    }
                    if(count==1)
                    {
                        cout<<"I'm confused!"<<endl;
                    }
                    else
                    {
                        cout<<"A and B are disjoint"<<endl;
                    }
                }
            }
            else if(set_A.size()>set_B.size())
            {
                is_equal=equal(set_B.begin(),set_B.end(),set_A.begin());
                if(is_equal)
                {
                    cout<<"B is a proper subset of A"<<endl;
                }
                else
                {
                    for(i=0;i<set_B.size();i++)
                    {
                        if(binary_search(set_A.begin(),set_B.begin(),set_B[i]))
                        {
                            count=1;
                            break;
                        }
                    }
                    if(count==1)
                    {
                        cout<<"I'm confused!"<<endl;
                    }
                    else
                    {
                        cout<<"A and B are disjoint"<<endl;
                    }
                }
            }
            else
            {
                for(i=0;i<set_A.size();i++)
                {
                    if(binary_search(set_B.begin(),set_B.end(),set_A[i]))
                    {
                        count=1;
                        break;
                    }
                }
                if(count==1)
                {
                    cout<<"I'm confused!"<<endl;
                }
                else
                {
                    cout<<"A and B are disjoint"<<endl;
                }
            }
        }
        A.clear();
        B.clear();
        set_A.clear();
        set_B.clear();
    }

    return 0;
}
