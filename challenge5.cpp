#include <iostream>
#include <fstream>
using namespace std;
int price[8];
int price2[10];
string l, l2;
string name, name2;
int order, order2;
int getmose(int b, int c)
{
    int count = 0;
    if (c > b)
    {
        count++;
    }
    return count;
}
string parserecord(string record, int field)
{
    string item;
    int commacount = 0;
    for (int i = 0; i < record.length(); i++)
    {
        if (record[i] == ',')
        {
            commacount++;
        }
        else if (commacount == field)
        {
            item = item + record[i];
        }
    }
    return item;
}
main()
{
    int count;
    string bracket, bracket2;
    string line;
    fstream file;
    int ora, pr;
    cout << "enter how many orders u wanna place";
    cin >> ora;
    cout << "enter how much price should be set for free pizza";
    cin >> pr;
    file.open("customer.txt", ios::in);

    file >> name;
    file >> order;
    file >> bracket;
    for (int i = 0; i < bracket.length(); i++)
    {
        if (bracket[i] == '[' || bracket[i] == ']')
            continue;
        else
        {
            l = l + bracket[i];
        }
    }
    for (int i = 0; i < order; i++)
    {
        price[i] = stoi(parserecord(l, i));
    }
    for (int i = 0; i <= order; i++)
    {
        count = count + getmose(pr, price[i]);
    }

    if (count > ora)
        cout << name << endl;
    file >> name2;
    file >> order2;
    file >> bracket2;
    for (int i = 0; i < bracket2.length(); i++)
    {
        if (bracket2[i] == '[' || bracket2[i] == ']')
            continue;
        else
        {
            l2 = l2 + bracket2[i];
        }
    }
    for (int i = 0; i < order2; i++)
    {
        price2[i] = stoi(parserecord(l2, i));
    }
    for (int i = 0; i <= order2; i++)
    {
        count = count + getmose(pr, price2[i]);
    }
    if (count > ora)
        cout << name2;
}