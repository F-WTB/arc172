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
int N;
string S;
int main()
{
    cin >> N >> S;
    int x = 0;
    int ans = 1;
    for (int i = 1; i < N; ++i)
    {
        x += S[i] == S[0] ? 1 : -1;

        if (S[i] == S[0])
            continue;
        if (x == 0 || x == -1 || x == -2)
            ++ans;
    }
    cout << ans << '\n';
}
