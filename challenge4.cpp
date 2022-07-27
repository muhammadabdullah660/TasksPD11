#include <iostream>
#include <fstream>
using namespace std;
string a = "What... why did you make this?";
string line;
string f1()
{
    string line = "";
    fstream file;
    file.open("lol2.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
    }
    return line;
    file.close();
}

int getindex()
{
    string line;
    fstream file;
    file.open("lol2.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
    }
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == '\"')
        {
            return i;
        }
    }
    return 0;
}
int getindex2()
{

    string line;
    fstream file;
    file.open("lol2.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
    }
    for (int i = (line.length() - 1); i > 0; i--)
    {
        if (line[i] == '\"')
        {
            return i;
        }
    }
    return 0;
}
main()
{
    string z = f1();
    int y = getindex();
    int x = getindex2();
    if (z[y] == '\"')
    {
        for (int i = y; i <= x; i++)
        {

            cout << z[i];
        }
    }
    else
        cout << a;
}