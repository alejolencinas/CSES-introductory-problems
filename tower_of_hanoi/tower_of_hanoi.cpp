#include <bits/stdc++.h>

using namespace std;

int tower_of_hanoi(const int discs, const string first_tower, const string second_tower, const string third_tower, string& movements)
{
    if(discs < 1)
    {
        return 0;
    }

    if(discs == 1)
    {
        movements.append(first_tower);
        movements.append(" ");
        movements.append(third_tower);
        movements.append("\n");
        return 1;
    }

    return tower_of_hanoi(discs - 1, first_tower, third_tower, second_tower, movements) + tower_of_hanoi(1, first_tower, second_tower, third_tower, movements) +
    tower_of_hanoi(discs - 1, second_tower, first_tower, third_tower, movements);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int discs;
    cin >> discs;

    string movements = "";
    int cant_movements = tower_of_hanoi(discs, "1", "2", "3", movements);
    cout << cant_movements << "\n" << movements;
    return 0;
}
