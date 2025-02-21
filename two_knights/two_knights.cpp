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
//        full_combinations = (factorial(table_size)) / (2 * (factorial(table_size - 2)));
        full_combinations = (table_size * (table_size - 1)) / 2;
//        cout << "full combinations: " << full_combinations << "\n";
        if(k > 2)
        {
            long long res_movements = (k - 2) * (10 + (4 * (k - 4)));
            res_movements += 4 + ((k - 4) * 2);
            result = full_combinations - res_movements;
        } else
        {
            if(k < 2)
            {
                result = 0;
            } else
            {
                result = full_combinations;
            }
        }
        cout << result << "\n";
    }
//    cout << "Hello world!" << endl;
    return 0;
}
