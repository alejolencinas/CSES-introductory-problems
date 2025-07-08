#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        long long first_pile, second_pile;
        cin >> first_pile;
        cin >> second_pile;

        if(((first_pile + second_pile) % 3) != 0)
        {
            cout << "NO\n";
        } else
        {
            long long diff;
            long long upper_pile;
            long long lower_pile;
            if(first_pile > second_pile)
            {
                diff = first_pile - second_pile;
                upper_pile = first_pile;
                lower_pile = second_pile;

            } else
            {
                diff = second_pile - first_pile;
                upper_pile = second_pile;
                lower_pile = first_pile;
            }
            if((upper_pile - 2 * diff) >= 0 && (lower_pile - diff) >= 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
