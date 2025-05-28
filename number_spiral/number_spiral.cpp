#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int x, y;
    long long number_result;
    vector<pair<int, int>> coordinates;
    for(int i = 0; i < t; i++)
    {
        cin >> y >> x;
        coordinates.push_back(make_pair(y, x));
    }
    for(int i = 0; i < t; i++)
    {
        y = coordinates[i].first;
        x = coordinates[i].second;
        if(x == 1 && y == 1)
        {
            number_result = 1;
        } else
        {
            long long square_num = max(x, y);
            long long diag_number = ((square_num * square_num) + ((square_num - 1) * (square_num - 1) + 1)) / 2;
            number_result = diag_number;
            if(y > x)
            {
                //me muevo horizontalmente
                if((square_num % 2) == 0)
                {
                    number_result = diag_number + (square_num - x);
                } else
                {
                    number_result = diag_number - (square_num - x);
                }
            } else
            {
                if(y < x)
                {
                    //me muevo verticalmente
                    if((square_num % 2) == 0)
                    {
                        number_result = diag_number - (square_num - y);
                    } else
                    {
                        number_result = diag_number + (square_num - y);
                    }
                }
            }
        }
        cout << number_result << "\n";
    }

    return 0;
}
