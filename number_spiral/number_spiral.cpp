#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<long long>> default_matrix = {
        {0, 0, 0, 0 , 0, 0, 0, 0},
        {0, 1, 2, 9, 10, 25, 26, 49},
        {0, 4, 3, 8, 11, 24, 27, 48},
        {0, 5, 6, 7, 12, 23, 28, 47},
        {0, 16, 15, 14, 13, 22, 29, 46},
        {0, 17, 18, 19, 20, 21, 30, 45},
        {0, 36, 35, 34, 33, 32, 31, 44},
        {0, 37, 38, 39, 40, 41, 42, 43}};

    int t;
    cin >> t;
    int x, y;
    long long number_result;
    vector<pair<int, int>> coordinates;
    for(int i = 0; i < t; i++)
    {
        cin >> x >> y;
        coordinates.push_back(make_pair(x, y));
    }
    for(int i = 0; i < t; i++)
    {
        x = coordinates[i].first;
        y = coordinates[i].second;
        if(x <= 7 && y <= 7)
        {
            cout << default_matrix[x][y] << "\n";
        } else
        {
            long long square_num = max(x, y);
            if((square_num % 2) == 0)
            {
                square_num++;
            }
            long long max_square_value = square_num * square_num;
            long long min_square_value = (square_num - 2) * (square_num - 2) + 1;

            if( (x == 1) && (y == (square_num - 1)) )
            {
                //min value case
                number_result = min_square_value;
            } else if( (x == 1) && (y == square_num) )
            {
                //max value case
                number_result = max_square_value;
            } else if( (y == (square_num - 1)) && (x < square_num) )
            {
                number_result = min_square_value + (x - 1);
            } else if( (y < (square_num - 1)) && (x < square_num) )
            {
                number_result = min_square_value + (x - 1) + (square_num - 1 - y);
            } else if(y == square_num)
            {
                number_result = max_square_value - (x - 1);
            } else
            {
                number_result = max_square_value - (square_num - 1) - (square_num - y);
            }

//            if( (x == 1) && (y == (square_num - 1)) )
//            {
//                //min value case
//                number_result = min_square_value;
//            } else
//            {
//                if( (x == 1) && (y == square_num) )
//                {
//                    //max value case
//                    number_result = max_square_value;
//                } else
//                {
//                    if( (y == (square_num - 1)) && (x < square_num) )
//                    {
//                        number_result = min_square_value + (x - 1);
//                    } else
//                    {
//                        if( (y < (square_num - 1)) && (x < square_num) )
//                        {
//                            number_result = min_square_value + (x - 1) + (square_num - 1 - y);
//                        } else
//                        {
//                            if(y == square_num)
//                            {
//                                number_result = max_square_value - x - 1;
//                            } else
//                            {
//                                number_result = max_square_value - (square_num - 1) - (square_num - y);
//                            }
//                        }
//                    }
//                }
//            }
            cout << number_result << "\n";
        }
    }

    return 0;
}
