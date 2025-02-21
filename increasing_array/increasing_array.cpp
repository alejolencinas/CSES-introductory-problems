#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int previous;
    cin >> previous;
    long long movements = 0;
    int current;
    for(int i = 1; i < n; i++)
    {
        cin >> current;
        if(current < previous)
        {
            movements += previous - current;
        } else
        {
            previous = current;
        }
    }
    cout << movements;
    return 0;
}
