#include <iostream>
#include <stdio.h>
using namespace std;
vector<int> edge[100], cost[100];
const int infinity = 1000000000;
int bfs(int source, int destination);
int main()
{

}
int bfs(int source, int destination) {

    int d[100];
    for(int i=0; i<100; i++) d[i] = infinity;

    queue<int> q;
    q.push( source );
    d[ source ] = 0;

    while( !q.empty() ) {
        int u = q.front(); q.pop();
        int ucost = d[ u ];

        for(int i=0; i<edge[u].size(); i++) {
            int v = edge[u][i], vcost = cost[ u ][i] + ucost;

            // updating - this part is also called relaxing
            if( d[v] > vcost ) {
                d[v] = vcost;
                q.push( v );
            }
        }
    }

    return d[ destination ];
}
