#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int k = 1; k <= n; k++)
    {
        long long result = 0;
        long long table_size = k * k;
        long long full_combinations;
        full_combinations = (table_size * (table_size - 1)) / 2;
        if(k > 1)
        {
            long long res_movements = (k - 2) * (10 + (4 * (k - 4)));
            res_movements += 4 + ((k - 4) * 2);
            result = full_combinations - res_movements;
        }
        cout << result << "\n";
    }

    return 0;
}
