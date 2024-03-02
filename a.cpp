#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using pr = pair<int, int>;
using mint = modint998244353;
ostream &operator<<(ostream &os, const mint &x)
{
    os << x.val();
    return os;
}
struct fast
{
    fast()
    {
        cin.tie(0);
        ios::sync_with_stdio(0);
    }
} fast;
int H, W, N, A;
ll c[31], d[31];
int main()
{
    cin >> H >> W >> N;
    for (int i = 31 - 1; i >= 0; --i)
        for (int j = 31 - 1; j >= 0; --j)
        {
            if (H & 1 << i && W & 1 << j)
            {
                int k = min(i, j);
                c[k] += ll(1 << i - k) * (1 << j - k);
            }
        }

    for (int i = 0; i < N; ++i)
    {
        cin >> A;
        ++d[A];
    }

    for (int i = 31 - 1; i >= 0; --i)
    {
        if (d[i] > c[i])
        {
            cout << "No" << '\n';
            return 0;
        }
        c[i] -= d[i];
        if (i)
            c[i - 1] += c[i] * 4;
    }
    cout << "Yes\n";
}
