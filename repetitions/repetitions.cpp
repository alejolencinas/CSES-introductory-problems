#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int longest = 1;
    int current_long = 1;
    char previous_char = s[0];
    for(size_t i = 1; i < s.size(); i++)
    {
        if(s[i] == previous_char)
        {
            current_long++;
        } else
        {
            current_long = 1;
        }

        longest = max(longest, current_long);
        previous_char = s[i];
    }
    cout << longest;
    return 0;
}
