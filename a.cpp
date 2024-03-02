#include <bits/stdc++.h>
using namespace std;

const int N = 6;
int A[N];

bool b = 0;

int main()
{
    for (int i = N - 1; i >= 0; --i)
    {
        cout << i << '\n';
        if (b)
            return 0;
        A[i - 1] = 0;
    }
}
