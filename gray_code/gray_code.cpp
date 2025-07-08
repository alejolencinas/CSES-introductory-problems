#include <bits/stdc++.h>

using namespace std;

void gray_code(int n, vector<string>& code, bool backwards, int inicio, int tope)
{
//    int power = pow(2, n);
    int punto_medio = (inicio + tope) / 2;
    for(int i = inicio; i < tope; i++)
    {
        if(!backwards)
        {
            if(i < punto_medio)
            {
                code[i][code[0].size() - n] = '0';
            } else
            {
                code[i][code[0].size() - n] = '1';
            }
        } else
        {
            if(i < punto_medio)
            {
                code[i][code[0].size() - n] = '1';
            }
            else
            {
                code[i][code[0].size() - n] = '0';
            }
        }
    }
    if(n < 2)
    {
        return;
    }
    gray_code(n-1, code, false, inicio, punto_medio);
    gray_code(n-1, code, true, punto_medio, tope);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int lines = pow(2, n);
    vector<string> result (lines, string(n, '0'));
    gray_code(n, result, false, 0, lines);
    for(size_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << "\n";
    }
    return 0;
}
