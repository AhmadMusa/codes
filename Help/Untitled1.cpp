#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 10000 + 5;
int N;
long long E, R, v[maxn], u[maxn];
int main()
{
    freopen("B-small-practice.in","r",stdin);
    freopen("output.out","w",stdout);

    int t2;
    cin >> t2;
    for (int t1 = 1; t1 <= t2; ++t1)
    {
        printf("Case #%d: ", t1);
        cin >> E >> R >> N;
        if (R > E)
            R = E;
        for (int i = 1; i <= N; ++i)
            cin >> v[i];
        u[1] = E;
        for (int i = 2; i <= N; ++i)
        {
            u[i] = R;
            for (int j = i - 1; j >= 1; --j)
            {
                if (v[j] >= v[i])
                    break;
                if (u[j] + u[i] <= E)
                {
                    u[i] += u[j];
                    u[j] = 0;
                }
                else
                {
                    u[j] -= E - u[i];
                    u[i] = E;
                    break;
                }
            }
        }
        long long ret = 0;
        for (int i = 1; i <= N; ++i)
            ret += u[i] * v[i];
        cout << ret;
        printf("\n");
    }

    return 0;
}