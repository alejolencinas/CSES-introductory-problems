#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long total_sum = (n * (n + 1)) / 2;
    if((total_sum % 2) == 0)
    {
        cout << "YES" << "\n";
        long long half_sum = total_sum / 2;
        vector<int> first_set;
        vector<int> second_set;
        long long difference = half_sum;
        int i = n;
        while(i > 0)
        {
            if(i <= difference)
            {
                difference -= i;
                first_set.push_back(i);
            } else
            {
                second_set.push_back(i);
            }
            i--;
        }
        cout << first_set.size() << "\n";
        for(size_t i = 0; i < first_set.size(); i++)
        {
            cout << first_set[i] << " ";
        }
        cout << "\n" << second_set.size() << "\n";
        for(size_t i = 0; i < second_set.size(); i++)
        {
            cout << second_set[i] << " ";
        }
    } else
    {
        cout << "NO";
    }

    return 0;
}
