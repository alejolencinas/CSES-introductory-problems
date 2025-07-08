#include <bits/stdc++.h>

using namespace std;

vector<int> fact_memoization(24, 0);
//abcdefghijklmnopqrstuvwxyz
vector<int> char_hits(26, 0);

int fact(int n)
{
    if(n < 2)
    {
        fact_memoization[n] = 1;
        return 1;
    }
    if(fact_memoization[n] != 0)
    {
        return fact_memoization[n];
    }
    int result = fact(n-1) * n;
    fact_memoization[n] = result;
    return result;
}

string remove_from_str(const string& inp_s, const size_t index)
{
    string result = inp_s;
    if(index >= 0 && index < inp_s.size())
    {
        result.erase(index, 1);
    }
    return result;
}

set<string> get_strings_combinations(const string& input_string)
{
    set<string> result;
    if(input_string.size() < 2)
    {
        result.insert(input_string);
        return result;
    }

    for(size_t i = 0; i < input_string.size(); i++)
    {
        string lead_str = string(1, input_string[i]);
        string str_remainder = remove_from_str(input_string, i);
        set<string> subcombinations = get_strings_combinations(str_remainder);
        for(string combination : subcombinations)
        {
            result.insert(lead_str + combination);
        }
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //'a' ascii code = 97
    string input;
    cin >> input;
    for(size_t i = 0; i < input.size(); i++)
    {
        int char_pos = input[i] - 97;
        char_hits[char_pos] = char_hits[char_pos] + 1;
    }
    long long div = 1;
    for(size_t i = 0; i < char_hits.size(); i++)
    {
        if(char_hits[i] > 1)
        {
            div *= fact(char_hits[i]);
        }
    }
    cout << fact(input.size()) / div << "\n";

    set<string> combinations = get_strings_combinations(input);
    for(string combination : combinations)
    {
        cout << combination << "\n";
    }

    return 0;
}
