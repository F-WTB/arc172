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

int N, K, L;

int main()
{
    cin >> N >> K >> L;
    mint ans = 1;
    for (int i = 0; i < N - K; ++i)
        ans *= L - i;
    ans *= mint(L - N + K).pow(K);
    cout << ans << '\n';
}
