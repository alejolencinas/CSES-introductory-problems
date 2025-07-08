#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int power = 1;
    int sum = 0;
    int floor = n / (pow(5, power));

    while(floor != 0)
    {
        sum += floor;
        power++;
        floor = n / (pow(5, power));
    }

    cout << sum;
    return 0;
}
