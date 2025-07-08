#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<char, int> letters_cant;
    string s;
    cin >> s;
    for(size_t i = 0; i < s.size(); i++)
    {
        if(letters_cant.find(s[i]) != letters_cant.end())
        {
            int current_cant = letters_cant.at(s[i]);
            letters_cant[s[i]] = current_cant + 1;
        } else
        {
            letters_cant[s[i]] = 1;
        }
    }
    int odd_letters_cant = 0;
    char odd_letter;
    for(auto const& letter : letters_cant)
    {
        if((letter.second % 2) != 0)
        {
            odd_letters_cant++;
            odd_letter = letter.first;
        }
    }
    string palindrome_result = "";
    if(odd_letters_cant > 1)
    {
        cout << "NO SOLUTION\n";
    } else
    {
        for(auto const& letter : letters_cant)
        {
            if(letter.first != odd_letter)
            {
                palindrome_result.append(string(letter.second / 2, letter.first));
            }
        }
        palindrome_result.append(string(letters_cant[odd_letter], odd_letter));
        string tail = "";
        for(auto const& letter : letters_cant)
        {
            if(letter.first != odd_letter)
            {
                tail = (string(letter.second / 2, letter.first)) + tail;
            }
        }
        palindrome_result.append(tail);
        cout << palindrome_result << "\n";
    }
    return 0;
}
