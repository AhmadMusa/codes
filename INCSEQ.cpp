#include <bits/stdc++.h>

using namespace std;

const int mod = 5e6, maxn = 1e5;

int sum[maxn + 1], a[maxn], b[maxn];

void add(int i, int k)
{
    for(; i <= maxn; i += i & -i)
    {
        sum[i] += k;
        if(sum[i] > mod) sum[i] -= mod;
    }
}

int get(int i)
{
    int ret = 0;
    for(; i; i -= i & -i)
    {
        ret += sum[i];
        if(ret > mod) ret -= mod;
    }
    return ret;
}

int main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i], a[i]++, b[i] = 1;
    for(int i = 0; i < k; i++)
    {
        memset(sum, 0, sizeof(sum));
        for(int j = 0; j < n; j++)
        {
            add(a[j], b[j]);
            b[j] = get(a[j] - 1);
        }
        for(int j = 0; j < n; j++)
        {
            cout<<b[j]<<ends;
        }
        cout<<endl;

    }
    cout << get(maxn) << "\n";
    return 0;
}
