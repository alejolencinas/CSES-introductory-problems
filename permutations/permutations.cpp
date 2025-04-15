#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n > 1 && n < 4)
    {
        cout << "NO SOLUTION";
    } else
    {
        string evens = "", odds = "";
        for(int i = 1; i <= n; i++)
        {
            if((i % 2) == 0)
            {
                evens.append(to_string(i));
                evens.append(" ");
            }
            if((i % 2) != 0)
            {
                odds.append(to_string(i));
                odds.append(" ");
            }
        }
        cout << evens << odds;
    }
    return 0;
}
