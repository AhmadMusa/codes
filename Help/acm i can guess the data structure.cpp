#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
#include <utility>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int test;
    while(scanf("%d",&test)==1)
    {
        int t =0;
        stack<int> st;
        queue<int> q;
        priority_queue<int> pq;
        int stackCheck=0, queueCheck=0, PqueueCheck=0;
        for(int i=1; i<=test; i++)
        {
            int type, num;
            scanf("%d %d",&type,&num);
            if(type==1)
            {
                st.push(num);
                q.push(num);
                pq.push(num);
            }
            else
            {
                t++;
                if( !st.empty())
                {
                    if(st.top()==num)
                    stackCheck++;
                }
                if( !q.empty())
                {
                    if(q.front()==num)
                    queueCheck++;
                }
                if( !pq.empty())
                {
                    if(pq.top()==num)
                    PqueueCheck++;
                }
                if( !st.empty())
                st.pop();
                if( !q.empty())
                q.pop();
                if( !pq.empty())
                pq.pop();

            }
        }

        if(stackCheck!=t && queueCheck!=t && PqueueCheck!=t)
        {
            printf("impossible\n");
        }
        else
        {
            if((stackCheck==t && queueCheck ==t) || (stackCheck==t&&PqueueCheck==t)||(queueCheck==t&&PqueueCheck==t))
                printf("not sure\n");
            else if(stackCheck==t)
                printf("stack\n");
            else if(queueCheck==t)
                printf("queue\n");
            else if(PqueueCheck==t)
                printf("priority queue\n");
        }
    }
    return 0;
}
