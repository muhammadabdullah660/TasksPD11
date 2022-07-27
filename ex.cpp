#include <iostream>
#include <fstream>
using namespace std;
char board[3][3] = {{'#', '#', '-'},
                    {'#', '-', '#'},
                    {'-', '-', '#'}};
main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    // Swaping for specific number of times
    for (int i = 0; i < 1; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '#' && board[i + 1][j] == '-')
                {
                    board[i][j] = '-';
                    board[i + 1][j] = '#';
                    break;
                }
            }
            cout << endl;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "\t";
        }
        cout << endl;
    }
}
