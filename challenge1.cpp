#include <iostream>
#include <fstream>
using namespace std;
string a;
int b;
string parserecord(string, int);
void getbirthdaycake();
void getoutput();
main()
{
    getoutput();
}
string parserecord(string record, int field)
{
    string item;
    int commacount = 1;
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
void getbirthdaycake()
{
    string word;
    fstream file;
    file.open("name.txt", ios::in);
    while (!file.eof())
    {
        getline(file, word);
        a = parserecord(word, 1);
        b = stoi(parserecord(word, 2));
    }
    file.close();
}
void getoutput()
{
    getbirthdaycake();
    if (b % 2 == 0)
    {
        cout << "###############" << endl;
        cout << "# " << b << " HB " << a << "! " << b << " #" << endl;
        cout << "###############";
    }
    else
    {
        cout << "***************" << endl;
        cout << "* " << b << " HB " << a << "! " << b << " *" << endl;
        cout << "***************";
    }
}