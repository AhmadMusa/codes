#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        vector<int> num;
        vector<int>::iterator it;
        for(int i =0 ; i<n ; i++)
        {
            int t;
            scanf("%d",&t);
            num.push_back(t);
        }
       long  long int sum1=0, sum2=0;
int eo=1;
        while(!num.empty())
        {
            it=num.begin();
            int x = *it;
            it= num.end()-1;
            int y = *it;

            if(x>=y)
            {
                if(eo%2==1)
                    sum1+=x;
                else
                    sum2+=x;
                it=num.begin();
                num.erase(it);
            }
            else
            {
              if(eo%2==1)
                    sum1+=y;
                else
                    sum2+=y;
                num.pop_back();
            }
            eo++;
        }

           cout<<sum1<<" "<<sum2<<endl;
        num.clear();
    }
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                  �       �       �       �       d       l      w      �  !    �      �      �      �      �  %    �      �      �      �  &    �              '    5      :  &    \      �      �      �                        #      ;      Y      ^  (    f      n      u      z  &    �  $    �  "    �      �  )    �      �  *    �      �  +                         &       6       