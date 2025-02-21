#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> numbers(n + 1, false);
    int current;
    for(int i = 0; i < n - 1; i++)
    {
        cin >> current;
        numbers[current] = true;
    }
    for(int i = 1; i < n + 1; i++)
    {
        if(!numbers[i])
        {
            cout << i;
        }
    }
    // cout << "Hello world!" << endl;
    return 0;
}
