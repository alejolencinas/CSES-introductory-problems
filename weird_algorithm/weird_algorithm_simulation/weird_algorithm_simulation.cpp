#include <bits/stdc++.h>

using namespace std;

long long weird_algorithm(long long n, bool& reachs_overflow)
{
    long long max_value = n;
    reachs_overflow = false;
    while(n > 1)
    {
        if((n%2) == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        max_value = max(n, max_value);
    }
    if(n < 1)
    {
        reachs_overflow = true;
    }

    return max_value;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("output.txt", "w", stdout);
    long long max_n = 1e6;
    vector<long long> max_values(1000000 + 1, 0);
    vector<bool> overflows(1000000 + 1, false);
    for(int i = 1; i <= max_n; i++)
    {
        bool reaches_overflow = false;
        max_values[i] = weird_algorithm(i, reaches_overflow);
        overflows[i] = reaches_overflow;
    }
    long long max_value = 1;
    int max_value_index = 1;
    cout << "Ns with overflow: \n";
    for(int i = 1; i <= 1000000 + 1; i++)
    {
        if(max_values[i] > max_value)
        {
            max_value = max_values[i];
            max_value_index = i;
        }
        if(overflows[i])
        {
            cout << i << " ";
        }
    }
    cout << "\nMax value: " << max_value << " for n = " << max_value_index << "\n";
    return 0;
}
