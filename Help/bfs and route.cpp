
#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>

using namespace std;

int n, cost[100100], parent[100100];
vector <int> graph[100100];
vector <int>::iterator it;
bool visit[100100];
stack <int> route;

void bfs(int s)
{
    queue <int> q;
    int i, u, v;

    memset(visit, false, sizeof(visit));
    memset(cost, 0, sizeof(cost));
    memset(parent, -1, sizeof(parent));

    visit[s] = true;
    parent[s] = s;
    q.push(s);

    while(!q.empty()){
        u = q.front();
        q.pop();

        for(it=graph[u].begin(); it!=graph[u].end(); it++){
            v = *it;

            if(!visit[v]){
                visit[v] = true;
                cost[v] = cost[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

void path(int from, int to)
{
    route.push(to);
    while(parent[to]!=to){
        to = parent[to];
        route.push(to);
    }
}

int main()
{
    int i, m, a, b, from, to;

    while(scanf("%d %d", &n, &m)!=EOF){ ///n = nodes, m = edges
        while(m--){
            scanf("%d %d", &a, &b);

            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        ///outputting the cost
        scanf("%d %d", &from, &to);
        bfs(from);
        printf("%d\n", cost[to]);

        ///printing the path
        scanf("%d %d", &from, &to);
        path(from, to);

        cout << route.top();
        route.pop();

        while(!route.empty()){
            cout << "-->" << route.top();
            route.pop();
        }
        printf("\n");
    }

    return 0;
}
