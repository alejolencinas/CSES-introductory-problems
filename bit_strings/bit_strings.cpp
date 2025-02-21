#include <bits/stdc++.h>

#define MOD (long long)(1e9 + 7)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    int result = 2 % MOD;

    for(int i = 1; i < n; i++)
    {
        result = (result * 2) % MOD;
    }

    cout << result;
    return 0;
}
